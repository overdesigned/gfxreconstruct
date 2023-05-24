#ifndef DX12_GRAPH_EXPORT_CONSUMER_H
#define DX12_GRAPH_EXPORT_CONSUMER_H

#include "generated/generated_dx12_consumer_layer.h"
#include "decode/dx12_object_mapping_util.h"

#include <memory>
#include <array>
#include <unordered_map>
#include <atomic>
#include <mutex>
#include <functional>
#include <variant>

#include <d3d12shader.h>
#include <dxcapi.h>

#include "dx12_view_helpers.h"

#include <winrt/base.h>

#include "external/rps/include/rps/rps.h"
#include "external/rps/src/core/rps_util.hpp"
#include "external/rps/src/runtime/common/rps_render_graph_resource.hpp"

using rps::Arena;
using rps::ArrayRef;
using rps::ArenaVector;
using rps::ConstArrayRef;

using winrt::com_ptr;

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

#define GRAPH_EXPORTER_NOT_IMPLEMENTED assert(false && "Not implemented")

struct D3D12DescriptorHandle
{
    format::HandleId heap_id = {};
    uint32_t         index   = UINT32_MAX;

    D3D12DescriptorHandle() {}
    D3D12DescriptorHandle(format::HandleId heap_id_in, uint32_t index_in) : heap_id(heap_id_in), index(index_in) {}
    explicit D3D12DescriptorHandle(const Decoded_D3D12_CPU_DESCRIPTOR_HANDLE& hdl) :
        heap_id(hdl.heap_id), index(hdl.index)
    {}

    bool operator==(const D3D12DescriptorHandle& rhs) const { return (heap_id == rhs.heap_id) && (index == rhs.index); }

    operator bool() const { return index != UINT32_MAX; }
};

struct BufferView
{
    format::HandleId buf    = {};
    uint64_t         offset = 0;
    uint64_t         size   = 0;

    bool operator==(const BufferView& rhs) const
    {
        return (buf == rhs.buf) && (offset == rhs.offset) && (size == rhs.size);
    }
};

struct ConstantBufferViewEx
{
    D3D12_CONSTANT_BUFFER_VIEW_DESC desc;
    BufferView                      buf;

    bool operator==(const ConstantBufferViewEx& rhs) const
    {
        return (buf == rhs.buf) && (desc.SizeInBytes == rhs.desc.SizeInBytes);
    }
};

struct IndexBufferViewEx
{
    D3D12_INDEX_BUFFER_VIEW ibv;
    BufferView              buf;

    bool operator==(const IndexBufferViewEx& rhs) const {
        return (buf == rhs.buf) && (ibv.Format == rhs.ibv.Format) && (ibv.SizeInBytes == rhs.ibv.SizeInBytes);
    }
};

struct VertexBufferViewEx
{
    D3D12_VERTEX_BUFFER_VIEW vbv;
    BufferView               buf;

    bool operator==(const VertexBufferViewEx& rhs) const
    {
        return (buf == rhs.buf) && (vbv.SizeInBytes == rhs.vbv.SizeInBytes) &&
               (vbv.StrideInBytes == rhs.vbv.StrideInBytes);
    }
};

struct IABindings
{
    IndexBufferViewEx            ib;
    ArrayRef<VertexBufferViewEx> vbs;
};

struct RSState
{
    format::HandleId            vrs_image;
    D3D12_SHADING_RATE          vrs_shading_rate;
    D3D12_SHADING_RATE_COMBINER vrs_combiners[D3D12_RS_SET_SHADING_RATE_COMBINER_COUNT];
    ArrayRef<D3D12_VIEWPORT>    viewports;
    ArrayRef<RECT>              scissor_rects;
};

struct NullDescriptor
{
    bool operator==(const NullDescriptor&) const { return true; }
};

struct DescriptorInfo
{
    std::variant<NullDescriptor,
                 D3D12_RENDER_TARGET_VIEW_DESC,
                 D3D12_DEPTH_STENCIL_VIEW_DESC,
                 D3D12_SHADER_RESOURCE_VIEW_DESC,
                 ConstantBufferViewEx,
                 D3D12_UNORDERED_ACCESS_VIEW_DESC>
        desc = {};

    format::HandleId resource_id             = {};
    format::HandleId uav_counter_resource_id = {};

    bool operator==(const DescriptorInfo& rhs) const
    {
        return (resource_id == rhs.resource_id) && (uav_counter_resource_id == rhs.uav_counter_resource_id) &&
               (desc == rhs.desc);
    }
};

struct DescriptorHeapInfo
{
    format::HandleId            heap_id  = {};
    D3D12_DESCRIPTOR_HEAP_DESC  desc     = {};
    D3D12_GPU_DESCRIPTOR_HANDLE gpu_base = {};
    uint32_t                    inc_size = 0;

    std::vector<DescriptorInfo> descriptors;
};

struct OMBindings
{
    DescriptorInfo           dsv;
    ArrayRef<DescriptorInfo> rtvs;
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

    std::variant<D3D12_GPU_DESCRIPTOR_HANDLE, BufferView, RootConstants> data;

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
    uint64_t                root_params_mask = 0;

    RootParamBindings() {}

    RootParamBindings(Arena*                                          arena,
                      RootSignatureInfo*                              root_sig_in,
                      uint64_t                                        root_params_mask_in,
                      std::array<RootParameter, D3D12_MAX_ROOT_COST>& root_params_in) :
        root_sig(root_sig_in),
        root_params_mask(root_params_mask_in)
    {
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

    const RootParameter* GetRootParam(uint32_t root_param_index) const
    {
        assert(root_param_index <= 63);

        uint32_t mask_bit = (1ull << root_param_index);
        if (mask_bit & root_params_mask)
        {
            uint32_t index = uint32_t(__popcnt64(root_params_mask & (mask_bit - 1)));
            return &root_params[index];
        }

        return nullptr;
    }
};

struct PsoInfo
{
    format::HandleId         pso_id         = {};
    format::HandleId         root_signature = {};
    const RootSignatureInfo* root_sig_info  = {};

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

    struct ResourceBindingDesc
    {
        LPCSTR                Name;
        D3D_SHADER_INPUT_TYPE Type;
        UINT                  BindPoint;
        UINT                  BindCount;
        UINT                  Space;
        D3D_SRV_DIMENSION     Dimension;
        RpsShaderStageFlags   ShaderStageMask;
    };

    ArenaVector<ResourceBindingDesc> shader_res_bindings;

    void SetDesc(const Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC& desc, Arena& arena)
    {
        root_signature = desc.pRootSignature;

        SetStreamOut(arena, desc.StreamOutput);
        SetBlendState(desc.BlendState);
        SetRasterizer(desc.RasterizerState);
        SetDepthStencilState(desc.DepthStencilState);
        SetInputLayout(arena, desc.InputLayout);

        shader_res_bindings.reset(&arena);

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

        FinalizeResourceBindingList();

        render_target_formats.NumRenderTargets = desc.decoded_value->NumRenderTargets;
        std::copy(std::begin(render_target_formats.RTFormats),
                  std::end(render_target_formats.RTFormats),
                  std::begin(desc.decoded_value->RTVFormats));

        sample_desc = desc.decoded_value->SampleDesc;
    }

    void SetDesc(const Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC& desc, Arena& arena)
    {
        root_signature = desc.pRootSignature;

        shader_res_bindings.reset(&arena);

        ReflectShader(*desc.CS->decoded_value, RPS_SHADER_STAGE_CS);

        FinalizeResourceBindingList();
    }

