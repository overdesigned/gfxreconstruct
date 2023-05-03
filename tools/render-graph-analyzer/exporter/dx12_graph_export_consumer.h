#ifndef DX12_GRAPH_EXPORT_CONSUMER_H
#define DX12_GRAPH_EXPORT_CONSUMER_H

#include "generated/generated_dx12_consumer_layer.h"
#include "decode/dx12_object_mapping_util.h"

#include <memory>
#include <array>
#include <variant>
#include <unordered_map>
#include <atomic>

#include <d3d12shader.h>

#include "external/rps/include/rps/rps.h"
#include "external/rps/src/core/rps_util.hpp"

using rps::Arena;
using rps::ArrayRef;
using rps::ConstArrayRef;

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

#define GRAPH_EXPORTER_NOT_IMPLEMENTED assert(false && "Not implemented")

template <class... Ts>
struct overload : Ts...
{
    using Ts::operator()...;
};
template <class... Ts>
overload(Ts...) -> overload<Ts...>;

struct BufferView
{
    format::HandleId buf;
    uint64_t         offset;
    uint64_t         size;
};

struct IABindings
{
    D3D12_INDEX_BUFFER_VIEW            ib;
    ArrayRef<D3D12_VERTEX_BUFFER_VIEW> vbs;
};

struct RSState
{
    format::HandleId            vrs_image;
    D3D12_SHADING_RATE          vrs_shading_rate;
    D3D12_SHADING_RATE_COMBINER vrs_combiners[D3D12_RS_SET_SHADING_RATE_COMBINER_COUNT];
    ArrayRef<D3D12_VIEWPORT>    viewports;
    ArrayRef<RECT>              scissor_rects;
};

struct D3D12DescriptorHandle
{
    format::HandleId heap_id = {};
    uint32_t         index   = UINT32_MAX;

    D3D12DescriptorHandle() {}
    D3D12DescriptorHandle(const Decoded_D3D12_CPU_DESCRIPTOR_HANDLE& hdl) : heap_id(hdl.heap_id), index(hdl.index) {}

    bool operator==(const D3D12DescriptorHandle& rhs) const { return (heap_id == rhs.heap_id) && (index == rhs.index); }
};

struct OMBindings
{
    D3D12DescriptorHandle           dsv;
    ArrayRef<D3D12DescriptorHandle> rtvs;
};

struct SOBindings
{
    struct SOBufView
    {
        BufferView buf;
        BufferView filled_size_buf;
    };

    ArrayRef<SOBufView> so_bufs;
};


bool operator==(const Decoded_D3D12_GPU_DESCRIPTOR_HANDLE& lhs, const Decoded_D3D12_GPU_DESCRIPTOR_HANDLE& rhs)
{
    return lhs.decoded_value == rhs.decoded_value;
}

bool operator==(const D3D12_INDEX_BUFFER_VIEW& lhs, const D3D12_INDEX_BUFFER_VIEW& rhs)
{
    return (lhs.BufferLocation == rhs.BufferLocation) && (lhs.SizeInBytes == rhs.SizeInBytes) &&
           (lhs.Format == rhs.Format);
}

bool operator==(const D3D12_VERTEX_BUFFER_VIEW& lhs, const D3D12_VERTEX_BUFFER_VIEW& rhs)
{
    return (lhs.BufferLocation == rhs.BufferLocation) && (lhs.SizeInBytes == rhs.SizeInBytes) &&
           (lhs.StrideInBytes == rhs.StrideInBytes);
}

struct RootConstants
{
    ArrayRef<UINT> data;

    bool operator==(const RootConstants& rhs) const
    {
        return (data.size() == rhs.data.size()) && std::equal(data.begin(), data.end(), rhs.data.begin());
    }
};

struct RootParameter
{
    uint32_t index = 0;

    std::variant<Decoded_D3D12_GPU_DESCRIPTOR_HANDLE, D3D12_GPU_VIRTUAL_ADDRESS, RootConstants> data;

    bool operator==(const RootParameter& rhs) const
    {
        return (index == rhs.index) && (data == rhs.data);
    }

    bool operator!=(const RootParameter& rhs) const { return !((*this) == rhs); }
};

struct RootSignatureInfo
{
    format::HandleId           root_sig = {};
    D3D12_ROOT_SIGNATURE_DESC1 desc     = {};
};

struct RootParamBindings
{
    RootSignatureInfo*      root_sig = {};
    ArrayRef<RootParameter> root_params;

    RootParamBindings() {}

    RootParamBindings(Arena*                                          arena,
                      RootSignatureInfo*                              root_sig_in,
                      uint64_t                                        root_params_mask,
                      std::array<RootParameter, D3D12_MAX_ROOT_COST>& root_params_in)
    {
        root_sig    = root_sig_in;
        root_params = arena->NewArray<RootParameter>(__popcnt64(root_params_mask));

        uint64_t mask = root_params_mask;
        for (uint32_t s = 0, d = 0; mask != 0; s++, mask >>= 1)
        {
            if (mask & 1u)
            {
                assert(root_params_in[s].index == s);
                root_params[d] = root_params_in[s];
                d++;
            }
        }
    };
};

struct PsoInfo
{
    format::HandleId pso_id         = {};
    format::HandleId root_signature = {};

    D3D12_STREAM_OUTPUT_DESC   stream_output         = {};
    D3D12_BLEND_DESC           blend                 = {};
    D3D12_RASTERIZER_DESC      rasterizer            = {};
    D3D12_INPUT_LAYOUT_DESC    input_layout          = {};
    D3D12_RT_FORMAT_ARRAY      render_target_formats = {};
    DXGI_SAMPLE_DESC           sample_desc           = {};
    D3D12_DEPTH_STENCIL_DESC1  depth_stencil1        = {};
    D3D12_VIEW_INSTANCING_DESC view_instancing       = {};

    uint32_t active_vb_slot_mask  = 0;
    uint32_t active_rtv_slot_mask = 0;

    void SetDesc(const Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC& desc, Arena& arena)
    {
        root_signature = desc.pRootSignature;

        if (desc.VS)
            ReflectShader(*desc.VS->decoded_value, RPS_SHADER_STAGE_VS);
        if (desc.HS)
            ReflectShader(*desc.HS->decoded_value, RPS_SHADER_STAGE_HS);
        if (desc.DS)
            ReflectShader(*desc.DS->decoded_value, RPS_SHADER_STAGE_DS);
        if (desc.GS)
            ReflectShader(*desc.GS->decoded_value, RPS_SHADER_STAGE_GS);
        if (desc.PS)
            ReflectShader(*desc.PS->decoded_value, RPS_SHADER_STAGE_PS);

        SetStreamOut(arena, desc.StreamOutput);
        SetBlendState(desc.BlendState);
        SetRasterizer(desc.RasterizerState);
        SetDepthStencilState(desc.DepthStencilState);
        SetInputLayout(arena, desc.InputLayout);

        render_target_formats.NumRenderTargets = desc.decoded_value->NumRenderTargets;
        std::copy(std::begin(render_target_formats.RTFormats),
                  std::end(render_target_formats.RTFormats),
                  std::begin(desc.decoded_value->RTVFormats));

        sample_desc = desc.decoded_value->SampleDesc;
    }

    void SetDesc(const Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC& desc, Arena& arena)
    {
        root_signature = desc.pRootSignature;

        ReflectShader(*desc.CS->decoded_value, RPS_SHADER_STAGE_CS);
    }

