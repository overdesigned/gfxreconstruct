#ifndef DX12_GRAPH_EXPORT_CONSUMER_H
#define DX12_GRAPH_EXPORT_CONSUMER_H

#include "generated/generated_dx12_consumer_layer.h"
#include "decode/dx12_object_mapping_util.h"

#include <memory>
#include <array>
#include <variant>
#include <unordered_map>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

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

    using Submission = std::vector<CmdList*>;

    struct Signal
    {
        format::HandleId fence;
        uint64_t         value;
    };

    struct Wait
    {
        format::HandleId fence;
        uint64_t         value;
    };

    struct CmdQueue
    {
        std::vector<std::variant<Submission, Signal, Wait>> submissions;
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

    virtual void
    Pre_Process_ID3D12CommandQueue_ExecuteCommandLists(const ApiCallInfo&                        call_info,
                                                       format::HandleId                          object_id,
                                                       UINT                                      NumCommandLists,
                                                       HandlePointerDecoder<ID3D12CommandList*>* ppCommandLists)
    {
        auto cmd_queue = FindQueue(object_id);

        std::vector<CmdList*> cmd_lists{ ppCommandLists->GetLength(), nullptr };

        object_mapping::MapObjectArray(ppCommandLists, [&](size_t idx, format::HandleId cmd_list_id) {
            cmd_lists[idx] = FindCmdList(cmd_list_id);
        });

        cmd_queue->submissions.push_back(Submission{});
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

    void OnPresent(format::HandleId swapchain_id) {}

  private:
    std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>> cmd_queues_;
    std::unordered_map<format::HandleId, std::unique_ptr<CmdList>>  cmd_lists_;

    std::pair<format::HandleId, CmdList*>                          cached_last_cmd_list_ = {};

    std::unordered_map<format::HandleId, std::unique_ptr<PsoInfo>> pso_states_;

};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // DX12_GRAPH_EXPORT_CONSUMER_H
