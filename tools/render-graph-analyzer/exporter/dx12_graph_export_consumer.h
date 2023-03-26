#ifndef DX12_GRAPH_EXPORT_CONSUMER_H
#define DX12_GRAPH_EXPORT_CONSUMER_H

#include "generated/generated_dx12_consumer_layer.h"
#include "decode/dx12_object_mapping_util.h"

#include <memory>
#include <array>
#include <variant>
#include <unordered_map>
#include <atomic>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

template <class... Ts>
struct overload : Ts...
{
    using Ts::operator()...;
};
template <class... Ts>
overload(Ts...) -> overload<Ts...>;

class Dx12GraphExportConsumer : public Dx12LayerConsumer
{
  public:
    struct PsoInfo
    {
        format::HandleId pso_id = {};
    };

    struct RootParameter
    {
        D3D12_ROOT_PARAMETER_TYPE type;
        uint32_t                  index;

        std::variant<Decoded_D3D12_GPU_DESCRIPTOR_HANDLE, D3D12_GPU_VIRTUAL_ADDRESS> data;

        RootParameter() {}
    };

    struct PipelineState
    {
        PsoInfo*         pso;
        format::HandleId rtvs[D3D12_SIMULTANEOUS_RENDER_TARGET_COUNT];
        format::HandleId dsv;
        D3D12_VIEWPORT   viewports[D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        D3D12_RECT       scissor_rects[D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];

        std::array<format::HandleId, D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES> descriptor_heaps;

        format::HandleId graphics_root_signature;
        format::HandleId compute_root_signature;

        std::array<RootParameter, D3D12_MAX_ROOT_COST> graphics_root_params;
        std::array<RootParameter, D3D12_MAX_ROOT_COST> compute_root_params;
    };

    struct CmdList
    {
        PipelineState pipeline_;
    };

    using CmdListsBatch = std::vector<CmdList*>;

    struct FenceValue
    {
        format::HandleId fence;
        uint64_t         value;

        struct Hash
        {
            size_t operator()(const FenceValue& fv) const noexcept
            {
                return std::hash<uint64_t>()(fv.fence ^ fv.value);
            }
        };

        bool operator==(const FenceValue& rhs) const { return (fence == rhs.fence) && (value == rhs.value); }
    };

    struct Signal : public FenceValue
    {};

    struct Wait : public FenceValue
    {};

    struct Present
    {
        format::HandleId swapchain;
    };

    struct Submission
    {
        uint32_t                                           sequence;
        std::variant<CmdListsBatch, Signal, Wait, Present> action;
    };

    struct CmdQueue
    {
        std::vector<Submission> submissions;
    };

  public:
    Dx12GraphExportConsumer(std::shared_ptr<application::Application> application, const DxReplayOptions& options) :
        Dx12LayerConsumer(application, options)
    {}

    // Present / Frame tracking

    virtual void Pre_Process_IDXGISwapChain_Present(const ApiCallInfo& call_info,
                                                    format::HandleId   object_id,
                                                    HRESULT            return_value,
                                                    UINT               SyncInterval,
                                                    UINT               Flags) override
    {
        OnPresent(object_id);
    }

    // SwapChain Creation / Present

    virtual void Pre_Process_IDXGIFactory_CreateSwapChain(const ApiCallInfo& call_info,
                                                          format::HandleId   object_id,
                                                          HRESULT            return_value,
                                                          format::HandleId   pDevice,
                                                          StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC>* pDesc,
                                                          HandlePointerDecoder<IDXGISwapChain*>* ppSwapChain)
    {
        AssociateSwapChainAndQueue(pDevice, *ppSwapChain->GetPointer());
    }

    virtual void Pre_Process_IDXGIFactory2_CreateSwapChainForHwnd(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        HRESULT                                                        return_value,
        format::HandleId                                               pDevice,
        uint64_t                                                       hWnd,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>*           pDesc,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC>* pFullscreenDesc,
        format::HandleId                                               pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>*                        ppSwapChain) override
    {
        AssociateSwapChainAndQueue(pDevice, *ppSwapChain->GetPointer());
    }

    virtual void
    Pre_Process_IDXGIFactory2_CreateSwapChainForCoreWindow(const ApiCallInfo& call_info,
                                                           format::HandleId   object_id,
                                                           HRESULT            return_value,
                                                           format::HandleId   pDevice,
                                                           format::HandleId   pWindow,
                                                           StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
                                                           format::HandleId                        pRestrictToOutput,
                                                           HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain) override
    {
        AssociateSwapChainAndQueue(pDevice, *ppSwapChain->GetPointer());
    }