    void SetDesc(const Decoded_D3D12_PIPELINE_STATE_STREAM_DESC& desc, Arena& arena)
    {
        root_signature = desc.root_signature;

        if (desc.cs_bytecode.decoded_value)
        {
            ReflectShader(*desc.cs_bytecode.decoded_value, RPS_SHADER_STAGE_CS);
        }
        else
        {
            if (desc.vs_bytecode.decoded_value)
                ReflectShader(*desc.vs_bytecode.decoded_value, RPS_SHADER_STAGE_VS);
            if (desc.hs_bytecode.decoded_value)
                ReflectShader(*desc.hs_bytecode.decoded_value, RPS_SHADER_STAGE_HS);
            if (desc.ds_bytecode.decoded_value)
                ReflectShader(*desc.ds_bytecode.decoded_value, RPS_SHADER_STAGE_DS);
            if (desc.gs_bytecode.decoded_value)
                ReflectShader(*desc.gs_bytecode.decoded_value, RPS_SHADER_STAGE_GS);
            if (desc.ps_bytecode.decoded_value)
                ReflectShader(*desc.ps_bytecode.decoded_value, RPS_SHADER_STAGE_PS);
            if (desc.as_bytecode.decoded_value)
                ReflectShader(*desc.as_bytecode.decoded_value, RPS_SHADER_STAGE_AS);
            if (desc.ms_bytecode.decoded_value)
                ReflectShader(*desc.ms_bytecode.decoded_value, RPS_SHADER_STAGE_MS);

            SetStreamOut(arena, &desc.stream_output);
            SetBlendState(&desc.blend);
            SetRasterizer(&desc.rasterizer);
            if (desc.depth_stencil.decoded_value)
                SetDepthStencilState(&desc.depth_stencil);
            if (desc.depth_stencil1.decoded_value)
                SetDepthStencilState(&desc.depth_stencil1);
            SetInputLayout(arena, &desc.input_layout);

            if (desc.render_target_formats.decoded_value)
                render_target_formats = *desc.render_target_formats.decoded_value;

            if (desc.sample_desc.decoded_value)
                sample_desc = *desc.sample_desc.decoded_value;

            if (desc.view_instancing.decoded_value)
                view_instancing = *desc.view_instancing.decoded_value;
        }
    }

    void SetDesc(const Decoded_D3D12_STATE_OBJECT_DESC& desc, Arena& arena)
    {
        if (desc.decoded_value->Type == D3D12_STATE_OBJECT_TYPE_RAYTRACING_PIPELINE)
        {
            printf("\nUnhandled Raytraicng PSO!");
        }
    }

private:
    void ReflectShader(D3D12_SHADER_BYTECODE code, RpsShaderStageBits stage)
    {
        if (!code.pShaderBytecode || (code.BytecodeLength == 0))
            return;



    }

    static const char* GetShaderStageName(RpsShaderStageBits stage)
    {
        switch (stage)
        {
            case RPS_SHADER_STAGE_VS:
                return "vs";
            case RPS_SHADER_STAGE_PS:
                return "ps";
            case RPS_SHADER_STAGE_GS:
                return "gs";
            case RPS_SHADER_STAGE_CS:
                return "cs";
            case RPS_SHADER_STAGE_HS:
                return "hs";
            case RPS_SHADER_STAGE_DS:
                return "ds";
            case RPS_SHADER_STAGE_RAYTRACING:
                return "raytracing";
            case RPS_SHADER_STAGE_AS:
                return "as";
            case RPS_SHADER_STAGE_MS:
                return "ms";
        }
        return "unknown";
    }

    void SetStreamOut(Arena& arena, const Decoded_D3D12_STREAM_OUTPUT_DESC* so)
    {
        if (so && so->decoded_value)
        {
            stream_output = *so->decoded_value;
            CloneArray(arena, stream_output.pBufferStrides, stream_output.NumStrides);
            CloneArray(arena, stream_output.pSODeclaration, stream_output.NumEntries);
        }
    }

    void SetBlendState(const Decoded_D3D12_BLEND_DESC* blend_desc)
    {
        if (blend_desc && blend_desc->decoded_value)
        {
            blend = *blend_desc->decoded_value;
        }
    }

    void SetRasterizer(const Decoded_D3D12_RASTERIZER_DESC* rasterizer_desc)
    {
        if (rasterizer_desc && rasterizer_desc->decoded_value)
        {
            rasterizer = *rasterizer_desc->decoded_value;
        }
    }

    template <typename T>
    void SetDepthStencilState(const T* depth_stencil_desc)
    {
        if (depth_stencil_desc && depth_stencil_desc->decoded_value)
        {
            depth_stencil1.DepthEnable      = depth_stencil_desc->decoded_value->DepthEnable;
            depth_stencil1.DepthWriteMask   = depth_stencil_desc->decoded_value->DepthWriteMask;
            depth_stencil1.DepthFunc        = depth_stencil_desc->decoded_value->DepthFunc;
            depth_stencil1.StencilEnable    = depth_stencil_desc->decoded_value->StencilEnable;
            depth_stencil1.StencilReadMask  = depth_stencil_desc->decoded_value->StencilReadMask;
            depth_stencil1.StencilWriteMask = depth_stencil_desc->decoded_value->StencilWriteMask;
            depth_stencil1.FrontFace        = depth_stencil_desc->decoded_value->FrontFace;
            depth_stencil1.BackFace         = depth_stencil_desc->decoded_value->BackFace;

            depth_stencil1.DepthBoundsTestEnable = FALSE;

            if constexpr (std::is_same<T, Decoded_D3D12_DEPTH_STENCILOP_DESC1>())
            {
                depth_stencil1.DepthBoundsTestEnable = depth_stencil_desc->decoded_value->DepthBoundsTestEnable;
            }
        }
    }

    void SetInputLayout(Arena& arena, const Decoded_D3D12_INPUT_LAYOUT_DESC* input_layout_desc)
    {
        if (input_layout_desc)
        {
            input_layout = *input_layout_desc->decoded_value;
            CloneArray(arena, input_layout.pInputElementDescs, input_layout.NumElements);
        }
    }

    template<typename T>
    void CloneArray(Arena& arena, T*& ptr, uint32_t size)
    {
        using U = std::remove_cv_t<T>;

        if (size > 0)
        {
            auto arr     = arena.NewArray<U>(size);
            U*   new_ptr = arr.data();
            std::copy(ptr, ptr + size, new_ptr);
            ptr = new_ptr;
        }
    }
};

struct PipelineSnapshot
{
    PsoInfo*             pso;
    IABindings*          ia;
    RSState*             rs;
    OMBindings*          om;
    RootParamBindings    root_param_bindings;
    uint32_t             prim_topology;
    uint32_t             stencil_ref;
    std::array<float, 4> blend_factors;

    ArrayRef<format::HandleId> descriptor_heaps;
};

struct GraphCapture
{
    Arena arena_;

    GraphCapture() :
        arena_{ RpsAllocator{
                    &GraphCapture::Malloc,
                    &GraphCapture::Free,
                    &GraphCapture::Realloc,
                    this,
                },
                64 * 1024 * 1024 }
    {}

    static void* Malloc(void* pContext, size_t size, size_t alignment) { return _aligned_malloc(size, alignment); }

    static void Free(void* pUserContext, void* buffer) { _aligned_free(buffer); }

    static void* Realloc(void* pUserContext, void* oldBuffer, size_t oldSize, size_t newSize, size_t alignment)
    {
        return _aligned_realloc(oldBuffer, newSize, alignment);
    }
};

inline bool operator==(const D3D12_VIEWPORT& lhs, const D3D12_VIEWPORT& rhs)
{
    return (lhs.TopLeftX == rhs.TopLeftX) && (lhs.TopLeftY == rhs.TopLeftY) && (lhs.Width == rhs.Width) &&
           (lhs.Height == rhs.Height) && (lhs.MinDepth == rhs.MinDepth) && (lhs.MaxDepth == rhs.MaxDepth);
}

inline bool operator==(const D3D12_RECT& lhs, const D3D12_RECT& rhs)
{
    return (lhs.left == rhs.left) && (lhs.right == rhs.right) && (lhs.top == rhs.top) && (lhs.bottom == rhs.bottom);
}

class Dx12GraphExportConsumer : public Dx12LayerConsumer
{
  public:
    struct PipelineState
    {
        PsoInfo* pso;

        D3D12_PRIMITIVE_TOPOLOGY prim_topology;
        uint32_t                 stencil_ref;
        std::array<float, 4>     blend_factors;
        std::array<float, 2>     depth_bounds;

        D3D12_INDEX_BUFFER_VIEW                                                         ib;
        uint32_t                                                                        num_vbs;
        std::array<D3D12_VERTEX_BUFFER_VIEW, D3D12_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT> vbs;

        uint32_t                                                                  num_rtvs;
        std::array<D3D12DescriptorHandle, D3D12_SIMULTANEOUS_RENDER_TARGET_COUNT> rtvs;
        D3D12DescriptorHandle                                                     dsv;