    void SetDesc(const Decoded_D3D12_PIPELINE_STATE_STREAM_DESC& desc, Arena& arena)
    {
        root_signature = desc.root_signature;

        shader_res_bindings.reset(&arena);

        if (desc.cs_bytecode.decoded_value)
        {
            ReflectShader(*desc.cs_bytecode.decoded_value, RPS_SHADER_STAGE_CS);

            FinalizeResourceBindingList();
        }
        else
        {
            SetStreamOut(arena, &desc.stream_output);
            SetBlendState(&desc.blend);
            SetRasterizer(&desc.rasterizer);
            if (desc.depth_stencil.decoded_value)
                SetDepthStencilState(&desc.depth_stencil);
            if (desc.depth_stencil1.decoded_value)
                SetDepthStencilState(&desc.depth_stencil1);
            SetInputLayout(arena, &desc.input_layout);

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

            FinalizeResourceBindingList();

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
    void ReflectShader(D3D12_SHADER_BYTECODE code, RpsShaderStageBits shaderStage)
    {
        if (!code.pShaderBytecode || (code.BytecodeLength == 0))
            return;

#if DUMP_SHADER
        do
        {
            std::ofstream fs("tmp_vs.dxbc", std::ios::binary);
            if (fs)
            {
                fs.write(reinterpret_cast<const char*>(code.pShaderBytecode), code.BytecodeLength);
                fs.flush();
            }
        } while (false);
#endif

        static constexpr UINT PartKind_DXBC_SHDR = DXC_FOURCC('S', 'H', 'D', 'R');
        static constexpr UINT PartKind_DXBC_SHEX = DXC_FOURCC('S', 'H', 'E', 'X');

        bool bHasDXBC_SHDR = false;

        com_ptr<ID3D12ShaderReflection> pRefl;

        auto pfnDxcCreateInstance = GetDxcCreateInstanceFunc();

        if (pfnDxcCreateInstance)
        {
            do
            {
                com_ptr<IDxcUtils> pDxcUtils;
                HRESULT            hr = pfnDxcCreateInstance(CLSID_DxcUtils, IID_PPV_ARGS(&pDxcUtils));

                if (FAILED(hr))
                {
                    fprintf(stderr, "\nFailed to create IDxcUtils! Result = 0x%08x", hr);
                    break;
                }

                DxcBuffer codeBuffer = {};
                codeBuffer.Encoding  = DXC_CP_ACP;
                codeBuffer.Ptr       = code.pShaderBytecode;
                codeBuffer.Size      = code.BytecodeLength;

                com_ptr<IDxcContainerReflection> pContainerReflection;
                hr = pfnDxcCreateInstance(CLSID_DxcContainerReflection, IID_PPV_ARGS(&pContainerReflection));

                if (FAILED(hr))
                {
                    fprintf(stderr, "\nFailed to create IDxcContainerReflection! Result = 0x%08x", hr);
                    break;
                }

                com_ptr<IDxcBlobEncoding> pBlob;
                hr = pDxcUtils->CreateBlobFromPinned(
                    code.pShaderBytecode, UINT32(code.BytecodeLength), DXC_CP_ACP, pBlob.put());

                if (FAILED(hr))
                {
                    fprintf(stderr, "\nFailed to create IDxcBlobEncoding! Result = 0x%08x", hr);
                    break;
                }

#if 0
                com_ptr<IDxcCompiler> pDxcCompiler;
                hr = pfnDxcCreateInstance(CLSID_DxcCompiler, IID_PPV_ARGS(&pDxcCompiler));

                if (SUCCEEDED(hr))
                {
                    com_ptr<IDxcBlobEncoding> pDisassembly;
                    if (SUCCEEDED(pDxcCompiler->Disassemble(pBlob.get(), pDisassembly.put())))
                    {
                        printf("\n%s", static_cast<const char*>(pDisassembly->GetBufferPointer()));
                    }
                }
                else
                {
                    fprintf(stderr, "\nFailed to create IDxcCompiler! Result = 0x%08x", hr);
                }
#endif

                hr = pContainerReflection->Load(pBlob.get());

                if (FAILED(hr))
                {
                    fprintf(stderr, "\nFailed IDxcContainerReflection::Load()! Result = 0x%08x", hr);
                    break;
                }

                uint32_t partCount;
                if (FAILED(pContainerReflection->GetPartCount(&partCount)))
                {
                    fprintf(stderr, "\nFailed IDxcContainerReflection::GetPartCount()!");
                    break;
                }

                for (uint32_t i = 0; i < partCount; ++i)
                {
                    UINT32 partKind = 0;
                    if (SUCCEEDED(pContainerReflection->GetPartKind(i, &partKind)))
                    {
                        if ((partKind == DXC_PART_REFLECTION_DATA) || (partKind == DXC_PART_DXIL))
                        {
                            pContainerReflection->GetPartReflection(i, IID_PPV_ARGS(&pRefl));
                        }
                        else if ((partKind == PartKind_DXBC_SHDR) || (partKind == PartKind_DXBC_SHEX))
                        {
                            bHasDXBC_SHDR = true;
                        }
                    }
                }

            } while (false);
        }
        else
        {
            fprintf(stderr, "\nFailed to load entry 'DxcCreateInstance'");
        }

        if (bHasDXBC_SHDR && !pRefl)
        {
            auto pfnD3DReflect = GetD3DCompilerFunctions()->pfnD3DReflect;

            if (pfnD3DReflect)
            {
#if 0
                if (GetD3DCompilerFunctions()->pfnD3DDisassemble)
                {
                    com_ptr<ID3DBlob> pDisassembly; 
                    if (SUCCEEDED(GetD3DCompilerFunctions()->pfnD3DDisassemble(
                        code.pShaderBytecode, code.BytecodeLength, 0, nullptr, pDisassembly.put())))
                    {
                        fprintf(stdout,
                                "\n\nPSO %" PRId64 " - Shader %s\n\n%s",
                                pso_id,
                                GetShaderStageName(shaderStage),
                                static_cast<const char*>(pDisassembly->GetBufferPointer()));
                    }
                }
#endif

                HRESULT hr = pfnD3DReflect(code.pShaderBytecode, code.BytecodeLength, IID_PPV_ARGS(&pRefl));

                if (FAILED(hr))
                {
                    fprintf(stderr, "\nFailed D3DReflect()! Result = 0x%08x", hr);
                }

                if (pRefl)
                {
                    D3D12_SHADER_DESC desc = {};

                    // Reflection info stripped
                    if (FAILED(pRefl->GetDesc(&desc)) || (desc.BoundResources == 0))
                    {
                        pRefl = nullptr;
                    }
                }
            }

            if (!pRefl)
            {
                auto pfnD3DReflectRdc = GetD3DReflectFallbackFromRenderDoc();

                if (pfnD3DReflectRdc)
                {
                    HRESULT hr = pfnD3DReflectRdc(code.pShaderBytecode, code.BytecodeLength, IID_PPV_ARGS(&pRefl));

                    if (FAILED(hr))
                    {
                        fprintf(stderr, "\nFailed D3DReflectRdc()! Result = 0x%08x", hr);
                    }
                }
            }
        }

        if (pRefl)
        {
            D3D12_SHADER_DESC desc = {};

            if (FAILED(pRefl->GetDesc(&desc)))
            {
                fprintf(stderr, "\nFailed pRefl->GetDesc()!");
                return;
            }

            D3D12_SHADER_INPUT_BIND_DESC resBindDesc = {};

            shader_res_bindings.reserve(desc.BoundResources);

            for (uint32_t iRes = 0; iRes < desc.BoundResources; iRes++)
            {
                if (SUCCEEDED(pRefl->GetResourceBindingDesc(iRes, &resBindDesc)))
                {
                    if (resBindDesc.Type == D3D_SIT_SAMPLER)
                        continue;

                    if (resBindDesc.uFlags & D3D_SIF_UNUSED)
                        continue;

                    auto pBindingDesc = shader_res_bindings.grow(1);

                    pBindingDesc->Name            = resBindDesc.Name;
                    pBindingDesc->Type            = resBindDesc.Type;
                    pBindingDesc->BindPoint       = resBindDesc.BindPoint;
                    pBindingDesc->BindCount       = resBindDesc.BindCount;
                    pBindingDesc->Space           = resBindDesc.Space;
                    pBindingDesc->Dimension       = resBindDesc.Dimension;
                    pBindingDesc->ShaderStageMask = shaderStage;
                }
                else
                {
                    fprintf(stderr, "\nFailed pRefl->GetResourceBindingDesc(%u)!", iRes);
                }
            }

            if (shaderStage == RPS_SHADER_STAGE_VS)
            {
                active_vb_slot_mask = 0;

                auto input_layout_element_end = input_layout.pInputElementDescs + input_layout.NumElements;

                for (uint32_t i = 0; i < desc.InputParameters; i++)
                {
                    D3D12_SIGNATURE_PARAMETER_DESC inputSigParamDesc = {};
                    pRefl->GetInputParameterDesc(i, &inputSigParamDesc);

                    if (inputSigParamDesc.SystemValueType == D3D_NAME_UNDEFINED)
                    {
                        auto input_layout_elem =
                            std::find_if(input_layout.pInputElementDescs, input_layout_element_end, [&](auto& elem) {
                                return (strcmp(elem.SemanticName, inputSigParamDesc.SemanticName) == 0) &&
                                       (elem.SemanticIndex == inputSigParamDesc.SemanticIndex);
                            });

                        if (input_layout_elem != input_layout_element_end)
                        {
                            active_vb_slot_mask |= (1u << input_layout_elem->InputSlot);
                        }
                    }
                }
            }

            if (shaderStage == RPS_SHADER_STAGE_PS)
            {
                active_rtv_slot_mask = 0;

                for (uint32_t i = 0; i < desc.OutputParameters; i++)
                {
                    D3D12_SIGNATURE_PARAMETER_DESC outputSigParamDesc = {};
                    pRefl->GetOutputParameterDesc(i, &outputSigParamDesc);

                    if (outputSigParamDesc.SystemValueType == D3D_NAME_TARGET)
                    {
                        active_rtv_slot_mask |= (1u << outputSigParamDesc.SemanticIndex);
                    }
                }
            }
        }
    }

    void FinalizeResourceBindingList()
    {
        std::sort(shader_res_bindings.begin(), shader_res_bindings.end(), [](auto& lhs, auto& rhs) {
            const uint64_t lKey = (uint64_t(lhs.Space) << 32) | (lhs.BindPoint);
            const uint64_t rKey = (uint64_t(rhs.Space) << 32) | (rhs.BindPoint);

            if (lKey != rKey)
            {
                return lKey < rKey;
            }

            return lhs.BindCount < rhs.BindCount;
        });
    }

    DxcCreateInstanceProc GetDxcCreateInstanceFunc()
    {
        static std::mutex            s_dxcDllMutex;
        static HMODULE               s_hDxcDll              = nullptr;
        static DxcCreateInstanceProc s_pfnDxcCreateInstance = nullptr;

        if (s_hDxcDll == nullptr)
        {
            std::scoped_lock lock(s_dxcDllMutex);

            if (s_hDxcDll == nullptr)
            {
                s_hDxcDll = ::LoadLibrary(TEXT("dxcompiler.dll"));
                if (s_hDxcDll != nullptr)
                {
                    s_pfnDxcCreateInstance =
                        reinterpret_cast<DxcCreateInstanceProc>(::GetProcAddress(s_hDxcDll, "DxcCreateInstance"));
                }
                else
                {
                    s_hDxcDll = HMODULE(1); // Failure marker, don't try again.
                }
            }
        }

        return s_pfnDxcCreateInstance;
    }

    typedef HRESULT(WINAPI* PFN_D3DReflectProc)(LPCVOID pSrcData,
                                                SIZE_T  SrcDataSize,
                                                REFIID  pInterface,
                                                void**  ppReflector);

    typedef HRESULT(WINAPI* PFN_D3DDisassemble)(
        LPCVOID pSrcData, SIZE_T SrcDataSize, UINT Flags, LPCSTR szComments, ID3DBlob** ppDisassembly);

    struct D3DCompilerFunctions
    {
        PFN_D3DReflectProc pfnD3DReflect;
        PFN_D3DDisassemble pfnD3DDisassemble;
    };

    const D3DCompilerFunctions* GetD3DCompilerFunctions()
    {
        static std::mutex           s_d3dcompilerMutex;
        static HMODULE              s_hRdcDll     = nullptr;
        static D3DCompilerFunctions s_pfnD3DFuncs = {};

        if (s_hRdcDll == nullptr)
        {
            std::scoped_lock lock(s_d3dcompilerMutex);
            if (s_hRdcDll == nullptr)
            {
                s_hRdcDll = ::LoadLibrary(TEXT("d3dcompiler_47.dll"));
                if (s_hRdcDll != nullptr)
                {
                    s_pfnD3DFuncs.pfnD3DReflect =
                        reinterpret_cast<PFN_D3DReflectProc>(::GetProcAddress(s_hRdcDll, "D3DReflect"));

                    s_pfnD3DFuncs.pfnD3DDisassemble =
                        reinterpret_cast<PFN_D3DDisassemble>(::GetProcAddress(s_hRdcDll, "D3DDisassemble"));
                }
                else
                {
                    s_hRdcDll = HMODULE(1); // Failure marker, don't try again.
                }
            }
        }

        return &s_pfnD3DFuncs;
    }

    typedef HRESULT(__cdecl* D3DReflectProcRdc)(LPCVOID pSrcData,
                                                SIZE_T  SrcDataSize,
                                                REFIID  pInterface,
                                                void**  ppReflector);

    D3DReflectProcRdc GetD3DReflectFallbackFromRenderDoc()
    {
        static std::mutex        s_d3dcompilerMutex;
        static HMODULE           s_hRdcDll       = nullptr;
        static D3DReflectProcRdc s_pfnD3DReflect = nullptr;

        if (s_hRdcDll == nullptr)
        {
            std::scoped_lock lock(s_d3dcompilerMutex);
            if (s_hRdcDll == nullptr)
            {
                s_hRdcDll = ::LoadLibrary(TEXT("renderdoc.dll"));
                if (s_hRdcDll != nullptr)
                {
                    s_pfnD3DReflect =
                        reinterpret_cast<D3DReflectProcRdc>(::GetProcAddress(s_hRdcDll, "RENDERDOC_DXBCReflect"));
                }
                else
                {
                    s_hRdcDll = HMODULE(1); // Failure marker, don't try again.
                }
            }
        }
        return s_pfnD3DReflect;
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

struct GfxPipelineSnapshot
{
    IABindings*          ia;
    RSState*             rs;
    OMBindings*          om;
    uint32_t             prim_topology;
    uint32_t             stencil_ref;
    std::array<float, 4> blend_factors;
    RootParamBindings    root_param_bindings;
};

struct ComputePipelineSnapshot
{
    RootParamBindings root_param_bindings;
};

struct PipelineSnapshot
{
    PsoInfo*                 pso;
    GfxPipelineSnapshot*     gfx;
    ComputePipelineSnapshot* compute;
    format::HandleId         srv_cbv_uav_descriptor_heap;
    format::HandleId         sampler_descriptor_heap;
};

struct GraphCapture
{
    Arena persistent_arena_;
    Arena frame_arena_;

    GraphCapture() :
        persistent_arena_{ RpsAllocator{
                               &GraphCapture::Malloc,
                               &GraphCapture::Free,
                               &GraphCapture::Realloc,
                               this,
                           },
                           64 * 1024 * 1024 },
        frame_arena_{ RpsAllocator{
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

        using VertexBufferArray = std::array<VertexBufferViewEx, D3D12_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT>;
        using RtvArray = std::array<DescriptorInfo, D3D12_SIMULTANEOUS_RENDER_TARGET_COUNT>;
        using ViewportArray = std::array<D3D12_VIEWPORT, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE>;
        using ScissorRectArray  = std::array<D3D12_RECT, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE>;
        using RootParameterArray = std::array<RootParameter, D3D12_MAX_ROOT_COST>;

        IndexBufferViewEx ib;
        uint32_t          num_vbs;
        VertexBufferArray vbs;

        uint32_t       num_rtvs;
        RtvArray       rtvs;
        DescriptorInfo dsv;

        uint32_t         num_viewports;
        ViewportArray    viewports;
        uint32_t         num_scissor_rects;
        ScissorRectArray scissor_rects;

        format::HandleId srv_cbv_uav_descriptor_heap;
        format::HandleId sampler_descriptor_heap;

        RootSignatureInfo* graphics_root_signature;
        RootSignatureInfo* compute_root_signature;
        uint64_t           graphics_root_params_mask;
        RootParameterArray graphics_root_params;
        uint64_t           compute_root_params_mask;
        RootParameterArray compute_root_params;

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

            srv_cbv_uav_descriptor_heap = {};
            sampler_descriptor_heap     = {};

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

    struct ResourceRef
    {
        format::HandleId      resource_id = {};
        rps::SubresourceRange range;
        rps::AccessAttr       access;

        ResourceRef(format::HandleId      resource_id_in = {},
                    rps::SubresourceRange range_in       = {},
                    rps::AccessAttr       access_in      = {}) :
            resource_id(resource_id_in),
            range(range_in), access(access_in)
        {}
    };


    struct D3D12CopyTextureRegionArgs
    {
        D3D12_TEXTURE_COPY_LOCATION pDst;
        ResourceRef                 pDstRef;
        UINT                        DstX;
        UINT                        DstY;
        UINT                        DstZ;
        D3D12_TEXTURE_COPY_LOCATION pSrc;
        ResourceRef                 pSrcRef;
        D3D12_BOX*                  pSrcBox;
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
        DescriptorInfo        RenderTargetView;
        std::array<float, 4>  ColorRGBA;
        ArrayRef<RECT>        Rects;
    };

    struct D3D12ClearDsvArgs
    {
        DescriptorInfo        DepthStencilView;
        D3D12_CLEAR_FLAGS     ClearFlags;
        FLOAT                 Depth;
        UINT8                 Stencil;
        ArrayRef<RECT>        Rects;
    };

    struct D3D12ClearUavUIntArgs
    {
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandle;
        DescriptorInfo                      ViewCPUHandle;
        format::HandleId                    pResource;
        std::array<UINT, 4>                 Values;
        ArrayRef<RECT>                      Rects;
    };

    struct D3D12ClearUavFloatArgs
    {
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandle;
        DescriptorInfo                      ViewCPUHandle;
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

        PipelineSnapshot pipeline_snapshot_ = {};

        ArrayRef<ResourceRef> resource_refs_ = {};

        CmdAction() {}

        template<typename T>
        CmdAction(const T& action, const PipelineSnapshot pipeline_snapshot) :
            action_(action), pipeline_snapshot_(pipeline_snapshot)
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

        GfxPipelineSnapshot*     gfx_pipeline_snapshot_     = {};
        ComputePipelineSnapshot* compute_pipeline_snapshot_ = {};

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
        void ActionGfx(const T& src)
        {
            auto pipeline_snapshot = TakeGfxPipelineSnapshot();

            cmd_actions_.push_back(arena_->New<CmdAction>(src, pipeline_snapshot));
        }

        template <typename T>
        void ActionCompute(const T& src)
        {
            auto pipeline_snapshot = TakeComputePipelineSnapshot();

            cmd_actions_.push_back(arena_->New<CmdAction>(src, pipeline_snapshot));
        }

        template <typename T>
        void ActionDescriptorHeapOnly(const T& src)
        {
            auto pipeline_snapshot = PipelineSnapshot{};

            pipeline_snapshot.srv_cbv_uav_descriptor_heap = pipeline_.srv_cbv_uav_descriptor_heap;
            pipeline_snapshot.sampler_descriptor_heap     = pipeline_.sampler_descriptor_heap;

            cmd_actions_.push_back(arena_->New<CmdAction>(src, pipeline_snapshot));
        }

        void Action(const D3D12_DRAW_ARGUMENTS& src) { ActionGfx(src); }
        void Action(const D3D12_DRAW_INDEXED_ARGUMENTS& src) { ActionGfx(src); }
        void Action(const D3D12_DISPATCH_MESH_ARGUMENTS& src) { ActionGfx(src); }
        void Action(const D3D12_DISPATCH_ARGUMENTS& src) { ActionCompute(src); }
        void Action(const D3D12_DISPATCH_RAYS_DESC& src) { ActionCompute(src); }
        void Action(const D3D12ClearUavUIntArgs& src) { ActionDescriptorHeapOnly(src); }
        void Action(const D3D12ClearUavFloatArgs& src) { ActionDescriptorHeapOnly(src); }

        template<typename T>
        void Action(const T& src)
        {
            cmd_actions_.push_back(arena_->New<CmdAction>(src, PipelineSnapshot{}));
        }

        PipelineSnapshot TakeGfxPipelineSnapshot()
        {
            static constexpr uint64_t GfxStateMask = kDirtyMaskGraphicsRootParams | kDirtyMaskIA | kDirtyMaskRS |
                                                     kDirtyMaskOM | kDirtyMaskPrimTopology | kDirtyMaskBlendFactor |
                                                     kDirtyMaskStencilRef | kDirtyMaskDepthBounds;

            const uint64_t dirty_mask = (dirty_mask_ & GfxStateMask);

            if (dirty_mask != 0)
            {
                auto new_snap_shot = gfx_pipeline_snapshot_ ? arena_->New<GfxPipelineSnapshot>(*gfx_pipeline_snapshot_)
                                                            : arena_->New<GfxPipelineSnapshot>();

                if (dirty_mask_ & kDirtyMaskIA)
                {
                    auto ia = arena_->New<IABindings>();
                    ia->ib  = pipeline_.ib;
                    ia->vbs = arena_->NewArray<VertexBufferViewEx>(pipeline_.num_vbs);
                    std::copy(pipeline_.vbs.begin(), pipeline_.vbs.begin() + pipeline_.num_vbs, ia->vbs.begin());

                    new_snap_shot->ia = ia;
                }
                if (dirty_mask_ & kDirtyMaskRS)
                {
                    auto rs       = arena_->New<RSState>();
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
                    auto om  = arena_->New<OMBindings>();
                    om->dsv  = pipeline_.dsv;
                    om->rtvs = arena_->NewArray<DescriptorInfo>(pipeline_.num_rtvs);
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

                gfx_pipeline_snapshot_ = new_snap_shot;

                dirty_mask_ &= ~dirty_mask;
            }

            PipelineSnapshot snap_shot = {};

            snap_shot.pso                         = pipeline_.pso;
            snap_shot.gfx                         = gfx_pipeline_snapshot_;
            snap_shot.srv_cbv_uav_descriptor_heap = pipeline_.srv_cbv_uav_descriptor_heap;
            snap_shot.sampler_descriptor_heap     = pipeline_.sampler_descriptor_heap;

            return snap_shot;
        }

        PipelineSnapshot TakeComputePipelineSnapshot()
        {
            static constexpr uint64_t ComputeStateMask = kDirtyMaskComputeRootParams;

            const uint64_t dirty_mask = (dirty_mask_ & ComputeStateMask);
            if (dirty_mask != 0)
            {
                auto new_snap_shot = compute_pipeline_snapshot_
                                         ? arena_->New<ComputePipelineSnapshot>(*compute_pipeline_snapshot_)
                                         : arena_->New<ComputePipelineSnapshot>();

                if (dirty_mask_ & kDirtyMaskComputeRootParams)
                {
                    new_snap_shot->root_param_bindings = RootParamBindings(arena_,
                                                                           pipeline_.compute_root_signature,
                                                                           pipeline_.compute_root_params_mask,
                                                                           pipeline_.compute_root_params);
                }
                compute_pipeline_snapshot_ = new_snap_shot;

                dirty_mask_ &= ~dirty_mask;
            }

            PipelineSnapshot snap_shot = {};

            snap_shot.pso                         = pipeline_.pso;
            snap_shot.compute                     = compute_pipeline_snapshot_;
            snap_shot.srv_cbv_uav_descriptor_heap = pipeline_.srv_cbv_uav_descriptor_heap;
            snap_shot.sampler_descriptor_heap     = pipeline_.sampler_descriptor_heap;

            return snap_shot;
        }
    };

    struct CmdListSnapshot
    {
        format::HandleId          cmd_list_id_;
        rps::ArrayRef<CmdAction*> cmd_actions_;
    };

    using CmdListsBatch = std::vector<CmdListSnapshot>;

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
    virtual void Post_Process_D3D12CreateDevice(const ApiCallInfo&           call_info,
                                                HRESULT                      return_value,
                                                format::HandleId             pAdapter,
                                                D3D_FEATURE_LEVEL            MinimumFeatureLevel,
                                                Decoded_GUID                 riid,
                                                HandlePointerDecoder<void*>* ppDevice) override
    {
        if (*riid.decoded_value == __uuidof(ID3D12Device))
            d3d_device_ = *reinterpret_cast<ID3D12Device**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device1))
            d3d_device_ = *reinterpret_cast<ID3D12Device1**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device2))
            d3d_device_ = *reinterpret_cast<ID3D12Device2**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device3))
            d3d_device_ = *reinterpret_cast<ID3D12Device3**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device4))
            d3d_device_ = *reinterpret_cast<ID3D12Device4**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device5))
            d3d_device_ = *reinterpret_cast<ID3D12Device5**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device6))
            d3d_device_ = *reinterpret_cast<ID3D12Device6**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device7))
            d3d_device_ = *reinterpret_cast<ID3D12Device7**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device8))
            d3d_device_ = *reinterpret_cast<ID3D12Device8**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device9))
            d3d_device_ = *reinterpret_cast<ID3D12Device9**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device10))
            d3d_device_ = *reinterpret_cast<ID3D12Device10**>(ppDevice->GetHandlePointer());
        else if (*riid.decoded_value == __uuidof(ID3D12Device11))
            d3d_device_ = *reinterpret_cast<ID3D12Device11**>(ppDevice->GetHandlePointer());
        else
            assert(false && "Device IID not handled");
    }

    virtual void
    Post_Process_IUnknown_Release(const ApiCallInfo& call_info, format::HandleId object_id, ULONG return_value) override
    {
        if (return_value != 0)
            return;

        auto iter = descriptor_heaps_.find(object_id);

        if ((iter != descriptor_heaps_.end()) && (iter->second->desc.Flags & D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE))
        {
            auto sorted_iter = FindSortedGpuDescriptorHeapLowerBound(iter->second->gpu_base);
            sorted_gpu_descriptor_heaps_.erase(sorted_iter);
            descriptor_heaps_.erase(iter);
        }
    }

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
                                                 HandlePointerDecoder<void*>* ppStateObject) override
    {
        OnCreatePso(*ppStateObject->GetPointer(), *pDesc->GetMetaStructPointer());
    }

    // Descriptors

    virtual void Post_Process_ID3D12Device_CreateDescriptorHeap(
        const ApiCallInfo&                                        call_info,
        format::HandleId                                          object_id,
        HRESULT                                                   return_value,
        StructPointerDecoder<Decoded_D3D12_DESCRIPTOR_HEAP_DESC>* pDescriptorHeapDesc,
        Decoded_GUID                                              riid,
        HandlePointerDecoder<void*>*                              ppvHeap) override
    {
        auto heap_info     = std::make_unique<DescriptorHeapInfo>();
        heap_info->heap_id = *ppvHeap->GetPointer();
        heap_info->desc    = *pDescriptorHeapDesc->GetPointer();
        heap_info->descriptors.resize(heap_info->desc.NumDescriptors);
        heap_info->inc_size = d3d_device_->GetDescriptorHandleIncrementSize(heap_info->desc.Type);

        if (heap_info->desc.Flags & D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE)
        {
            assert(*riid.decoded_value == __uuidof(ID3D12DescriptorHeap));
            auto heap_ptr = (*reinterpret_cast<ID3D12DescriptorHeap**>(ppvHeap->GetHandlePointer()));

            heap_info->gpu_base = heap_ptr->GetGPUDescriptorHandleForHeapStart();

            auto sorted_iter = FindSortedGpuDescriptorHeapLowerBound(heap_info->gpu_base);
            sorted_gpu_descriptor_heaps_.insert(sorted_iter, heap_info.get());
        }

        descriptor_heaps_[*ppvHeap->GetPointer()] = std::move(heap_info);
    }

    virtual void Post_Process_ID3D12Device_CreateConstantBufferView(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        StructPointerDecoder<Decoded_D3D12_CONSTANT_BUFFER_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE                            DestDescriptor) override
    {
        auto heap_info = descriptor_heaps_.find(DestDescriptor.heap_id);
        assert(heap_info != descriptor_heaps_.end());

        auto buf_loc = MapGpuVaToBufferLocation(pDesc->GetPointer()->BufferLocation);

        auto& descriptor       = heap_info->second->descriptors[DestDescriptor.index];
        descriptor.desc        = ConstantBufferViewEx{ *pDesc->GetPointer(), buf_loc };
        descriptor.resource_id = buf_loc.buf;
    }

    virtual void Post_Process_ID3D12Device_CreateShaderResourceView(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pResource,
        StructPointerDecoder<Decoded_D3D12_SHADER_RESOURCE_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE                            DestDescriptor) override
    {
        auto heap_info = descriptor_heaps_.find(DestDescriptor.heap_id);
        assert(heap_info != descriptor_heaps_.end());

        auto& descriptor       = heap_info->second->descriptors[DestDescriptor.index];
        descriptor.desc        = *pDesc->GetPointer();
        descriptor.resource_id = pResource;
    }

    virtual void Post_Process_ID3D12Device_CreateUnorderedAccessView(
        const ApiCallInfo&                                              call_info,
        format::HandleId                                                object_id,
        format::HandleId                                                pResource,
        format::HandleId                                                pCounterResource,
        StructPointerDecoder<Decoded_D3D12_UNORDERED_ACCESS_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE                             DestDescriptor) override
    {
        auto heap_info = descriptor_heaps_.find(DestDescriptor.heap_id);
        assert(heap_info != descriptor_heaps_.end());

        auto& descriptor                   = heap_info->second->descriptors[DestDescriptor.index];
        descriptor.desc                    = *pDesc->GetPointer();
        descriptor.resource_id             = pResource;
        descriptor.uav_counter_resource_id = pCounterResource;
    }

    virtual void Post_Process_ID3D12Device_CreateRenderTargetView(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pResource,
        StructPointerDecoder<Decoded_D3D12_RENDER_TARGET_VIEW_DESC>*   pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE                            DestDescriptor) override
    {
        auto heap_info = descriptor_heaps_.find(DestDescriptor.heap_id);
        assert(heap_info != descriptor_heaps_.end());

        auto& descriptor       = heap_info->second->descriptors[DestDescriptor.index];
        descriptor.desc        = *pDesc->GetPointer();
        descriptor.resource_id = pResource;
    }

    virtual void Post_Process_ID3D12Device_CreateDepthStencilView(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pResource,
        StructPointerDecoder<Decoded_D3D12_DEPTH_STENCIL_VIEW_DESC>*   pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE                            DestDescriptor) override
    {
        auto heap_info = descriptor_heaps_.find(DestDescriptor.heap_id);
        assert(heap_info != descriptor_heaps_.end());

        auto& descriptor       = heap_info->second->descriptors[DestDescriptor.index];
        descriptor.desc        = *pDesc->GetPointer();
        descriptor.resource_id = pResource;
    }

    virtual void Post_Process_ID3D12Device_CopyDescriptors(
        const ApiCallInfo&                                         call_info,
        format::HandleId                                           object_id,
        UINT                                                       NumDestDescriptorRanges,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pDestDescriptorRangeStarts,
        PointerDecoder<UINT>*                                      pDestDescriptorRangeSizes,
        UINT                                                       NumSrcDescriptorRanges,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pSrcDescriptorRangeStarts,
        PointerDecoder<UINT>*                                      pSrcDescriptorRangeSizes,
        D3D12_DESCRIPTOR_HEAP_TYPE                                 DescriptorHeapsType)
    {
        struct CopyDescriptorRangeIterator
        {
            UINT                                       num_ranges;
            const Decoded_D3D12_CPU_DESCRIPTOR_HANDLE* range_starts;
            const UINT*                                range_sizes;

            const DescriptorHeapInfoMap& descriptor_heaps;
            DescriptorHeapInfo*          current_heap;
            uint32_t                     current_range;
            uint32_t                     current_index;

            CopyDescriptorRangeIterator(const DescriptorHeapInfoMap&               heap_map,
                                        UINT                                       num_ranges,
                                        const Decoded_D3D12_CPU_DESCRIPTOR_HANDLE* range_starts,
                                        const UINT*                                range_sizes) :
                num_ranges(num_ranges),
                range_starts(range_starts), range_sizes(range_sizes), descriptor_heaps(heap_map), current_heap(nullptr),
                current_range(0), current_index(0)
            {
                SetCurrRange(0);
            }

            CopyDescriptorRangeIterator& operator++()
            {
                ++current_index;
                if (current_index == GetRangeSize(current_range))
                {
                    SetCurrRange(current_range + 1);
                }
                return *this;
            }

            DescriptorInfo& operator*()
            {
                assert(range_starts[current_range].heap_id == current_heap->heap_id);
                assert(current_index < GetRangeSize(current_range));

                uint32_t offset = range_starts[current_range].index + current_index;

                return current_heap->descriptors[offset];
            }

        private:
            void SetCurrRange(uint32_t range)
            {
                current_heap  = nullptr;
                current_range = range;
                current_index = 0;

                while (current_range < num_ranges)
                {
                    if (current_index < GetRangeSize(current_range))
                    {
                        current_heap = descriptor_heaps.find(range_starts[current_range].heap_id)->second.get();
                        break;
                    }
                    ++current_range;
                }
            }

            uint32_t GetRangeSize(uint32_t range) const
            {
                assert(range < num_ranges);
                return range_sizes ? range_sizes[range] : 1;
            }
        };

        CopyDescriptorRangeIterator src_iter{ descriptor_heaps_,
                                              NumSrcDescriptorRanges,
                                              pSrcDescriptorRangeStarts->GetMetaStructPointer(),
                                              pSrcDescriptorRangeSizes->GetPointer() };

        CopyDescriptorRangeIterator dst_iter{ descriptor_heaps_,
                                              NumDestDescriptorRanges,
                                              pDestDescriptorRangeStarts->GetMetaStructPointer(),
                                              pDestDescriptorRangeSizes->GetPointer() };

        while (src_iter.current_range < NumSrcDescriptorRanges)
        {
            *dst_iter = *src_iter;
            ++src_iter;
            ++dst_iter;
        }
    }

    virtual void
    Post_Process_ID3D12Device_CopyDescriptorsSimple(const ApiCallInfo&                  call_info,
                                                    format::HandleId                    object_id,
                                                    UINT                                NumDescriptors,
                                                    Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
                                                    Decoded_D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
                                                    D3D12_DESCRIPTOR_HEAP_TYPE          DescriptorHeapsType) override
    {
        auto src_heap = descriptor_heaps_.find(SrcDescriptorRangeStart.heap_id);
        assert(src_heap != descriptor_heaps_.end());

        auto dst_heap = descriptor_heaps_.find(DestDescriptorRangeStart.heap_id);
        assert(dst_heap != descriptor_heaps_.end());

        std::copy(src_heap->second->descriptors.begin() + SrcDescriptorRangeStart.index,
                  src_heap->second->descriptors.begin() + SrcDescriptorRangeStart.index + NumDescriptors,
                  dst_heap->second->descriptors.begin() + DestDescriptorRangeStart.index);
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
        cmd_list->cmd_actions_.reset(cmd_list->arena_);

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

        std::vector<CmdListSnapshot> cmd_lists{ ppCommandLists->GetLength() };

        object_mapping::MapObjectArray(ppCommandLists, [&](size_t idx, format::HandleId cmd_list_id) {
            auto actions = FindCmdList(cmd_list_id)->cmd_actions_.range_all();

            cmd_lists[idx].cmd_list_id_ = cmd_list_id;
            cmd_lists[idx].cmd_actions_ = capture_.frame_arena_.NewArray<CmdAction*>(actions.size());
            std::copy(actions.begin(), actions.end(), cmd_lists[idx].cmd_actions_.begin());

            ResourceRefCollector resource_ref_collector;
            resource_ref_collector.consumer = this;

            ActionDebugPrintVisitor debug_printer;

            for (auto action : actions)
            {
                std::visit(debug_printer, action->action_);

                resource_ref_collector.resources.reset(&capture_.frame_arena_);
                resource_ref_collector.Process(action);
            }
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

    virtual void Post_Process_ID3D12GraphicsCommandList_CopyBufferRegion(const ApiCallInfo& call_info,
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

    virtual void Post_Process_ID3D12GraphicsCommandList_CopyTextureRegion(
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

        auto get_copy_location_resource_ref = [this](const Decoded_D3D12_TEXTURE_COPY_LOCATION* loc,
                                                     RpsAccessFlags                             access_flags) {
            if (loc->decoded_value->Type == D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT)
            {
                return ResourceRef{ loc->pResource, rps::SubresourceRange{}, rps::AccessAttr(access_flags) };
            }
            else
            {
                assert(loc->decoded_value->Type == D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX);

                const auto res_desc = loc->decoded_value->pResource->GetDesc();
                const auto array_layers =
                    (res_desc.Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D) ? 1 : res_desc.DepthOrArraySize;

                const uint16_t mip_slice   = uint16_t(loc->decoded_value->SubresourceIndex % res_desc.MipLevels);
                const uint32_t array_slice = (loc->decoded_value->SubresourceIndex / res_desc.MipLevels) % array_layers;

                return ResourceRef{ loc->pResource,
                                    rps::SubresourceRange{ mip_slice, 1, array_slice, 1 },
                                    rps::AccessAttr(access_flags) };
            }
        };

        auto dst_info = pDst->GetMetaStructPointer();
        auto src_info = pSrc->GetMetaStructPointer();

        const auto pSrcBoxCopy =
            (pSrcBox && pSrcBox->HasData()) ? capture_.frame_arena_.New<D3D12_BOX>(*pSrcBox->GetPointer()) : nullptr;

        D3D12CopyTextureRegionArgs copyArgs = { *dst_info->decoded_value,
                                                get_copy_location_resource_ref(dst_info, RPS_ACCESS_COPY_DEST_BIT),
                                                DstX,
                                                DstY,
                                                DstZ,
                                                *src_info->decoded_value,
                                                get_copy_location_resource_ref(src_info, RPS_ACCESS_COPY_SRC_BIT),
                                                pSrcBoxCopy };

        cl->Action(copyArgs);
    }

    virtual void Post_Process_ID3D12GraphicsCommandList_CopyResource(const ApiCallInfo& call_info,
                                                                     format::HandleId   object_id,
                                                                     format::HandleId   pDstResource,
                                                                     format::HandleId   pSrcResource)
    {
        auto cl = FindCmdList(object_id);

        D3D12CopyResourceArgs copyArgs = { pDstResource, pSrcResource };

        cl->Action(copyArgs);
    }

    virtual void Post_Process_ID3D12GraphicsCommandList_CopyTiles(
        const ApiCallInfo&                                             call_info,
        format::HandleId                                               object_id,
        format::HandleId                                               pTiledResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pTileRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>*          pTileRegionSize,
        format::HandleId                                               pBuffer,
        UINT64                                                         BufferStartOffsetInBytes,
        D3D12_TILE_COPY_FLAGS                                          Flags)
    {}

    virtual void Post_Process_ID3D12GraphicsCommandList_ResolveSubresource(const ApiCallInfo& call_info,
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

    virtual void Post_Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(
        const ApiCallInfo&                           call_info,
        format::HandleId                             object_id,
        UINT                                         NumDescriptorHeaps,
        HandlePointerDecoder<ID3D12DescriptorHeap*>* ppDescriptorHeaps)
    {
        auto cl = FindCmdList(object_id);

        auto ppHeaps = ppDescriptorHeaps->GetHandlePointer();

        for (uint32_t i = 0; i < NumDescriptorHeaps; ++i)
        {
            switch (ppHeaps[i]->GetDesc().Type)
            {
                case D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV:
                    cl->UpdateState(cl->pipeline_.srv_cbv_uav_descriptor_heap,
                                    ppDescriptorHeaps->GetPointer()[0],
                                    CmdList::kDirtyMaskDescritporHeaps);
                    break;
                case D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER:
                    cl->UpdateState(cl->pipeline_.sampler_descriptor_heap,
                                    ppDescriptorHeaps->GetPointer()[0],
                                    CmdList::kDirtyMaskDescritporHeaps);
                    break;
                default:
                    break;
            }
        }
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
                        RootParameter{ RootParameterIndex,
                                       { BaseDescriptor.decoded_value ? *BaseDescriptor.decoded_value
                                                                      : D3D12_GPU_DESCRIPTOR_HANDLE{} } },
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
                        RootParameter{ RootParameterIndex,
                                       { BaseDescriptor.decoded_value ? *BaseDescriptor.decoded_value
                                                                      : D3D12_GPU_DESCRIPTOR_HANDLE{} } },
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
                            RootConstants{ capture_.frame_arena_.NewArray<UINT>(numConstants) },
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
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               RootParameterIndex,
                                                                            D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        auto buf_loc = MapGpuVaToBufferLocation(BufferLocation);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { buf_loc } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(const ApiCallInfo& call_info,
                                                                             format::HandleId   object_id,
                                                                             UINT               RootParameterIndex,
                                                                             D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        auto buf_loc = MapGpuVaToBufferLocation(BufferLocation);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { buf_loc } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(const ApiCallInfo& call_info,
                                                                            format::HandleId   object_id,
                                                                            UINT               RootParameterIndex,
                                                                            D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        auto buf_loc = MapGpuVaToBufferLocation(BufferLocation);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { buf_loc } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(const ApiCallInfo& call_info,
                                                                             format::HandleId   object_id,
                                                                             UINT               RootParameterIndex,
                                                                             D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        auto buf_loc = MapGpuVaToBufferLocation(BufferLocation);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { buf_loc } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(const ApiCallInfo& call_info,
                                                                             format::HandleId   object_id,
                                                                             UINT               RootParameterIndex,
                                                                             D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.compute_root_params_mask,
                        cl->pipeline_.compute_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskComputeRootParams);

        auto buf_loc = MapGpuVaToBufferLocation(BufferLocation);

        cl->UpdateState(cl->pipeline_.compute_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { buf_loc } },
                        CmdList::kDirtyMaskComputeRootParams);
    }

    virtual void
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(const ApiCallInfo& call_info,
                                                                              format::HandleId   object_id,
                                                                              UINT               RootParameterIndex,
                                                                              D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
    {
        auto cl = FindCmdList(object_id);

        cl->UpdateState(cl->pipeline_.graphics_root_params_mask,
                        cl->pipeline_.graphics_root_params_mask | (1ui64 << RootParameterIndex),
                        CmdList::kDirtyMaskGraphicsRootParams);

        auto buf_loc = MapGpuVaToBufferLocation(BufferLocation);

        cl->UpdateState(cl->pipeline_.graphics_root_params[RootParameterIndex],
                        RootParameter{ RootParameterIndex, { buf_loc } },
                        CmdList::kDirtyMaskGraphicsRootParams);
    }

    virtual void Post_Process_ID3D12GraphicsCommandList_IASetIndexBuffer(
        const ApiCallInfo&                                     call_info,
        format::HandleId                                       object_id,
        StructPointerDecoder<Decoded_D3D12_INDEX_BUFFER_VIEW>* pView)
    {
        auto cl = FindCmdList(object_id);

        auto pViewData = pView->GetPointer();

        auto ibv = IndexBufferViewEx{ *pViewData, MapGpuVaToBufferLocation(pViewData->BufferLocation) };

        cl->UpdateState(cl->pipeline_.ib, ibv, CmdList::kDirtyMaskIA);
    }

    virtual void Post_Process_ID3D12GraphicsCommandList_IASetVertexBuffers(
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

        PipelineState::VertexBufferArray vbvs;

        for (uint32_t i = 0; i < NumViews; i++)
        {
            vbvs[i] = VertexBufferViewEx{ pViewsData[i], MapGpuVaToBufferLocation(pViewsData[i].BufferLocation) };
        }

        cl->UpdateState(ArrayRef<VertexBufferViewEx>(cl->pipeline_.vbs.data() + StartSlot, NumViews),
                        vbvs.data(),
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

        auto new_dsv_hdl = (pDepthStencilDescriptor && pDepthStencilDescriptor->GetMetaStructPointer())
                               ? D3D12DescriptorHandle(*pDepthStencilDescriptor->GetMetaStructPointer())
                               : D3D12DescriptorHandle();

        auto new_dsv = GetDescriptorFromHeap(new_dsv_hdl);

        cl->UpdateState(cl->pipeline_.dsv, new_dsv, CmdList::kDirtyMaskOM);

        cl->UpdateState(cl->pipeline_.num_rtvs, NumRenderTargetDescriptors, CmdList::kDirtyMaskOM);

        PipelineState::RtvArray new_rtvs;

        if (NumRenderTargetDescriptors > 0)
        {
            auto first_rtv = pRenderTargetDescriptors->GetMetaStructPointer();

            if (RTsSingleHandleToDescriptorRange)
            {
                for (UINT i = 0; i < NumRenderTargetDescriptors; ++i)
                {
                    new_rtvs[i] =
                        GetDescriptorFromHeap(D3D12DescriptorHandle{ first_rtv->heap_id, first_rtv->index + i });
                }
            }
            else
            {
                for (UINT i = 0; i < NumRenderTargetDescriptors; ++i)
                {
                    new_rtvs[i] = GetDescriptorFromHeap(D3D12DescriptorHandle(first_rtv[i]));
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

        auto rects = NewArray(capture_.frame_arena_, pRects->GetPointer(), NumRects);

        cl->Action(D3D12ClearDsvArgs{
            GetDescriptorFromHeap(D3D12DescriptorHandle(DepthStencilView)), ClearFlags, Depth, Stencil, rects });
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

        auto rects = NewArray(capture_.frame_arena_, pRects->GetPointer(), NumRects);

        D3D12ClearRtvArgs args = { GetDescriptorFromHeap(D3D12DescriptorHandle(RenderTargetView)), {}, rects };
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

        auto rects = NewArray(capture_.frame_arena_, pRects->GetPointer(), NumRects);

        D3D12ClearUavUIntArgs args = { ViewGPUHandleInCurrentHeap,
                                       GetDescriptorFromHeap(D3D12DescriptorHandle(ViewCPUHandle)),
                                       pResource,
                                       {},
                                       rects };

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

        auto rects = NewArray(capture_.frame_arena_, pRects->GetPointer(), NumRects);

        D3D12ClearUavFloatArgs args = { ViewGPUHandleInCurrentHeap,
                                        GetDescriptorFromHeap(D3D12DescriptorHandle(ViewCPUHandle)),
                                        pResource,
                                        {},
                                        rects };

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
        if (cached_last_cmd_list_.first == cmd_list_id)
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
            auto new_state = std::make_unique<CmdList>(&capture_.persistent_arena_);
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

            auto params =
                NewArray<D3D12_ROOT_PARAMETER1>(capture_.persistent_arena_, desc.pParameters, desc.NumParameters);
            new_root_sig->desc.pParameters = params.data();

            auto static_samplers = NewArray<D3D12_STATIC_SAMPLER_DESC>(
                capture_.persistent_arena_, desc.pStaticSamplers, desc.NumStaticSamplers);
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
            new_pso->SetDesc(desc, capture_.persistent_arena_);
            new_pso->root_sig_info = FindRootSignature(new_pso->root_signature);

            pso_states_[object_id] = std::move(new_pso);
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

    BufferView MapGpuVaToBufferLocation(D3D12_GPU_VIRTUAL_ADDRESS gpu_va)
    {
        if (gpu_va == 0)
        {
            return BufferView{};
        }

        format::HandleId buf_hdl = {};
        if (!GetGpuVaMapper()->Map(gpu_va, &buf_hdl))
        {
            GFXRECON_LOG_WARNING("Failed to map GPU VA for constant buffer view");
        }

        // TODO: offset not handled
        return BufferView{ buf_hdl, 0, 0 };
    }

    std::vector<const DescriptorHeapInfo*>::iterator
    FindSortedGpuDescriptorHeapLowerBound(D3D12_GPU_DESCRIPTOR_HANDLE gpu_hdl)
    {
        auto iter = std::lower_bound(sorted_gpu_descriptor_heaps_.begin(),
                                     sorted_gpu_descriptor_heaps_.end(),
                                     gpu_hdl,
                                     [](auto p_heap, const auto& hdl) { return p_heap->gpu_base.ptr > hdl.ptr; });

        return iter;
    }

    D3D12DescriptorHandle MapGpuDescriptor(D3D12_GPU_DESCRIPTOR_HANDLE gpu_hdl)
    {
        auto iter = FindSortedGpuDescriptorHeapLowerBound(gpu_hdl);

        assert(iter != sorted_gpu_descriptor_heaps_.end());

        if (iter != sorted_gpu_descriptor_heaps_.end())
        {
            auto heap_info = (*iter);

            assert(gpu_hdl.ptr >= heap_info->gpu_base.ptr);

            const uint32_t descriptor_idx = uint32_t((gpu_hdl.ptr - heap_info->gpu_base.ptr) / heap_info->inc_size);

            assert(descriptor_idx < heap_info->desc.NumDescriptors);

            return D3D12DescriptorHandle{ heap_info->heap_id, descriptor_idx };
        }

        return D3D12DescriptorHandle{};
    }

    const DescriptorInfo& GetDescriptorFromHeap(const D3D12DescriptorHandle& hdl) const
    {
        static constexpr DescriptorInfo default_desc = {};

        if (!hdl)
            return default_desc;

        auto iter = descriptor_heaps_.find(hdl.heap_id);
        assert(iter != descriptor_heaps_.end());

        return (iter != descriptor_heaps_.end()) ? iter->second->descriptors[hdl.index] : default_desc;
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
        const bool bDoAnalyze = !!(GetAsyncKeyState(VK_F11) & 0x1);

        if (bDoAnalyze)
        {
            AnalyzeFrame();
        }

        for (auto& q : cmd_queues_)
        {
            q.second->submissions.clear();
        }

        cmd_lists_.clear();

        cached_last_cmd_list_ = {};

        submission_sequence_ = 0;

        capture_.frame_arena_.Reset();
    }

    void AnalyzeFrame()
    {
        SubmissionAnalyzer analyzer;
        analyzer.run(cmd_queues_);
    }

    struct SubmissionAnalyzer
    {
        std::vector<std::pair<const Submission*, const CmdQueue*>> submissions_;

        void run(const std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>>& cmd_queues)
        {
            SortSubmissions(cmd_queues);

            ActionDebugPrintVisitor debug_printer;

            for (uint32_t submitIdx = 0; submitIdx < submissions_.size(); submitIdx++)
            {
                auto& submission = submissions_[submitIdx];
                std::visit(debug_printer, submission.first->action);
            }

            // RenderGraphBuilder graph_builder;
            // 
            // for (uint32_t submitIdx = 0; submitIdx < submissions_.size(); submitIdx++)
            // {
            //     auto& submission = submissions_[submitIdx];
            //     std::visit(graph_builder, submission.first->action);
            // }
        }

        void SortSubmissions(const std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>>& cmd_queues)
        {
            std::vector<std::pair<const Submission*, const CmdQueue*>> sorted_submissions;
            std::unordered_map<FenceValue, bool, FenceValue::Hash>     signals;

            for (auto& q : cmd_queues)
            {
                for (auto& submission : q.second->submissions)
                {
                    if (auto p_signal = std::get_if<Signal>(&submission.action))
                    {
                        signals.insert(std::make_pair(*p_signal, false));
                    }

                    sorted_submissions.push_back({ &submission, q.second.get() });
                }
            }

            std::sort(sorted_submissions.begin(), sorted_submissions.end(), [](auto& l, auto& r) {
                return l.first->sequence < r.first->sequence;
            });

            submissions_.clear();
            submissions_.reserve(sorted_submissions.size());

            struct QueueExecState
            {
                uint32_t blocked_submission_idx = UINT32_MAX;
            };

            uint32_t completed_queues = 0;

            std::unordered_map<const CmdQueue*, QueueExecState> queues;
            queues.reserve(cmd_queues.size());
            std::for_each(
                cmd_queues.begin(), cmd_queues.end(), [&](auto& iter) { queues[iter.second.get()] = { UINT32_MAX }; });

            int32_t num_blocked_queues = 0;

            while (submissions_.size() < sorted_submissions.size())
            {
                const size_t prev_submission_size = submissions_.size();

                for (uint32_t isub = 0; isub < sorted_submissions.size(); isub++)
                {
                    auto& submission = sorted_submissions[isub];

                    if (!submission.first)
                        continue;

                    auto& queue_state = queues[submission.second];

                    if (queue_state.blocked_submission_idx < isub)
                        continue;

                    bool b_yield = false;

                    if (auto p_wait = std::get_if<Wait>(&submission.first->action))
                    {
                        auto       found_signal           = signals.find(*p_wait);
                        const bool signaled_in_curr_frame = (found_signal != signals.end());

                        if (signaled_in_curr_frame)
                        {
                            if (!found_signal->second && ((queue_state.blocked_submission_idx != isub)))
                            {
                                assert(queue_state.blocked_submission_idx == UINT32_MAX);

                                num_blocked_queues++;
                                assert(num_blocked_queues <= queues.size());
                                queue_state.blocked_submission_idx = isub;
                                continue;
                            }

                            if (found_signal->second && queue_state.blocked_submission_idx == isub)
                            {
                                num_blocked_queues--;
                                assert(num_blocked_queues >= 0);
                                queue_state.blocked_submission_idx = UINT32_MAX;
                            }
                        }
                    }
                    else if (auto p_signal = std::get_if<Signal>(&submission.first->action))
                    {
                        signals[*p_signal] = true;
                        b_yield             = num_blocked_queues > 0;
                    }

                    submissions_.push_back(std::move(submission));
                    submission = {};

                    if (b_yield)
                        break;
                }

                if (prev_submission_size == submissions_.size())
                {
                    fprintf(stderr, "Error: Queue execution not making progress.");
                    break;
                }
            }
        }
    };

    struct ActionDebugPrintVisitor
    {
        void operator()(const CmdListsBatch& batch)
        {
            RpsPrinter printer = {};
            printer.pfnPrintf = [](void* pCtx, const char* pFormat, ...) {
                va_list args;
                va_start(args, pFormat);
                vprintf(pFormat, args);
                va_end(args);
            };
            printer.pfnVPrintf = [](void* pCtx, const char* pFormat, va_list args) { vprintf(pFormat, args); };


            for (auto& cmd_list : batch)
            {
                printf("\nbegin_cmd_list %" PRIu64, cmd_list.cmd_list_id_);

                for (auto cmd_action : cmd_list.cmd_actions_)
                {
                    std::visit(*this, cmd_action->action_);

                    for (auto& res_ref : cmd_action->resource_refs_)
                    {
                        printf("\n    res(%" PRIu64, res_ref.resource_id);
                        printf(",\n        ");
                        res_ref.access.Print(printer);
                        printf(",\n        ");
                        rps::SubresourceRangePacked(0xff, res_ref.range).Print(printer);
                        printf(")");
                    }
                }

                printf("\nend_cmd_list");
            }
        }

        void operator()(const Signal& signal)
        {
            printf("\nsignal( %" PRIu64 ", %" PRIu64 " );", signal.fence, signal.value);
        }

        void operator()(const Wait& wait) { printf("\nwait( %" PRIu64 ", %" PRIu64 " );", wait.fence, wait.value); }

        void operator()(const Present& present) { printf("\npresent();"); }

        bool operator()(const D3D12_DRAW_ARGUMENTS& args)
        {
            printf("\ndraw_instanced(%u, %u, %u, %u);",
                   args.VertexCountPerInstance,
                   args.InstanceCount,
                   args.StartVertexLocation,
                   args.StartInstanceLocation);
            return true;
        }

        bool operator()(const D3D12_DRAW_INDEXED_ARGUMENTS& args)
        {
            printf("\ndraw_indexed_instanced(%u, %u, %u, %d, %u);",
                   args.IndexCountPerInstance,
                   args.InstanceCount,
                   args.StartIndexLocation,
                   args.BaseVertexLocation,
                   args.StartInstanceLocation);
            return true;
        }

        bool operator()(const D3D12_DISPATCH_ARGUMENTS& args)
        {
            printf("\ndispatch(%u, %u, %u);", args.ThreadGroupCountX, args.ThreadGroupCountY, args.ThreadGroupCountZ);
            return true;
        }

        bool operator()(const D3D12_DISPATCH_MESH_ARGUMENTS& args)
        {
            printf(
                "\ndispatch_mesh(%u, %u, %u);", args.ThreadGroupCountX, args.ThreadGroupCountY, args.ThreadGroupCountZ);
            return true;
        }

        bool operator()(const D3D12_DISPATCH_RAYS_DESC& args)
        {
            printf("\ndispatch_rays(%u, %u, %u);", args.Width, args.Height, args.Depth);
            return true;
        }

        bool operator()(const RenderPass& args)
        {
            for (auto actions : args.cmd_actions_)
            {
                std::visit(*this, actions->action_);
            }
            return true;
        }

        bool operator()(const D3D12ExecuteIndirectArgs& args)
        {
            printf("\nexecute_indirect(%u, %" PRIu64 ", %" PRIu64 ");",
                   args.MaxCommandCount,
                   args.ArgumentBufferOffset,
                   args.CountBufferOffset);
            return true;
        }

        bool operator()(const D3D12CopyResourceArgs& args)
        {
            printf("\ncopy_resource(%" PRIu64 ", %" PRIu64 ");", args.dst, args.src);
            return true;
        }

        bool operator()(const D3D12CopyBufferRegionArgs& args)
        {
            printf("\ncopy_buffer_region(%" PRIu64 ", %" PRIu64 ", %" PRIu64 ", %" PRIu64 ", %" PRIu64 ");",
                   args.pDstBuffer,
                   args.DstOffset,
                   args.pSrcBuffer,
                   args.SrcOffset,
                   args.NumBytes);

            return true;
        }

        bool operator()(const D3D12CopyTextureRegionArgs& args)
        {
            printf("\ncopy_texture_region(%" PRIu64 ", %u, %u, %u, %" PRIu64 ", %p);",
                   args.pDstRef.resource_id,
                   args.DstX,
                   args.DstY,
                   args.DstZ,
                   args.pSrcRef.resource_id,
                   args.pSrcBox);
            return true;
        }

        bool operator()(const D3D12ClearRtvArgs& args)
        {
            printf("\nclear_rtv(%" PRIu64 ", %f, %f, %f, %f);", //[%u]
                   args.RenderTargetView.resource_id,
                   // std::get<D3D12_RENDER_TARGET_VIEW_DESC>(args.RenderTargetView.desc),
                   args.ColorRGBA[0],
                   args.ColorRGBA[1],
                   args.ColorRGBA[2],
                   args.ColorRGBA[3]);
            return true;
        }

        bool operator()(const D3D12ClearDsvArgs& args)
        {
            printf("\nclear_dsv(%" PRIu64 ", %f, %u, %u);", //[%u]
                   args.DepthStencilView.resource_id,
                   // args.DepthStencilView.index,
                   args.Depth,
                   args.Stencil,
                   args.ClearFlags);
            return true;
        }

        bool operator()(const D3D12ClearUavUIntArgs& args)
        {
            printf("\nclear_uav_uint(%" PRIu64 ", %u, %u, %u, %u);", //[%u]
                   args.ViewCPUHandle.resource_id,
                   // args.ViewCPUHandle.index,
                   args.Values[0],
                   args.Values[1],
                   args.Values[2],
                   args.Values[3]);
            return true;
        }

        bool operator()(const D3D12ClearUavFloatArgs& args)
        {
            printf("\nclear_uav_float(%" PRIu64 ", %f, %f, %f, %f);", //[%u]
                   args.ViewCPUHandle.resource_id,
                   // args.ViewCPUHandle.index,
                   args.Values[0],
                   args.Values[1],
                   args.Values[2],
                   args.Values[3]);
            return true;
        }
    };

    struct ResourceRefCollector
    {
        Dx12GraphExportConsumer* consumer;
        ArenaVector<ResourceRef> resources;
        CmdAction*               curr_action;

        void Process(CmdAction* action)
        {
            curr_action = action;

            GatherResourceRef();

            // TODO: Avoid copy
            action->resource_refs_ = consumer->capture_.frame_arena_.NewArray<ResourceRef>(resources.size());
            std::copy(resources.begin(), resources.end(), action->resource_refs_.begin());

            curr_action = nullptr;
        }

        void GatherResourceRef()
        {
            if (curr_action->pipeline_snapshot_.gfx)
            {
                GatherGfxResourceRef();
            }
            else if (curr_action->pipeline_snapshot_.compute)
            {
                GatherRootBindings(curr_action->pipeline_snapshot_.compute->root_param_bindings);
            }
            else
            {
                std::visit(*this, curr_action->action_);
            }
        }

        bool operator()(const D3D12CopyResourceArgs& args)
        {
            resources.push_back(ResourceRef{
                args.src, GetResourceFullSubresource(args.src), rps::AccessAttr(RPS_ACCESS_COPY_SRC_BIT) });
            resources.push_back(
                ResourceRef{ args.dst,
                             GetResourceFullSubresource(args.dst),
                             rps::AccessAttr(RPS_ACCESS_COPY_DEST_BIT | RPS_ACCESS_DISCARD_DATA_BEFORE_BIT) });

            return true;
        }

        bool operator()(const D3D12CopyBufferRegionArgs& args)
        {
            resources.push_back(
                ResourceRef{ args.pSrcBuffer, rps::SubresourceRange{}, rps::AccessAttr(RPS_ACCESS_COPY_SRC_BIT) });
            resources.push_back(
                ResourceRef{ args.pDstBuffer, rps::SubresourceRange{}, rps::AccessAttr(RPS_ACCESS_COPY_DEST_BIT) });

            return true;
        }

        bool operator()(const D3D12CopyTextureRegionArgs& args)
        {
            resources.push_back(args.pDstRef);
            resources.push_back(args.pSrcRef);

            return true;
        }

        template<typename T>
        bool operator()(const T& args)
        {
            return false;
        }

        rps::SubresourceRange GetResourceFullSubresource(format::HandleId res_hdl)
        {
            auto replay_consumer = consumer->GetReplayConsumer();
            auto res             = replay_consumer->MapObjectPublic<ID3D12Resource>(res_hdl);

            auto desc = res->GetDesc();

            if (desc.Dimension == D3D12_RESOURCE_DIMENSION_BUFFER)
            {
                return rps::SubresourceRange{};
            }
            else if (desc.Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D)
            {
                return rps::SubresourceRange{ 0, desc.MipLevels };
            }

            return rps::SubresourceRange{ 0, desc.MipLevels, 0, desc.DepthOrArraySize };
        }

        void GatherGfxResourceRef()
        {
            auto gfx = curr_action->pipeline_snapshot_.gfx;
            assert(gfx);

            auto pso = curr_action->pipeline_snapshot_.pso;
            assert(pso);

            if (gfx->om)
            {
                GatherGfxDsvRef();
                GatherGfxRtvRef();
            }

            GatherRootBindings(gfx->root_param_bindings);

            if (gfx->rs)
            {
                if (gfx->rs->vrs_shading_rate != 0)
                {
                    ResourceRef ref        = {};
                    ref.resource_id        = gfx->rs->vrs_shading_rate;
                    ref.access.accessFlags = RPS_ACCESS_SHADING_RATE_BIT;
                    resources.push_back(ref);
                }
            }

            if (gfx->ia)
            {
                ResourceRef ref        = {};
                ref.resource_id        = gfx->ia->ib.buf.buf;
                ref.access.accessFlags = RPS_ACCESS_INDEX_BUFFER_BIT;

                resources.push_back(ref);

                for (uint32_t i = 0; i < gfx->ia->vbs.size(); i++)
                {
                    if ((1u << i) & pso->active_vb_slot_mask)
                    {
                        ref.resource_id        = gfx->ia->vbs[i].buf.buf;
                        ref.access.accessFlags = RPS_ACCESS_VERTEX_BUFFER_BIT;
                        resources.push_back(ref);
                    }
                }
            }
        }

        void GatherGfxDsvRef()
        {
            auto gfx = curr_action->pipeline_snapshot_.gfx;
            auto pso = curr_action->pipeline_snapshot_.pso;

            const auto& ds = pso->depth_stencil1;
            if ((ds.DepthEnable) || (ds.StencilEnable))
            {
                auto dsv = gfx->om->dsv;

                const auto& dsv_desc = dsv;

                if (std::holds_alternative<NullDescriptor>(dsv_desc.desc))
                {
                    return;
                }

                RpsAccessFlags accessFlags = 0;

                if (ds.DepthEnable)
                {
                    const bool readonly_depth = (ds.DepthWriteMask == 0);

                    accessFlags |= readonly_depth ? RPS_ACCESS_DEPTH_READ_BIT : RPS_ACCESS_DEPTH_WRITE_BIT;
                }

                if (ds.StencilEnable)
                {
                    bool readonly_stencil =
                        ((ds.StencilWriteMask == 0) || ((ds.FrontFace.StencilDepthFailOp == D3D12_STENCIL_OP_KEEP) &&
                                                        (ds.FrontFace.StencilFailOp == D3D12_STENCIL_OP_KEEP) &&
                                                        (ds.FrontFace.StencilPassOp == D3D12_STENCIL_OP_KEEP) &&
                                                        (ds.BackFace.StencilDepthFailOp == D3D12_STENCIL_OP_KEEP) &&
                                                        (ds.BackFace.StencilFailOp == D3D12_STENCIL_OP_KEEP) &&
                                                        (ds.BackFace.StencilPassOp == D3D12_STENCIL_OP_KEEP)));

                    accessFlags |= readonly_stencil ? RPS_ACCESS_STENCIL_READ_BIT : RPS_ACCESS_STENCIL_WRITE_BIT;
                }

                ResourceRef ref        = {};
                ref.access.accessFlags = accessFlags;
                ref.range = GetSubresourceRangeFromViewDesc(std::get<D3D12_DEPTH_STENCIL_VIEW_DESC>(dsv_desc.desc));
                ref.resource_id = dsv_desc.resource_id;
                resources.push_back(ref);
            }
        }

        void GatherGfxRtvRef()
        {
            auto gfx = curr_action->pipeline_snapshot_.gfx;
            auto pso = curr_action->pipeline_snapshot_.pso;

            const auto& rtvs = gfx->om->rtvs;

            if (pso->active_rtv_slot_mask != 0)
            {
                ResourceRef ref        = {};
                ref.access.accessFlags = RPS_ACCESS_RENDER_TARGET_BIT;

                for (uint32_t slot = 0; slot < rtvs.size(); slot++)
                {
                    if ((1u << slot) & pso->active_rtv_slot_mask)
                    {
                        ref.range =
                            GetSubresourceRangeFromViewDesc(std::get<D3D12_RENDER_TARGET_VIEW_DESC>(rtvs[slot].desc));
                        ref.resource_id = rtvs[slot].resource_id;
                        resources.push_back(ref);
                    }
                }
            }
        }

        void GatherRootBindings(const RootParamBindings& root_param_bindings)
        {
            auto pso = curr_action->pipeline_snapshot_.pso;

            if (root_param_bindings.root_sig)
            {
                auto root_signature = root_param_bindings.root_sig;

                for (auto& binding : pso->shader_res_bindings)
                {
                    if (binding.BindCount == UINT32_MAX)
                    {
                        assert(false && "Bindless not supported.");
                        continue;
                    }

                    for (uint32_t iBindIdx = 0; iBindIdx < binding.BindCount; iBindIdx++)
                    {
                        auto bindingIndices = FindRootParamIndex(root_signature, binding, iBindIdx);

                        if (bindingIndices.rootParamIdx != UINT32_MAX)
                        {
                            const auto& rootParamDesc = root_signature->desc.pParameters[bindingIndices.rootParamIdx];
                            const auto* rootParamBinding = root_param_bindings.GetRootParam(bindingIndices.rootParamIdx);

                            assert((GetShaderStageFlagsFromVisibility(rootParamDesc.ShaderVisibility) &
                                    binding.ShaderStageMask) == binding.ShaderStageMask);

                            if (rootParamDesc.ParameterType == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)
                            {
                                const auto& hdl = std::get<D3D12_GPU_DESCRIPTOR_HANDLE>(rootParamBinding->data);

                                const auto descriptor_ref = consumer->MapGpuDescriptor(hdl);

                                const auto descriptor_info = consumer->GetDescriptorFromHeap(descriptor_ref);

                                if (std::holds_alternative<NullDescriptor>(descriptor_info.desc))
                                {
                                    continue;
                                }

                                ResourceRef ref        = {};
                                ref.resource_id = descriptor_info.resource_id;

                                const auto reg_type = GetRegTypeFromSIT(binding.Type);

                                switch (reg_type)
                                {
                                    case 'b':
                                        ref.access.accessFlags = RPS_ACCESS_CONSTANT_BUFFER_BIT;
                                        ref.range              = rps::SubresourceRange();
                                        break;
                                    case 't':
                                        ref.access.accessFlags = RPS_ACCESS_SHADER_RESOURCE_BIT;
                                        ref.range              = GetSubresourceRangeFromViewDesc(
                                            std::get<D3D12_SHADER_RESOURCE_VIEW_DESC>(descriptor_info.desc));
                                        break;
                                    case 'u':
                                        ref.access.accessFlags = RPS_ACCESS_UNORDERED_ACCESS_BIT;
                                        ref.range              = GetSubresourceRangeFromViewDesc(
                                            std::get<D3D12_UNORDERED_ACCESS_VIEW_DESC>(descriptor_info.desc));
                                        break;
                                    default:
                                        assert(false && "Unexpected register type!");
                                        break;
                                }

                                resources.push_back(ref);
                            }
                            else if (rootParamDesc.ParameterType != D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS)
                            {
                                const auto& bufferView = std::get<BufferView>(rootParamBinding->data);

                                ResourceRef ref = {};
                                ref.resource_id = bufferView.buf;

                                switch (rootParamDesc.ParameterType)
                                {
                                    case D3D12_ROOT_PARAMETER_TYPE_CBV:
                                        ref.access.accessFlags = RPS_ACCESS_CONSTANT_BUFFER_BIT;
                                        break;
                                    case D3D12_ROOT_PARAMETER_TYPE_SRV:
                                        ref.access.accessFlags = RPS_ACCESS_SHADER_RESOURCE_BIT;
                                        break;
                                    case D3D12_ROOT_PARAMETER_TYPE_UAV:
                                        ref.access.accessFlags = RPS_ACCESS_UNORDERED_ACCESS_BIT;
                                        break;
                                    default:
                                        assert(false && "Unexpected root parameter type!");
                                        break;
                                }

                                resources.push_back(ref);
                            }
                        }
                        else
                        {
                            assert(false && "Binding not found!");
                        }
                    }
                }
            }
        }

        struct RootParamBindingIndices
        {
            uint32_t rootParamIdx;
            uint32_t tableIndex;
        };

        RootParamBindingIndices FindRootParamIndex(const RootSignatureInfo*            root_signature,
                                                   const PsoInfo::ResourceBindingDesc& binding,
                                                   uint32_t                            bindingIdx)
        {
            const uint32_t bindPoint   = binding.BindPoint + bindingIdx;
            const auto     bindRegType = GetRegTypeFromSIT(binding.Type);

            // TODO Cache previous iteration results
            for (uint32_t iParam = 0; iParam < root_signature->desc.NumParameters; iParam++)
            {
                const auto& paramDesc = root_signature->desc.pParameters[iParam];

                if (!(GetShaderStageFlagsFromVisibility(paramDesc.ShaderVisibility) & binding.ShaderStageMask))
                {
                    continue;
                }

                if (paramDesc.ParameterType == D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS)
                {
                    continue;
                }
                else if ((paramDesc.ParameterType == D3D12_ROOT_PARAMETER_TYPE_SRV) ||
                         (paramDesc.ParameterType == D3D12_ROOT_PARAMETER_TYPE_UAV) ||
                         (paramDesc.ParameterType == D3D12_ROOT_PARAMETER_TYPE_CBV))
                {
                    if (paramDesc.Descriptor.RegisterSpace != binding.Space)
                        continue;

                    if (GetRegTypeFromRootParamType(paramDesc.ParameterType) != bindRegType)
                        continue;

                    if (paramDesc.Descriptor.ShaderRegister == bindPoint)
                        return RootParamBindingIndices{ iParam, 0 };
                }
                else if (paramDesc.ParameterType == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)
                {
                    uint32_t rangeOffset = 0;

                    for (uint32_t iRange = 0; iRange < paramDesc.DescriptorTable.NumDescriptorRanges; iRange++)
                    {
                        const auto& range = paramDesc.DescriptorTable.pDescriptorRanges[iRange];

                        if (range.RegisterSpace != binding.Space)
                            continue;

                        if (GetRegTypeFromDescriptorRangeType(range.RangeType) != bindRegType)
                            continue;

                        if ((bindPoint >= range.BaseShaderRegister) &&
                            (bindPoint < (range.BaseShaderRegister + range.NumDescriptors)))
                            return RootParamBindingIndices{ iParam,
                                                            rangeOffset + (bindPoint - range.BaseShaderRegister) };
                    }
                }
            }

            return RootParamBindingIndices{ UINT32_MAX, UINT32_MAX };
        }

        char GetRegTypeFromRootParamType(D3D12_ROOT_PARAMETER_TYPE type)
        {
            switch (type)
            {
                case D3D12_ROOT_PARAMETER_TYPE_SRV: return 't';
                case D3D12_ROOT_PARAMETER_TYPE_UAV: return 'u';
                case D3D12_ROOT_PARAMETER_TYPE_CBV: return 'b';
            }
            return 0;
        }

        char GetRegTypeFromDescriptorRangeType(D3D12_DESCRIPTOR_RANGE_TYPE type)
        {
            switch (type)
            {
                case D3D12_DESCRIPTOR_RANGE_TYPE_SRV: return 't';
                case D3D12_DESCRIPTOR_RANGE_TYPE_UAV: return 'u';
                case D3D12_DESCRIPTOR_RANGE_TYPE_CBV: return 'b';
                case D3D12_DESCRIPTOR_RANGE_TYPE_SAMPLER: return 's';
            }
            return 0;
        }

        char GetRegTypeFromSIT(D3D_SHADER_INPUT_TYPE sit)
        {
            switch (sit)
            {
                case D3D_SIT_CBUFFER:
                    return 'b';
                case D3D_SIT_TBUFFER:
                case D3D_SIT_TEXTURE:
                case D3D_SIT_STRUCTURED:
                case D3D_SIT_BYTEADDRESS:
                case D3D_SIT_RTACCELERATIONSTRUCTURE:
                    return 't';
                case D3D_SIT_SAMPLER:
                    return 's';
                case D3D_SIT_UAV_RWTYPED:
                case D3D_SIT_UAV_RWSTRUCTURED:
                case D3D_SIT_UAV_RWBYTEADDRESS:
                case D3D_SIT_UAV_APPEND_STRUCTURED:
                case D3D_SIT_UAV_CONSUME_STRUCTURED:
                case D3D_SIT_UAV_RWSTRUCTURED_WITH_COUNTER:
                case D3D_SIT_UAV_FEEDBACKTEXTURE:
                    return 'u';
            }

            assert(false);
            return 0;
        }

        RpsShaderStageFlags GetShaderStageFlagsFromVisibility(D3D12_SHADER_VISIBILITY vis)
        {
            switch (vis)
            {
                case D3D12_SHADER_VISIBILITY_VERTEX:
                    return RPS_SHADER_STAGE_VS;
                case D3D12_SHADER_VISIBILITY_HULL:
                    return RPS_SHADER_STAGE_HS;
                case D3D12_SHADER_VISIBILITY_DOMAIN:
                    return RPS_SHADER_STAGE_DS;
                case D3D12_SHADER_VISIBILITY_GEOMETRY:
                    return RPS_SHADER_STAGE_GS;
                case D3D12_SHADER_VISIBILITY_PIXEL:
                    return RPS_SHADER_STAGE_PS;
                case D3D12_SHADER_VISIBILITY_AMPLIFICATION:
                    return RPS_SHADER_STAGE_AS;
                case D3D12_SHADER_VISIBILITY_MESH:
                    return RPS_SHADER_STAGE_MS;
                case D3D12_SHADER_VISIBILITY_ALL:
                default:
                    break;
            }
            return RPS_SHADER_STAGE_ALL;
        }
    };

    template<typename T>
    ArrayRef<T> NewArray(Arena& arena, const T* pData, uint32_t count)
    {
        auto result = count ? arena.NewArray<T>(count) : ArrayRef<T>{};
        std::copy(pData, pData + count, result.begin());
        return result;
    }

  private:
    std::unordered_map<format::HandleId, std::unique_ptr<CmdQueue>> cmd_queues_;
    std::unordered_map<format::HandleId, std::unique_ptr<CmdList>>  cmd_lists_;

    std::atomic_uint32_t submission_sequence_;

    std::pair<format::HandleId, CmdList*> cached_last_cmd_list_ = {};

    std::unordered_map<format::HandleId, std::unique_ptr<RootSignatureInfo>>  root_signatures_;
    std::unordered_map<format::HandleId, std::unique_ptr<PsoInfo>>            pso_states_;

    using DescriptorHeapInfoMap = std::unordered_map<format::HandleId, std::unique_ptr<DescriptorHeapInfo>>;
    DescriptorHeapInfoMap descriptor_heaps_;
    std::vector<const DescriptorHeapInfo*> sorted_gpu_descriptor_heaps_;

    std::unordered_map<format::HandleId, format::HandleId> swapchain_queue_map_;

    ID3D12Device* d3d_device_ = nullptr;

    GraphCapture capture_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // DX12_GRAPH_EXPORT_CONSUMER_H