    virtual void Pre_Process_IDXGIFactory2_CreateSwapChainForComposition(
        const ApiCallInfo&                                   call_info,
        format::HandleId                                     object_id,
        HRESULT                                              return_value,
        format::HandleId                                     pDevice,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId                                     pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>*              ppSwapChain) override
    {
        AssociateSwapChainAndQueue(pDevice, *ppSwapChain->GetPointer());
    }

    virtual void
    Pre_Process_IDXGISwapChain1_Present1(const ApiCallInfo&                                     call_info,
                                         format::HandleId                                       object_id,
                                         HRESULT                                                return_value,
                                         UINT                                                   SyncInterval,
                                         UINT                                                   PresentFlags,
                                         StructPointerDecoder<Decoded_DXGI_PRESENT_PARAMETERS>* pPresentParameters)
    {
        OnPresent(object_id);
    }

    // CmdList lifetime

    virtual void Pre_Process_ID3D12GraphicsCommandList_Reset(const ApiCallInfo& call_info,
                                                             format::HandleId   object_id,
                                                             HRESULT            return_value,
                                                             format::HandleId   pAllocator,
                                                             format::HandleId   pInitialState) override
    {
        auto cmd_list = FindCmdList(object_id);
        SetPso(cmd_list, pInitialState);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_Close(const ApiCallInfo& call_info,
                                                             format::HandleId   object_id,
                                                             HRESULT            return_value) override
    {
        auto cmd_list = FindCmdList(object_id);

        if (cached_last_cmd_list_.first == object_id)
            cached_last_cmd_list_ = {};
    }

    // Queue submissions

    virtual void Pre_Process_ID3D12CommandQueue_ExecuteCommandLists(
        const ApiCallInfo&                        call_info,
        format::HandleId                          object_id,
        UINT                                      NumCommandLists,
        HandlePointerDecoder<ID3D12CommandList*>* ppCommandLists) override
    {
        auto cmd_queue = FindQueue(object_id);

        std::vector<CmdList*> cmd_lists{ ppCommandLists->GetLength(), nullptr };

        object_mapping::MapObjectArray(ppCommandLists, [&](size_t idx, format::HandleId cmd_list_id) {
            cmd_lists[idx] = FindCmdList(cmd_list_id);
        });

        cmd_queue->submissions.push_back(Submission{ Submission{ submission_sequence_++, cmd_lists } });
    }

    virtual void Pre_Process_ID3D12CommandQueue_Signal(const ApiCallInfo& call_info,
                                                       format::HandleId   object_id,
                                                       HRESULT            return_value,
                                                       format::HandleId   pFence,
                                                       UINT64             Value) override
    {
        auto cmd_queue = FindQueue(object_id);
        cmd_queue->submissions.push_back(Submission{ submission_sequence_++, Signal{ pFence, Value } });
    }

    virtual void Pre_Process_ID3D12CommandQueue_Wait(const ApiCallInfo& call_info,
                                                     format::HandleId   object_id,
                                                     HRESULT            return_value,
                                                     format::HandleId   pFence,
                                                     UINT64             Value) override
    {
        auto cmd_queue = FindQueue(object_id);
        cmd_queue->submissions.push_back(Submission{ submission_sequence_++, Wait{ pFence, Value } });
    }

  private:
    CmdList* FindCmdList(format::HandleId cmd_list_id)
    {
        if (cached_last_cmd_list_.first)
        {
            return cached_last_cmd_list_.second;
        }

        CmdList* cmd_list_ptr = nullptr;

        auto iter = cmd_lists_.find(cmd_list_id);
        if (iter != cmd_lists_.end())
        {
            cmd_list_ptr = iter->second.get();
        }
        else
        {
            auto new_state = std::make_unique<CmdList>();
            cmd_list_ptr   = new_state.get();

            cmd_lists_.insert(iter, std::make_pair(cmd_list_id, std::move(new_state)));
        }

        cached_last_cmd_list_ = std::make_pair(cmd_list_id, cmd_list_ptr);

        return cmd_list_ptr;
    }

    CmdQueue* FindQueue(format::HandleId cmd_queue_id)
    {
        CmdQueue* cmd_queue = nullptr;

        auto iter = cmd_queues_.find(cmd_queue_id);
        if (iter != cmd_queues_.end())
        {
            cmd_queue = iter->second.get();
        }
        else
        {
            auto new_q = std::make_unique<CmdQueue>();
            cmd_queue  = new_q.get();

            cmd_queues_.insert(iter, std::make_pair(cmd_queue_id, std::move(new_q)));
        }

        return cmd_queue;
    }

    PsoInfo* FindPso(format::HandleId pso_id)
    {
        auto iter = pso_states_.find(pso_id);
        return (iter != pso_states_.end()) ? iter->second.get() : nullptr;
    }

    void SetPso(CmdList* cmd_list, format::HandleId pso_id)
    {
        if (!cmd_list->pipeline_.pso || (cmd_list->pipeline_.pso->pso_id != pso_id))
        {
            cmd_list->pipeline_.pso = FindPso(pso_id);
        }
    }

    void AssociateSwapChainAndQueue(format::HandleId queue, format::HandleId swapchain)
    {
        swapchain_queue_map_[swapchain] = queue;
    }

    void OnPresent(format::HandleId swapchain_id)
    {
        auto queue_id  = swapchain_queue_map_[swapchain_id];
        auto cmd_queue = FindQueue(queue_id);
        cmd_queue->submissions.push_back(Submission{ submission_sequence_++, Present{ swapchain_id } });

        OnFrameEnd();
    }

    void OnFrameEnd()
    {
        AnalyzeFrame();

        for (auto& q : cmd_queues_)
        {
            q.second->submissions.clear();
        }

        cmd_lists_.clear();

        cached_last_cmd_list_ = {};

        submission_sequence_ = 0;
    }

    void AnalyzeFrame()
    {
        SubmissionAnalyzer analyzer;
        analyzer.run(cmd_queues_);
    }

    struct SubmissionAnalyzer
    {
        std::vector<std::pair<const Submission*, const CmdQueue*>> submissions_;

        std::unordered_map<FenceValue, bool, FenceValue::Hash> signals_;

        enum class VisitResult
        {
            Continue,
            Yield,
            NeedRevisit,
        };

        void run(const std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>>& cmd_queues)
        {
            submissions_.clear();

            for (auto& q : cmd_queues)
            {
                for (auto& submission : q.second->submissions)
                {
                    if (auto p_signal = std::get_if<Signal>(&submission.action))
                    {
                        signals_.insert(std::make_pair(*p_signal, false));
                    }

                    submissions_.push_back({ &submission, q.second.get() });
                }
            }

            std::sort(submissions_.begin(), submissions_.end(), [](auto& l, auto& r) {
                return l.first->sequence < r.first->sequence;
            });

            struct QueueExecState
            {
                CmdQueue* queue;
                uint32_t  curr_submission_idx;
            };

            std::vector<QueueExecState> queues{ cmd_queues.size() };
            std::transform(cmd_queues.begin(), cmd_queues.end(), queues.begin(), [](auto& iter) {
                return QueueExecState{ iter.second.get(), 0 };
            });

            uint32_t completed_queues = 0;
            while (completed_queues < queues.size())
            {
                for (uint32_t iq = 0; iq < queues.size(); iq++)
                {
                    auto& q = queues[iq];

                    auto visitResult = VisitResult::Continue;

                    while ((visitResult == VisitResult::Continue) &&
                           (q.curr_submission_idx < q.queue->submissions.size()))
                    {
                        auto& submission = q.queue->submissions[q.curr_submission_idx];

                        visitResult = std::visit(*this, submission.action);

                        if (visitResult != VisitResult::NeedRevisit)
                        {
                            q.curr_submission_idx++;
                        }
                    }

                    if (q.curr_submission_idx == q.queue->submissions.size())
                    {
                        completed_queues++;
                    }
                }
            }
        }

        VisitResult operator()(const CmdListsBatch& batch) { return VisitResult::Continue; }
        VisitResult operator()(const Signal& signal)
        {
            signals_[signal] = true;
            return VisitResult::Yield;
        }
        VisitResult operator()(const Wait& wait)
        {
            auto       found_signal               = signals_.find(wait);
            const bool not_signaled_in_curr_frame = (found_signal == signals_.end());
            return (not_signaled_in_curr_frame || (found_signal->second)) ? VisitResult::Continue
                                                                          : VisitResult::NeedRevisit;
        }
        VisitResult operator()(const Present& present) { return VisitResult::Continue; }
    };

  private:
    std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>> cmd_queues_;
    std::unordered_map<format::HandleId, std::unique_ptr<CmdList>>  cmd_lists_;

    std::atomic_uint32_t submission_sequence_;

    std::pair<format::HandleId, CmdList*> cached_last_cmd_list_ = {};

    std::unordered_map<format::HandleId, std::unique_ptr<PsoInfo>> pso_states_;

    std::unordered_map<format::HandleId, format::HandleId> swapchain_queue_map_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // DX12_GRAPH_EXPORT_CONSUMER_H