        uint32_t                                                                             num_viewports;
        std::array<D3D12_VIEWPORT, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE> viewports;
        uint32_t                                                                             num_scissor_rects;
        std::array<D3D12_RECT, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE>     scissor_rects;
        uint32_t                                                                             num_descriptor_heaps;
        std::array<format::HandleId, D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES>                   descriptor_heaps;

        RootSignatureInfo*                             graphics_root_signature;
        RootSignatureInfo*                             compute_root_signature;
        uint64_t                                       graphics_root_params_mask;
        std::array<RootParameter, D3D12_MAX_ROOT_COST> graphics_root_params;
        uint64_t                                       compute_root_params_mask;
        std::array<RootParameter, D3D12_MAX_ROOT_COST> compute_root_params;

        static_assert(sizeof(graphics_root_params_mask) * 8 >= D3D12_MAX_ROOT_COST,
                      "Insufficient bits in graphics_root_params_mask");
        static_assert(sizeof(compute_root_params_mask) * 8 >= D3D12_MAX_ROOT_COST,
                      "Insufficient bits in compute_root_params_mask");

        void Clear()
        {
            pso           = nullptr;
            prim_topology = D3D_PRIMITIVE_TOPOLOGY_UNDEFINED;
            stencil_ref   = 0;
            blend_factors = {};
            depth_bounds  = { 0.0f, 1.0f };

            ib      = {};
            num_vbs = 0;
            vbs     = {};

            num_rtvs = 0;
            rtvs     = {};
            dsv      = {};

            num_viewports     = 0;
            viewports         = {};
            num_scissor_rects = 0;
            scissor_rects     = {};

            num_descriptor_heaps = 0;
            descriptor_heaps     = {};

            graphics_root_signature = nullptr;
            compute_root_signature  = nullptr;

            graphics_root_params_mask = 0;
            graphics_root_params      = {};
            compute_root_params_mask  = 0;
            compute_root_params       = {};
        }
    };

    struct D3D12CopyResourceArgs
    {
        format::HandleId dst;
        format::HandleId src;
    };

    struct D3D12CopyBufferRegionArgs
    {
        format::HandleId pDstBuffer;
        UINT64           DstOffset;
        format::HandleId pSrcBuffer;
        UINT64           SrcOffset;
        UINT64           NumBytes;
    };

    struct D3D12CopyTextureRegionArgs
    {
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pDst;
        UINT                                                       DstX;
        UINT                                                       DstY;
        UINT                                                       DstZ;
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pSrc;
        StructPointerDecoder<Decoded_D3D12_BOX>*                   pSrcBox;
    };

    struct D3D12ExecuteIndirectArgs
    {
        format::HandleId pCommandSignature;
        uint32_t         MaxCommandCount;
        format::HandleId pArgumentBuffer;
        uint64_t         ArgumentBufferOffset;
        format::HandleId pCountBuffer;
        uint64_t         CountBufferOffset;
    };

    struct D3D12ClearRtvArgs
    {
        D3D12DescriptorHandle RenderTargetView;
        std::array<float, 4>  ColorRGBA;
        ArrayRef<RECT>        Rects;
    };

    struct D3D12ClearDsvArgs
    {
        D3D12DescriptorHandle DepthStencilView;
        D3D12_CLEAR_FLAGS     ClearFlags;
        FLOAT                 Depth;
        UINT8                 Stencil;
        ArrayRef<RECT>        Rects;
    };

    struct D3D12ClearUavUIntArgs
    {
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandle;
        D3D12DescriptorHandle               ViewCPUHandle;
        format::HandleId                    pResource;
        std::array<UINT, 4>                 Values;
        ArrayRef<RECT>                      Rects;
    };

    struct D3D12ClearUavFloatArgs
    {
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandle;
        D3D12DescriptorHandle               ViewCPUHandle;
        format::HandleId                    pResource;
        std::array<FLOAT, 4>                Values;
        ArrayRef<RECT>                      Rects;
    };

    struct CmdAction;

    struct RenderPass
    {
        rps::ArenaVector<CmdAction*> cmd_actions_;
    };

    struct CmdAction
    {
        std::variant<D3D12_DRAW_ARGUMENTS,
                     D3D12_DRAW_INDEXED_ARGUMENTS,
                     D3D12_DISPATCH_ARGUMENTS,
                     D3D12_DISPATCH_MESH_ARGUMENTS,
                     D3D12_DISPATCH_RAYS_DESC,
                     RenderPass,
                     D3D12ExecuteIndirectArgs,
                     D3D12CopyResourceArgs,
                     D3D12CopyBufferRegionArgs,
                     D3D12CopyTextureRegionArgs,
                     D3D12ClearRtvArgs,
                     D3D12ClearDsvArgs,
                     D3D12ClearUavUIntArgs,
                     D3D12ClearUavFloatArgs>
            action_;

        const PipelineSnapshot* pipeline_snapshot_ = {};

        CmdAction() {}

        template<typename T>
        CmdAction(const T& action, const PipelineSnapshot* pipeline_snapshot_) :
            action_(action), pipeline_snapshot_(pipeline_snapshot_)
        {}
    };

    struct CmdList
    {
        enum DirtyMask
        {
            kDirtyMaskNone               = 0,
            kDirtyMaskIA                 = 1 << 0,
            kDirtyMaskRS                 = 1 << 1,
            kDirtyMaskOM                 = 1 << 2,
            kDirtyMaskGraphicsRootParams = 1 << 3,
            kDirtyMaskComputeRootParams  = 1 << 4,
            kDirtyMaskPrimTopology       = 1 << 5,
            kDirtyMaskBlendFactor        = 1 << 6,
            kDirtyMaskStencilRef         = 1 << 7,
            kDirtyMaskDepthBounds        = 1 << 8,
            kDirtyMaskDescritporHeaps    = 1 << 9,
            kDirtyMaskAll                = (kDirtyMaskDescritporHeaps << 1) - 1,
        };

        rps::Arena*       arena_;
        uint32_t          dirty_mask_        = kDirtyMaskNone;
        PipelineState     pipeline_          = {};
        PipelineSnapshot* pipeline_snapshot_ = {};

        rps::ArenaVector<CmdAction*> cmd_actions_;

        CmdList(rps::Arena* arena) : arena_(arena), cmd_actions_(arena) {}

        template<typename T>
        void UpdateState(T& dst, const T& src, DirtyMask mask)
        {
            if (!(src == dst))
            {
                dirty_mask_ |= mask;
                dst = src;
            }
        }

        template <typename T, size_t N>
        void UpdateState(std::array<T, N>& dst_array, const T* src, DirtyMask mask)
        {
            if (!std::equal(src, src + N, dst_array.begin()))
            {
                dirty_mask_ |= mask;
                std::copy(src, src + N, dst_array.begin());
            }
        }

        template <typename T, size_t N>
        void
        UpdateState(std::array<T, N>& dst_array, uint32_t& dst_count, const T* src, uint32_t src_count, DirtyMask mask)
        {
            if ((src_count != dst_count) ||
                !std::equal(src, src + src_count, dst_array.begin(), [](const T& l, const T& r) { return l == r; }))
            {
                dirty_mask_ |= mask;
                dst_count = src_count;
                std::copy(src, src + src_count, dst_array.begin());
            }
        }

        template <typename T>
        void UpdateState(ArrayRef<T> dst_array, const T* src, DirtyMask mask)
        {
            if (!std::equal(
                    src, src + dst_array.size(), dst_array.begin(), [](const T& l, const T& r) { return l == r; }))
            {
                dirty_mask_ |= mask;
                std::copy(src, src + dst_array.size(), dst_array.begin());
            }
        }

        template<typename T>
        void Action(const T& src)
        {
            auto pipeline_snapshot = TakePipelineSnapshot();

            cmd_actions_.push_back(arena_->New<CmdAction>(src, pipeline_snapshot));
        }

        PipelineSnapshot* TakePipelineSnapshot()
        {
            if (dirty_mask_ != 0)
            {
                auto new_snap_shot = pipeline_snapshot_ ? arena_->New<PipelineSnapshot>(*pipeline_snapshot_)
                                                        : arena_->New<PipelineSnapshot>();

                if (dirty_mask_ & kDirtyMaskIA)
                {
                    auto ia = arena_->New<IABindings>();
                    ia->ib  = pipeline_.ib;
                    ia->vbs = arena_->NewArray<D3D12_VERTEX_BUFFER_VIEW>(pipeline_.num_vbs);
                    std::copy(pipeline_.vbs.begin(), pipeline_.vbs.begin() + pipeline_.num_vbs, ia->vbs.begin());

                    new_snap_shot->ia = ia;
                }
                if (dirty_mask_ & kDirtyMaskRS)
                {
                    auto rs = arena_->New<RSState>();
                    rs->viewports = arena_->NewArray<D3D12_VIEWPORT>(pipeline_.num_viewports);
                    std::copy(pipeline_.viewports.begin(),
                              pipeline_.viewports.begin() + pipeline_.num_viewports,
                              rs->viewports.begin());

                    rs->scissor_rects = arena_->NewArray<RECT>(pipeline_.num_scissor_rects);
                    std::copy(pipeline_.scissor_rects.begin(),
                              pipeline_.scissor_rects.begin() + pipeline_.num_scissor_rects,
                              rs->scissor_rects.begin());

                    new_snap_shot->rs = rs;
                }
                if (dirty_mask_ & kDirtyMaskOM)
                {
                    auto om = arena_->New<OMBindings>();
                    om->dsv = pipeline_.dsv;
                    om->rtvs = arena_->NewArray<D3D12DescriptorHandle>(pipeline_.num_rtvs);
                    std::copy(pipeline_.rtvs.begin(), pipeline_.rtvs.begin() + pipeline_.num_rtvs, om->rtvs.begin());

                    new_snap_shot->om = om;

                }
                if (dirty_mask_ & kDirtyMaskGraphicsRootParams)
                {
                    new_snap_shot->root_param_bindings = RootParamBindings(arena_,
                                                                           pipeline_.graphics_root_signature,
                                                                           pipeline_.graphics_root_params_mask,
                                                                           pipeline_.graphics_root_params);
                }
                if (dirty_mask_ & kDirtyMaskComputeRootParams)
                {
                    new_snap_shot->root_param_bindings = RootParamBindings(arena_,
                                                                           pipeline_.compute_root_signature,
                                                                           pipeline_.compute_root_params_mask,
                                                                           pipeline_.compute_root_params);
                }
                if (dirty_mask_ & kDirtyMaskPrimTopology)
                {
                    new_snap_shot->prim_topology = pipeline_.prim_topology;
                }
                if (dirty_mask_ & kDirtyMaskBlendFactor)
                {
                    new_snap_shot->blend_factors = pipeline_.blend_factors;
                }
                if (dirty_mask_ & kDirtyMaskStencilRef)
                {
                    new_snap_shot->stencil_ref = pipeline_.stencil_ref;
                }
                if (dirty_mask_ & kDirtyMaskDescritporHeaps)
                {
                    new_snap_shot->descriptor_heaps =
                        arena_->NewArray<format::HandleId>(pipeline_.num_descriptor_heaps);

                    std::copy(pipeline_.descriptor_heaps.begin(),
                              pipeline_.descriptor_heaps.begin() + pipeline_.num_descriptor_heaps,
                              new_snap_shot->descriptor_heaps.begin());
                }

                pipeline_snapshot_ = new_snap_shot;
                dirty_mask_        = 0;
            }

            return pipeline_snapshot_;
        }
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

    struct UpdateTileMappings
    {
    };

    struct CopyTileMappings
    {
    };

    struct QueueMarker
    {
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

    // Object creation
    virtual void Post_Process_ID3D12Device_CreateRootSignature(const ApiCallInfo&           call_info,
                                                               format::HandleId             object_id,
                                                               HRESULT                      return_value,
                                                               UINT                         nodeMask,
                                                               PointerDecoder<uint8_t>*     pBlobWithRootSignature,
                                                               SIZE_T                       blobLengthInBytes,
                                                               Decoded_GUID                 riid,
                                                               HandlePointerDecoder<void*>* ppvRootSignature) override
    {
        ID3D12VersionedRootSignatureDeserializer* pDeserializer = {};

        HRESULT hr = D3D12CreateVersionedRootSignatureDeserializer(
            pBlobWithRootSignature->GetPointer(), blobLengthInBytes, IID_PPV_ARGS(&pDeserializer));

        if (SUCCEEDED(hr))
        {
            const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* p_root_signature_desc = {};

            hr = pDeserializer->GetRootSignatureDescAtVersion(D3D_ROOT_SIGNATURE_VERSION_1_1, &p_root_signature_desc);

            if (SUCCEEDED(hr))
            {
                OnCreateRootSignature(*ppvRootSignature->GetPointer(), p_root_signature_desc);
            }
        }
    }

    virtual void Post_Process_ID3D12Device_CreateGraphicsPipelineState(
        const ApiCallInfo&                                                call_info,
        format::HandleId                                                  object_id,
        HRESULT                                                           return_value,
        StructPointerDecoder<Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID                                                      riid,
        HandlePointerDecoder<void*>*                                      ppPipelineState) override
    {
        OnCreatePso(*ppPipelineState->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    virtual void Post_Process_ID3D12Device_CreateComputePipelineState(
        const ApiCallInfo&                                               call_info,
        format::HandleId                                                 object_id,
        HRESULT                                                          return_value,
        StructPointerDecoder<Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID                                                     riid,
        HandlePointerDecoder<void*>*                                     ppPipelineState) override
    {
        OnCreatePso(*ppPipelineState->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    virtual void Post_Process_ID3D12Device2_CreatePipelineState(
        const ApiCallInfo&                                              call_info,
        format::HandleId                                                object_id,
        HRESULT                                                         return_value,
        StructPointerDecoder<Decoded_D3D12_PIPELINE_STATE_STREAM_DESC>* pDesc,
        Decoded_GUID                                                    riid,
        HandlePointerDecoder<void*>*                                    ppPipelineState) override
    {
        OnCreatePso(*ppPipelineState->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    virtual void Post_Process_ID3D12PipelineLibrary_LoadGraphicsPipeline(
        const ApiCallInfo&                                                call_info,
        format::HandleId                                                  object_id,
        HRESULT                                                           return_value,
        WStringDecoder*                                                   pName,
        StructPointerDecoder<Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID                                                      riid,
        HandlePointerDecoder<void*>*                                      ppPipelineState) override
    {
        OnCreatePso(*ppPipelineState->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    virtual void Post_Process_ID3D12PipelineLibrary_LoadComputePipeline(
        const ApiCallInfo&                                               call_info,
        format::HandleId                                                 object_id,
        HRESULT                                                          return_value,
        WStringDecoder*                                                  pName,
        StructPointerDecoder<Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID                                                     riid,
        HandlePointerDecoder<void*>*                                     ppPipelineState) override
    {
        OnCreatePso(*ppPipelineState->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    virtual void Post_Process_ID3D12PipelineLibrary1_LoadPipeline(
        const ApiCallInfo&                                              call_info,
        format::HandleId                                                object_id,
        HRESULT                                                         return_value,
        WStringDecoder*                                                 pName,
        StructPointerDecoder<Decoded_D3D12_PIPELINE_STATE_STREAM_DESC>* pDesc,
        Decoded_GUID                                                    riid,
        HandlePointerDecoder<void*>*                                    ppPipelineState) override
    {
        OnCreatePso(*ppPipelineState->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    virtual void
    Post_Process_ID3D12Device5_CreateStateObject(const ApiCallInfo&                                     call_info,
                                                 format::HandleId                                       object_id,
                                                 HRESULT                                                return_value,
                                                 StructPointerDecoder<Decoded_D3D12_STATE_OBJECT_DESC>* pDesc,
                                                 Decoded_GUID                                           riid,
                                                 HandlePointerDecoder<void*>*                           ppStateObject)
    {
        OnCreatePso(*ppStateObject->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    // CmdList lifetime

    virtual void Pre_Process_ID3D12GraphicsCommandList_Reset(const ApiCallInfo& call_info,
                                                             format::HandleId   object_id,
                                                             HRESULT            return_value,
                                                             format::HandleId   pAllocator,
                                                             format::HandleId   pInitialState) override
    {
        auto cmd_list = FindCmdList(object_id);

        cmd_list->pipeline_   = {};
        cmd_list->dirty_mask_ = CmdList::kDirtyMaskAll;

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

    virtual void Pre_Process_ID3D12GraphicsCommandList_ClearState(const ApiCallInfo& call_info,
                                                                  format::HandleId   object_id,
                                                                  format::HandleId   pPipelineState) override
    {
        auto cmd_list = FindCmdList(object_id);
        SetPso(cmd_list, pPipelineState);
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

    
    virtual void Pre_Process_ID3D12CommandQueue_UpdateTileMappings(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pResource,
        UINT                                                           NumResourceRegions,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pResourceRegionStartCoordinates,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>*          pResourceRegionSizes,
        format::HandleId                                               pHeap,
        UINT                                                           NumRanges,
        PointerDecoder<D3D12_TILE_RANGE_FLAGS>*                        pRangeFlags,
        PointerDecoder<UINT>*                                          pHeapRangeStartOffsets,
        PointerDecoder<UINT>*                                          pRangeTileCounts,
        D3D12_TILE_MAPPING_FLAGS                                       Flags)
    {}

    virtual void Pre_Process_ID3D12CommandQueue_CopyTileMappings(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pDstResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pDstRegionStartCoordinate,
        format::HandleId                                               pSrcResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pSrcRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>*          pRegionSize,
        D3D12_TILE_MAPPING_FLAGS                                       Flags)
    {}

    virtual void Pre_Process_ID3D12CommandQueue_SetMarker(const ApiCallInfo&       call_info,
                                                          format::HandleId         object_id,
                                                          UINT                     Metadata,
                                                          PointerDecoder<uint8_t>* pData,
                                                          UINT                     Size)
    {}

    virtual void Pre_Process_ID3D12CommandQueue_BeginEvent(const ApiCallInfo&       call_info,
                                                           format::HandleId         object_id,
                                                           UINT                     Metadata,
                                                           PointerDecoder<uint8_t>* pData,
                                                           UINT                     Size)
    {}

    virtual void Pre_Process_ID3D12CommandQueue_EndEvent(const ApiCallInfo& call_info, format::HandleId object_id) {}

    // CmdList Workload & State

    virtual void Pre_Process_ID3D12GraphicsCommandList_DrawInstanced(const ApiCallInfo& call_info,
                                                                     format::HandleId   object_id,
                                                                     UINT               VertexCountPerInstance,
                                                                     UINT               InstanceCount,
                                                                     UINT               StartVertexLocation,
                                                                     UINT               StartInstanceLocation)
    {
        auto cl = FindCmdList(object_id);

        D3D12_DRAW_ARGUMENTS drawArgs = {
            VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation
        };

        cl->Action(drawArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_DrawIndexedInstanced(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               IndexCountPerInstance,
                                                                            UINT               InstanceCount,
                                                                            UINT               StartIndexLocation,
                                                                            INT                BaseVertexLocation,
                                                                            UINT               StartInstanceLocation)
    {
        auto cl = FindCmdList(object_id);

        D3D12_DRAW_INDEXED_ARGUMENTS drawArgs = {
            IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation
        };

        cl->Action(drawArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_Dispatch(const ApiCallInfo& call_info,
                                                                format::HandleId   object_id,
                                                                UINT               ThreadGroupCountX,
                                                                UINT               ThreadGroupCountY,
                                                                UINT               ThreadGroupCountZ)
    {
        auto cl = FindCmdList(object_id);

        D3D12_DISPATCH_ARGUMENTS dispatchArgs = { ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ };

        cl->Action(dispatchArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_CopyBufferRegion(const ApiCallInfo& call_info,
                                                                        format::HandleId   object_id,
                                                                        format::HandleId   pDstBuffer,
                                                                        UINT64             DstOffset,
                                                                        format::HandleId   pSrcBuffer,
                                                                        UINT64             SrcOffset,
                                                                        UINT64             NumBytes)
    {
        auto cl = FindCmdList(object_id);

        D3D12CopyBufferRegionArgs copyArgs = { pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, NumBytes };

        cl->Action(copyArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_CopyTextureRegion(
        const ApiCallInfo&                                         call_info,
        format::HandleId                                           object_id,
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pDst,
        UINT                                                       DstX,
        UINT                                                       DstY,
        UINT                                                       DstZ,
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pSrc,
        StructPointerDecoder<Decoded_D3D12_BOX>*                   pSrcBox)
    {
        auto cl = FindCmdList(object_id);

        D3D12CopyTextureRegionArgs copyArgs = { pDst, DstX, DstY, DstZ, pSrc, pSrcBox };

        cl->Action(copyArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_CopyResource(const ApiCallInfo& call_info,
                                                                    format::HandleId   object_id,
                                                                    format::HandleId   pDstResource,
                                                                    format::HandleId   pSrcResource)
    {
        auto cl = FindCmdList(object_id);

        D3D12CopyResourceArgs copyArgs = { pDstResource, pSrcResource };

        cl->Action(copyArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_CopyTiles(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pTiledResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pTileRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>*          pTileRegionSize,
        format::HandleId                                               pBuffer,
        UINT64                                                         BufferStartOffsetInBytes,
        D3D12_TILE_COPY_FLAGS                                          Flags)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_ResolveSubresource(const ApiCallInfo& call_info,
                                                                          format::HandleId   object_id,
                                                                          format::HandleId   pDstResource,
                                                                          UINT               DstSubresource,
                                                                          format::HandleId   pSrcResource,
                                                                          UINT               SrcSubresource,
                                                                          DXGI_FORMAT        Format)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_IASetPrimitiveTopology(const ApiCallInfo&     call_info,
                                                                              format::HandleId       object_id,
                                                                              D3D_PRIMITIVE_TOPOLOGY PrimitiveTopology)
    {
        auto cl = FindCmdList(object_id);
        cl->UpdateState(cl->pipeline_.prim_topology, PrimitiveTopology, CmdList::kDirtyMaskPrimTopology);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_RSSetViewports(const ApiCallInfo&                            call_info,
                                                         format::HandleId                              object_id,
                                                         UINT                                          NumViewports,
                                                         StructPointerDecoder<Decoded_D3D12_VIEWPORT>* pViewports)
    {
        auto cl = FindCmdList(object_id);
        cl->UpdateState(cl->pipeline_.viewports,
                        cl->pipeline_.num_viewports,
                        pViewports->GetPointer(),
                        NumViewports,
                        CmdList::kDirtyMaskRS);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_RSSetScissorRects(const ApiCallInfo& call_info,
                                                                         format::HandleId   object_id,
                                                                         UINT               NumRects,
                                                                         StructPointerDecoder<Decoded_tagRECT>* pRects)
    {
        auto cl = FindCmdList(object_id);
        cl->UpdateState(cl->pipeline_.scissor_rects,
                        cl->pipeline_.num_scissor_rects,
                        pRects->GetPointer(),
                        NumRects,
                        CmdList::kDirtyMaskRS);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_OMSetBlendFactor(const ApiCallInfo&    call_info,
                                                                        format::HandleId      object_id,
                                                                        PointerDecoder<FLOAT> BlendFactor[4])
    {
        auto cl = FindCmdList(object_id);
        cl->UpdateState(cl->pipeline_.blend_factors, BlendFactor->GetPointer(), CmdList::kDirtyMaskBlendFactor);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_OMSetStencilRef(const ApiCallInfo& call_info,
                                                                       format::HandleId   object_id,
                                                                       UINT               StencilRef)
    {
        auto cl = FindCmdList(object_id);
        cl->UpdateState(cl->pipeline_.stencil_ref, StencilRef, CmdList::kDirtyMaskStencilRef);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetPipelineState(const ApiCallInfo& call_info,
                                                                        format::HandleId   object_id,
                                                                        format::HandleId   pPipelineState)
    {
        auto cl = FindCmdList(object_id);

        cl->pipeline_.pso = FindPso(pPipelineState);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_ResourceBarrier(
        const ApiCallInfo&                                    call_info,
        format::HandleId                                      object_id,
        UINT                                                  NumBarriers,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_BARRIER>* pBarriers)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_ExecuteBundle(const ApiCallInfo& call_info,
                                                                     format::HandleId   object_id,
                                                                     format::HandleId   pCommandList)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(
        const ApiCallInfo&                           call_info,
        format::HandleId                             object_id,
        UINT                                         NumDescriptorHeaps,
        HandlePointerDecoder<ID3D12DescriptorHeap*>* ppDescriptorHeaps)
    {
        auto cl = FindCmdList(object_id);
        cl->UpdateState(cl->pipeline_.descriptor_heaps,
                        cl->pipeline_.num_descriptor_heaps,
                        ppDescriptorHeaps->GetPointer(),
                        NumDescriptorHeaps,
                        CmdList::kDirtyMaskDescritporHeaps);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetComputeRootSignature(const ApiCallInfo& call_info,
                                                                               format::HandleId   object_id,
                                                                               format::HandleId   pRootSignature)
    {
        auto cl       = FindCmdList(object_id);
        auto root_sig = FindRootSignature(pRootSignature);

        // Rootsignature update invalidates all existing bindings:
        cl->UpdateState(cl->pipeline_.compute_root_params_mask, 0ui64, CmdList::kDirtyMaskComputeRootParams);
        cl->UpdateState(cl->pipeline_.compute_root_signature, root_sig, CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootSignature(const ApiCallInfo& call_info,
                                                                                format::HandleId   object_id,
                                                                                format::HandleId   pRootSignature)
    {
        auto cl       = FindCmdList(object_id);
        auto root_sig = FindRootSignature(pRootSignature);

        // Rootsignature update invalidates all existing bindings:
        cl->UpdateState(cl->pipeline_.graphics_root_params_mask, 0ui64, CmdList::kDirtyMaskGraphicsRootParams);
        cl->UpdateState(cl->pipeline_.graphics_root_signature, root_sig, CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(
        const ApiCallInfo&                  call_info,
        format::HandleId                    object_id,
        UINT                                RootParameterIndex,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BaseDescriptor } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(
        const ApiCallInfo&                  call_info,
        format::HandleId                    object_id,
        UINT                                RootParameterIndex,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BaseDescriptor } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    template <CmdList::DirtyMask DirtyMask>
    void UpdateRootConstantData(
        format::HandleId cl_id, UINT RootParameterIndex, UINT dstOffset, UINT count, const UINT* SrcData)
    {
        static_assert((DirtyMask == CmdList::kDirtyMaskComputeRootParams) ||
                      (DirtyMask == CmdList::kDirtyMaskGraphicsRootParams));

        auto cl = FindCmdList(cl_id);

        constexpr bool IsGfx = (DirtyMask == CmdList::kDirtyMaskGraphicsRootParams);

        auto  root_sig = IsGfx ? cl->pipeline_.graphics_root_signature : cl->pipeline_.compute_root_signature;
        auto& root_param =
            (IsGfx ? cl->pipeline_.graphics_root_params : cl->pipeline_.compute_root_params)[RootParameterIndex];

        if (!std::holds_alternative<RootConstants>(root_param.data))
        {
            const UINT numConstants = root_sig->desc.pParameters[RootParameterIndex].Constants.Num32BitValues;
            cl->UpdateState(std::get<RootConstants>(root_param.data),
                            RootConstants{ capture_.arena_.NewArray<UINT>(numConstants) },
                            DirtyMask);
        }

        auto& value = std::get<RootConstants>(root_param.data);
        cl->UpdateState(value.data.range(dstOffset, count), SrcData, DirtyMask);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(const ApiCallInfo& call_info,
                                                                                   format::HandleId   object_id,
                                                                                   UINT RootParameterIndex,
                                                                                   UINT SrcData,
                                                                                   UINT DestOffsetIn32BitValues)
    {
        UpdateRootConstantData<CmdList::kDirtyMaskComputeRootParams>(
            object_id, RootParameterIndex, DestOffsetIn32BitValues, 1, &SrcData);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(const ApiCallInfo& call_info,
                                                                                    format::HandleId   object_id,
                                                                                    UINT RootParameterIndex,
                                                                                    UINT SrcData,
                                                                                    UINT DestOffsetIn32BitValues)
    {
        UpdateRootConstantData<CmdList::kDirtyMaskGraphicsRootParams>(
            object_id, RootParameterIndex, DestOffsetIn32BitValues, 1, &SrcData);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(const ApiCallInfo& call_info,
                                                                                    format::HandleId   object_id,
                                                                                    UINT RootParameterIndex,
                                                                                    UINT Num32BitValuesToSet,
                                                                                    PointerDecoder<uint8_t>* pSrcData,
                                                                                    UINT DestOffsetIn32BitValues)
    {
        UpdateRootConstantData<CmdList::kDirtyMaskComputeRootParams>(
            object_id,
            RootParameterIndex,
            DestOffsetIn32BitValues,
            Num32BitValuesToSet,
            reinterpret_cast<const UINT*>(pSrcData->GetPointer()));
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(const ApiCallInfo& call_info,
                                                                                     format::HandleId   object_id,
                                                                                     UINT RootParameterIndex,
                                                                                     UINT Num32BitValuesToSet,
                                                                                     PointerDecoder<uint8_t>* pSrcData,
                                                                                     UINT DestOffsetIn32BitValues)
    {
        UpdateRootConstantData<CmdList::kDirtyMaskGraphicsRootParams>(
            object_id,
            RootParameterIndex,
            DestOffsetIn32BitValues,
            Num32BitValuesToSet,
            reinterpret_cast<const UINT*>(pSrcData->GetPointer()));
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(const ApiCallInfo&        call_info,
                                                                           format::HandleId          object_id,
                                                                           UINT                      RootParameterIndex,
                                                                           D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BufferLocation } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               RootParameterIndex,
                                                                            D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BufferLocation } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(const ApiCallInfo&        call_info,
                                                                           format::HandleId          object_id,
                                                                           UINT                      RootParameterIndex,
                                                                           D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BufferLocation } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               RootParameterIndex,
                                                                            D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BufferLocation } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               RootParameterIndex,
                                                                            D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BufferLocation } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(const ApiCallInfo& call_info,
                                                                             format::HandleId   object_id,
                                                                             UINT               RootParameterIndex,
                                                                             D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { BufferLocation } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_IASetIndexBuffer(const ApiCallInfo& call_info,
                                                           format::HandleId   object_id,
                                                           StructPointerDecoder<Decoded_D3D12_INDEX_BUFFER_VIEW>* pView)
    {
        auto cl = FindCmdList(object_id);

        auto pViewData = pView->GetPointer();

        cl->UpdateState(cl->pipeline_.ib, *pViewData, CmdList::kDirtyMaskIA);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_IASetVertexBuffers(
        const ApiCallInfo&                                      call_info,
        format::HandleId                                        object_id,
        UINT                                                    StartSlot,
        UINT                                                    NumViews,
        StructPointerDecoder<Decoded_D3D12_VERTEX_BUFFER_VIEW>* pViews)
    {
        auto cl = FindCmdList(object_id);

        auto pViewsData = pViews->GetPointer();

        const uint32_t min_num_vbs = StartSlot + NumViews;

        if (min_num_vbs > cl->pipeline_.num_vbs)
        {
            cl->UpdateState(cl->pipeline_.num_vbs, min_num_vbs, CmdList::kDirtyMaskIA);
        }

        cl->UpdateState(ArrayRef<D3D12_VERTEX_BUFFER_VIEW>(cl->pipeline_.vbs.data() + StartSlot, NumViews),
                        pViewsData,
                        CmdList::kDirtyMaskIA);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_SOSetTargets(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        UINT                                                           StartSlot,
        UINT                                                           NumViews,
        StructPointerDecoder<Decoded_D3D12_STREAM_OUTPUT_BUFFER_VIEW>* pViews)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_OMSetRenderTargets(
        const ApiCallInfo&                                         call_info,
        format::HandleId                                           object_id,
        UINT                                                       NumRenderTargetDescriptors,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pRenderTargetDescriptors,
        BOOL                                                       RTsSingleHandleToDescriptorRange,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pDepthStencilDescriptor)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.num_rtvs, NumRenderTargetDescriptors, CmdList::kDirtyMaskOM);

        auto new_dsv = (pDepthStencilDescriptor && pDepthStencilDescriptor->GetMetaStructPointer())
                           ? D3D12DescriptorHandle(*pDepthStencilDescriptor->GetMetaStructPointer())
                           : D3D12DescriptorHandle();
        cl->UpdateState(cl->pipeline_.dsv, new_dsv, CmdList::kDirtyMaskOM);

        cl->UpdateState(cl->pipeline_.num_rtvs, NumRenderTargetDescriptors, CmdList::kDirtyMaskOM);

        std::array<D3D12DescriptorHandle, D3D12_SIMULTANEOUS_RENDER_TARGET_COUNT> new_rtvs;

        if (NumRenderTargetDescriptors > 0)
        {
            auto first_rtv = pRenderTargetDescriptors->GetMetaStructPointer();

            if (RTsSingleHandleToDescriptorRange)
            {

                for (UINT i = 0; i < NumRenderTargetDescriptors; ++i)
                {
                    new_rtvs[i].heap_id = first_rtv->heap_id;
                    new_rtvs[i].index   = first_rtv->index + i;
                }
            }
            else
            {
                for (UINT i = 0; i < NumRenderTargetDescriptors; ++i)
                {
                    new_rtvs[i] = first_rtv[i];
                }
            }
        }

        cl->UpdateState(cl->pipeline_.rtvs, new_rtvs.data(), CmdList::kDirtyMaskOM);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_ClearDepthStencilView(const ApiCallInfo&                     call_info,
                                                                format::HandleId                       object_id,
                                                                Decoded_D3D12_CPU_DESCRIPTOR_HANDLE    DepthStencilView,
                                                                D3D12_CLEAR_FLAGS                      ClearFlags,
                                                                FLOAT                                  Depth,
                                                                UINT8                                  Stencil,
                                                                UINT                                   NumRects,
                                                                StructPointerDecoder<Decoded_tagRECT>* pRects)
    {
        auto cl = FindCmdList(object_id);

        auto rects = NewArray(pRects->GetPointer(), NumRects);

        cl->Action(D3D12ClearDsvArgs{ DepthStencilView, ClearFlags, Depth, Stencil, rects });
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_ClearRenderTargetView(const ApiCallInfo&                     call_info,
                                                                format::HandleId                       object_id,
                                                                Decoded_D3D12_CPU_DESCRIPTOR_HANDLE    RenderTargetView,
                                                                PointerDecoder<FLOAT>                  ColorRGBA[4],
                                                                UINT                                   NumRects,
                                                                StructPointerDecoder<Decoded_tagRECT>* pRects)
    {
        auto cl = FindCmdList(object_id);

        auto rects = NewArray(pRects->GetPointer(), NumRects);

        D3D12ClearRtvArgs args = { RenderTargetView, {}, rects };
        std::copy(ColorRGBA->GetPointer(), ColorRGBA->GetPointer() + 4, args.ColorRGBA.begin());

        cl->Action(args);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(
        const ApiCallInfo&                     call_info,
        format::HandleId                       object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE    ViewGPUHandleInCurrentHeap,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE    ViewCPUHandle,
        format::HandleId                       pResource,
        PointerDecoder<UINT>                   Values[4],
        UINT                                   NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
    {
        auto cl = FindCmdList(object_id);

        auto rects = NewArray(pRects->GetPointer(), NumRects);

        D3D12ClearUavUIntArgs args = { ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, {}, rects };

        auto* pValuesSrc = Values->GetPointer();
        std::copy(pValuesSrc, Values->GetPointer() + 4, args.Values.begin());

        cl->Action(args);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(
        const ApiCallInfo&                     call_info,
        format::HandleId                       object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE    ViewGPUHandleInCurrentHeap,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE    ViewCPUHandle,
        format::HandleId                       pResource,
        PointerDecoder<FLOAT>                  Values[4],
        UINT                                   NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
    {
        auto cl = FindCmdList(object_id);

        auto rects = NewArray(pRects->GetPointer(), NumRects);

        D3D12ClearUavFloatArgs args = { ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, {}, rects };

        auto* pValuesSrc = Values->GetPointer();
        std::copy(pValuesSrc, Values->GetPointer() + 4, args.Values.begin());

        cl->Action(args);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList_DiscardResource(const ApiCallInfo&                                  call_info,
                                                          format::HandleId                                    object_id,
                                                          format::HandleId                                    pResource,
                                                          StructPointerDecoder<Decoded_D3D12_DISCARD_REGION>* pRegion)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_BeginQuery(const ApiCallInfo& call_info,
                                                                  format::HandleId   object_id,
                                                                  format::HandleId   pQueryHeap,
                                                                  D3D12_QUERY_TYPE   Type,
                                                                  UINT               Index)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_EndQuery(const ApiCallInfo& call_info,
                                                                format::HandleId   object_id,
                                                                format::HandleId   pQueryHeap,
                                                                D3D12_QUERY_TYPE   Type,
                                                                UINT               Index)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_ResolveQueryData(const ApiCallInfo& call_info,
                                                                        format::HandleId   object_id,
                                                                        format::HandleId   pQueryHeap,
                                                                        D3D12_QUERY_TYPE   Type,
                                                                        UINT               StartIndex,
                                                                        UINT               NumQueries,
                                                                        format::HandleId   pDestinationBuffer,
                                                                        UINT64 AlignedDestinationBufferOffset)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetPredication(const ApiCallInfo&   call_info,
                                                                      format::HandleId     object_id,
                                                                      format::HandleId     pBuffer,
                                                                      UINT64               AlignedBufferOffset,
                                                                      D3D12_PREDICATION_OP Operation)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_SetMarker(const ApiCallInfo&       call_info,
                                                                 format::HandleId         object_id,
                                                                 UINT                     Metadata,
                                                                 PointerDecoder<uint8_t>* pData,
                                                                 UINT                     Size)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_BeginEvent(const ApiCallInfo&       call_info,
                                                                  format::HandleId         object_id,
                                                                  UINT                     Metadata,
                                                                  PointerDecoder<uint8_t>* pData,
                                                                  UINT                     Size)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_EndEvent(const ApiCallInfo& call_info,
                                                                format::HandleId   object_id)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList_ExecuteIndirect(const ApiCallInfo& call_info,
                                                                       format::HandleId   object_id,
                                                                       format::HandleId   pCommandSignature,
                                                                       UINT               MaxCommandCount,
                                                                       format::HandleId   pArgumentBuffer,
                                                                       UINT64             ArgumentBufferOffset,
                                                                       format::HandleId   pCountBuffer,
                                                                       UINT64             CountBufferOffset)
    {
        auto cl = FindCmdList(object_id);

        D3D12ExecuteIndirectArgs eiArgs = { pCommandSignature,    MaxCommandCount, pArgumentBuffer,
                                            ArgumentBufferOffset, pCountBuffer,    CountBufferOffset };

        cl->Action(eiArgs);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(
        const ApiCallInfo&                                            call_info,
        format::HandleId                                              object_id,
        format::HandleId                                              pDstBuffer,
        UINT64                                                        DstOffset,
        format::HandleId                                              pSrcBuffer,
        UINT64                                                        SrcOffset,
        UINT                                                          Dependencies,
        HandlePointerDecoder<ID3D12Resource*>*                        ppDependentResources,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_RANGE_UINT64>* pDependentSubresourceRanges)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(
        const ApiCallInfo&                                            call_info,
        format::HandleId                                              object_id,
        format::HandleId                                              pDstBuffer,
        UINT64                                                        DstOffset,
        format::HandleId                                              pSrcBuffer,
        UINT64                                                        SrcOffset,
        UINT                                                          Dependencies,
        HandlePointerDecoder<ID3D12Resource*>*                        ppDependentResources,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_RANGE_UINT64>* pDependentSubresourceRanges)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList1_OMSetDepthBounds(const ApiCallInfo& call_info,
                                                                         format::HandleId   object_id,
                                                                         FLOAT              Min,
                                                                         FLOAT              Max)
    {
        auto cl = FindCmdList(object_id);

        const FLOAT src[2] = { Min, Max };

        cl->UpdateState(cl->pipeline_.depth_bounds, src, CmdList::kDirtyMaskDepthBounds);
    }

    virtual void Pre_Process_ID3D12GraphicsCommandList1_SetSamplePositions(
        const ApiCallInfo&                                   call_info,
        format::HandleId                                     object_id,
        UINT                                                 NumSamplesPerPixel,
        UINT                                                 NumPixels,
        StructPointerDecoder<Decoded_D3D12_SAMPLE_POSITION>* pSamplePositions)
    {}

    virtual void
    Pre_Process_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(const ApiCallInfo& call_info,
                                                                    format::HandleId   object_id,
                                                                    format::HandleId   pDstResource,
                                                                    UINT               DstSubresource,
                                                                    UINT               DstX,
                                                                    UINT               DstY,
                                                                    format::HandleId   pSrcResource,
                                                                    UINT               SrcSubresource,
                                                                    StructPointerDecoder<Decoded_tagRECT>* pSrcRect,
                                                                    DXGI_FORMAT                            Format,
                                                                    D3D12_RESOLVE_MODE                     ResolveMode)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList1_SetViewInstanceMask(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               Mask)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList2_WriteBufferImmediate(
        const ApiCallInfo&                                                  call_info,
        format::HandleId                                                    object_id,
        UINT                                                                Count,
        StructPointerDecoder<Decoded_D3D12_WRITEBUFFERIMMEDIATE_PARAMETER>* pParams,
        PointerDecoder<D3D12_WRITEBUFFERIMMEDIATE_MODE>*                    pModes)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList3_SetProtectedResourceSession(
        const ApiCallInfo& call_info, format::HandleId object_id, format::HandleId pProtectedResourceSession)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList4_BeginRenderPass(
        const ApiCallInfo&                                                  call_info,
        format::HandleId                                                    object_id,
        UINT                                                                NumRenderTargets,
        StructPointerDecoder<Decoded_D3D12_RENDER_PASS_RENDER_TARGET_DESC>* pRenderTargets,
        StructPointerDecoder<Decoded_D3D12_RENDER_PASS_DEPTH_STENCIL_DESC>* pDepthStencil,
        D3D12_RENDER_PASS_FLAGS                                             Flags)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList4_EndRenderPass(const ApiCallInfo& call_info,
                                                                      format::HandleId   object_id)
    {}

    virtual void
    Pre_Process_ID3D12GraphicsCommandList4_InitializeMetaCommand(const ApiCallInfo&       call_info,
                                                                 format::HandleId         object_id,
                                                                 format::HandleId         pMetaCommand,
                                                                 PointerDecoder<uint8_t>* pInitializationParametersData,
                                                                 SIZE_T InitializationParametersDataSizeInBytes)
    {}

    virtual void
    Pre_Process_ID3D12GraphicsCommandList4_ExecuteMetaCommand(const ApiCallInfo&       call_info,
                                                              format::HandleId         object_id,
                                                              format::HandleId         pMetaCommand,
                                                              PointerDecoder<uint8_t>* pExecutionParametersData,
                                                              SIZE_T ExecutionParametersDataSizeInBytes)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(
        const ApiCallInfo&                                                                call_info,
        format::HandleId                                                                  object_id,
        StructPointerDecoder<Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>* pDesc,
        UINT                                                                              NumPostbuildInfoDescs,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC>* pPostbuildInfoDescs)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(
        const ApiCallInfo&                                                                         call_info,
        format::HandleId                                                                           object_id,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC>* pDesc,
        UINT                                       NumSourceAccelerationStructures,
        PointerDecoder<D3D12_GPU_VIRTUAL_ADDRESS>* pSourceAccelerationStructureData)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(
        const ApiCallInfo&                                call_info,
        format::HandleId                                  object_id,
        D3D12_GPU_VIRTUAL_ADDRESS                         DestAccelerationStructureData,
        D3D12_GPU_VIRTUAL_ADDRESS                         SourceAccelerationStructureData,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList4_SetPipelineState1(const ApiCallInfo& call_info,
                                                                          format::HandleId   object_id,
                                                                          format::HandleId   pStateObject) override
    {
        auto cl = FindCmdList(object_id);

        cl->pipeline_.pso = FindPso(pStateObject);
    }

    virtual void
    Pre_Process_ID3D12GraphicsCommandList4_DispatchRays(const ApiCallInfo& call_info,
                                                        format::HandleId   object_id,
                                                        StructPointerDecoder<Decoded_D3D12_DISPATCH_RAYS_DESC>* pDesc)
    {}

    virtual void
    Pre_Process_ID3D12GraphicsCommandList5_RSSetShadingRate(const ApiCallInfo& call_info,
                                                            format::HandleId   object_id,
                                                            D3D12_SHADING_RATE baseShadingRate,
                                                            PointerDecoder<D3D12_SHADING_RATE_COMBINER>* combiners)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList5_RSSetShadingRateImage(const ApiCallInfo& call_info,
                                                                              format::HandleId   object_id,
                                                                              format::HandleId   shadingRateImage)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList6_DispatchMesh(const ApiCallInfo& call_info,
                                                                     format::HandleId   object_id,
                                                                     UINT               ThreadGroupCountX,
                                                                     UINT               ThreadGroupCountY,
                                                                     UINT               ThreadGroupCountZ)
    {}

    virtual void
    Pre_Process_ID3D12GraphicsCommandList7_Barrier(const ApiCallInfo&                                 call_info,
                                                   format::HandleId                                   object_id,
                                                   UINT32                                             NumBarrierGroups,
                                                   StructPointerDecoder<Decoded_D3D12_BARRIER_GROUP>* pBarrierGroups)
    {}

    virtual void Pre_Process_ID3D12GraphicsCommandList8_OMSetFrontAndBackStencilRef(const ApiCallInfo& call_info,
                                                                                    format::HandleId   object_id,
                                                                                    UINT               FrontStencilRef,
                                                                                    UINT               BackStencilRef)
    {}

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
            auto new_state = std::make_unique<CmdList>(&capture_.arena_);
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

    RootSignatureInfo* FindRootSignature(format::HandleId root_sig_id)
    {
        auto iter = root_signatures_.find(root_sig_id);
        return (iter != root_signatures_.end()) ? iter->second.get() : nullptr;
    }

    void OnCreateRootSignature(format::HandleId                           object_id,
                               const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* p_desc)
    {
        assert(p_desc->Version == D3D_ROOT_SIGNATURE_VERSION_1_1);

        auto iter = root_signatures_.find(object_id);

        if (iter == root_signatures_.end())
        {
            auto& desc = p_desc->Desc_1_1;

            auto new_root_sig = std::make_unique<RootSignatureInfo>();
            new_root_sig->root_sig = object_id;
            new_root_sig->desc     = desc;

            auto params                    = NewArray<D3D12_ROOT_PARAMETER1>(desc.pParameters, desc.NumParameters);
            new_root_sig->desc.pParameters = params.data();

            auto static_samplers = NewArray<D3D12_STATIC_SAMPLER_DESC>(desc.pStaticSamplers, desc.NumStaticSamplers);
            new_root_sig->desc.pStaticSamplers = static_samplers.data();

            root_signatures_.insert(iter, std::make_pair(object_id, std::move(new_root_sig)));
        }
    }

    template<typename T_Decoded_DESC>
    void OnCreatePso(format::HandleId object_id, T_Decoded_DESC& desc)
    {
        auto iter = pso_states_.find(object_id);
        if (iter == pso_states_.end())
        {
            auto new_pso    = std::make_unique<PsoInfo>();
            new_pso->pso_id = object_id;
            new_pso->SetDesc(desc, capture_.arena_);
        }
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

    template<typename T>
    ArrayRef<T> NewArray(const T* pData, uint32_t count)
    {
        auto result = count ? capture_.arena_.NewArray<T>(count) : ArrayRef<T>{};
        std::copy(pData, pData + count, result.begin());
        return result;
    }

  private:
    std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>> cmd_queues_;
    std::unordered_map<format::HandleId, std::unique_ptr<CmdList>>  cmd_lists_;

    std::atomic_uint32_t submission_sequence_;

    std::pair<format::HandleId, CmdList*> cached_last_cmd_list_ = {};

    std::unordered_map<format::HandleId, std::unique_ptr<RootSignatureInfo>> root_signatures_;
    std::unordered_map<format::HandleId, std::unique_ptr<PsoInfo>>           pso_states_;

    std::unordered_map<format::HandleId, format::HandleId> swapchain_queue_map_;

    GraphCapture capture_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // DX12_GRAPH_EXPORT_CONSUMER_H
