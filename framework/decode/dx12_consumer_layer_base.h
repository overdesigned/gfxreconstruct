/*
** Copyright (c) 2021-2022 LunarG, Inc.
** Copyright (c) 2021-2022 Advanced Micro Devices, Inc. All rights reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#ifndef GFXRECON_DECODE_DX12_CONSUMER_LAYER_BASE_H
#define GFXRECON_DECODE_DX12_CONSUMER_LAYER_BASE_H

#include "decode/custom_dx12_struct_decoders_forward.h"
#include "decode/dx_replay_options.h"
#include "decode/dx12_acceleration_structure_builder.h"
#include "decode/dx12_object_info.h"
#include "decode/dx12_object_mapping_util.h"
#include "decode/dx12_resource_value_mapper.h"
#include "decode/window.h"
#include "format/format.h"
#include "generated/generated_dx12_consumer.h"
#include "graphics/dx12_gpu_va_map.h"
#include "graphics/dx12_resource_data_util.h"
#include "graphics/dx12_image_renderer.h"
#include "decode/screenshot_handler_base.h"
#include "graphics/fps_info.h"
#include "graphics/dx12_util.h"
#include "application/application.h"

#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <dxgidebug.h>

#include <wrl/client.h>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class Dx12LayerConsumerBase : public Dx12Consumer
{
  public:
    Dx12LayerConsumerBase(std::shared_ptr<application::Application> application, const DxReplayOptions& options);

    virtual ~Dx12LayerConsumerBase() override {}

#define DX12_LAYER_CONSUMER_BASE_PROCESS_CALL_NEXT_LAYER(MethodName, Params, Args) \
    virtual void Process_##MethodName Params override                              \
    {                                                                              \
        if (ShouldCallNextLayer())                                                 \
        {                                                                          \
            GetNextLayer()->Process_##MethodName Args;                             \
        }                                                                          \
    }

    virtual void Process_DriverInfo(const char* info_record) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->Process_DriverInfo(info_record);
        }
    }

    virtual void Process_ExeFileInfo(util::filepath::FileInfo& info_record) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->Process_ExeFileInfo(info_record);
        }
    }

    virtual bool IsComplete(uint64_t block_index) override { return false; }

    virtual void ProcessStateBeginMarker(uint64_t frame_number) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessStateBeginMarker(frame_number);
        }
    }

    virtual void ProcessStateEndMarker(uint64_t frame_number) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessStateEndMarker(frame_number);
        }
    }

    virtual void ProcessDisplayMessageCommand(const std::string& message) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessDisplayMessageCommand(message);
        }
    }

    virtual void
    ProcessFillMemoryCommand(uint64_t memory_id, uint64_t offset, uint64_t size, const uint8_t* data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessFillMemoryCommand(memory_id, offset, size, data);
        }
    }

    virtual void
    ProcessFillMemoryResourceValueCommand(const format::FillMemoryResourceValueCommandHeader& command_header,
                                          const uint8_t*                                      data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessFillMemoryResourceValueCommand(command_header, data);
        }
    }

    virtual void ProcessResizeWindowCommand(format::HandleId surface_id, uint32_t width, uint32_t height) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessResizeWindowCommand(surface_id, width, height);
        }
    }

    virtual void ProcessResizeWindowCommand2(format::HandleId surface_id,
                                             uint32_t         width,
                                             uint32_t         height,
                                             uint32_t         pre_transform) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessResizeWindowCommand2(surface_id, width, height, pre_transform);
        }
    }

    virtual void
    ProcessCreateHardwareBufferCommand(format::HandleId                                    memory_id,
                                       uint64_t                                            buffer_id,
                                       uint32_t                                            format,
                                       uint32_t                                            width,
                                       uint32_t                                            height,
                                       uint32_t                                            stride,
                                       uint64_t                                            usage,
                                       uint32_t                                            layers,
                                       const std::vector<format::HardwareBufferPlaneInfo>& plane_info) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessCreateHardwareBufferCommand(
                memory_id, buffer_id, format, width, height, stride, usage, layers, plane_info);
        }
    }

    virtual void ProcessDestroyHardwareBufferCommand(uint64_t buffer_id) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessDestroyHardwareBufferCommand(buffer_id);
        }
    }

    virtual void ProcessCreateHeapAllocationCommand(uint64_t allocation_id, uint64_t allocation_size) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessCreateHeapAllocationCommand(allocation_id, allocation_size);
        }
    }

    virtual void ProcessSetDevicePropertiesCommand(format::HandleId   physical_device_id,
                                                   uint32_t           api_version,
                                                   uint32_t           driver_version,
                                                   uint32_t           vendor_id,
                                                   uint32_t           device_id,
                                                   uint32_t           device_type,
                                                   const uint8_t      pipeline_cache_uuid[format::kUuidSize],
                                                   const std::string& device_name) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessSetDevicePropertiesCommand(physical_device_id,
                                                              api_version,
                                                              driver_version,
                                                              vendor_id,
                                                              device_id,
                                                              device_type,
                                                              pipeline_cache_uuid,
                                                              device_name);
        }
    }

    virtual void
    ProcessSetDeviceMemoryPropertiesCommand(format::HandleId                             physical_device_id,
                                            const std::vector<format::DeviceMemoryType>& memory_types,
                                            const std::vector<format::DeviceMemoryHeap>& memory_heaps) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessSetDeviceMemoryPropertiesCommand(physical_device_id, memory_types, memory_heaps);
        }
    }

    virtual void
    ProcessSetOpaqueAddressCommand(format::HandleId device_id, format::HandleId object_id, uint64_t address) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessSetOpaqueAddressCommand(device_id, object_id, address);
        }
    }

    virtual void ProcessSetRayTracingShaderGroupHandlesCommand(format::HandleId device_id,
                                                               format::HandleId pipeline_id,
                                                               size_t           data_size,
                                                               const uint8_t*   data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessSetRayTracingShaderGroupHandlesCommand(device_id, pipeline_id, data_size, data);
        }
    }

    virtual void
    ProcessSetSwapchainImageStateCommand(format::HandleId                                    device_id,
                                         format::HandleId                                    swapchain_id,
                                         uint32_t                                            current_buffer_index,
                                         const std::vector<format::SwapchainImageStateInfo>& image_state) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessSetSwapchainImageStateCommand(
                device_id, swapchain_id, current_buffer_index, image_state);
        }
    }

    virtual void ProcessBeginResourceInitCommand(format::HandleId device_id,
                                                 uint64_t         max_resource_size,
                                                 uint64_t         max_copy_size) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessBeginResourceInitCommand(device_id, max_resource_size, max_copy_size);
        }
    }

    virtual void ProcessEndResourceInitCommand(format::HandleId device_id) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessEndResourceInitCommand(device_id);
        }
    }

    virtual void ProcessInitBufferCommand(format::HandleId device_id,
                                          format::HandleId buffer_id,
                                          uint64_t         data_size,
                                          const uint8_t*   data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessInitBufferCommand(device_id, buffer_id, data_size, data);
        }
    }

    virtual void ProcessInitImageCommand(format::HandleId             device_id,
                                         format::HandleId             image_id,
                                         uint64_t                     data_size,
                                         uint32_t                     aspect,
                                         uint32_t                     layout,
                                         const std::vector<uint64_t>& level_sizes,
                                         const uint8_t*               data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessInitImageCommand(device_id, image_id, data_size, aspect, layout, level_sizes, data);
        }
    }

    virtual void ProcessInitSubresourceCommand(const format::InitSubresourceCommandHeader& command_header,
                                               const uint8_t*                              data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessInitSubresourceCommand(command_header, data);
        }
    }

    virtual void ProcessInitDx12AccelerationStructureCommand(
        const format::InitDx12AccelerationStructureCommandHeader&       command_header,
        std::vector<format::InitDx12AccelerationStructureGeometryDesc>& geometry_descs,
        const uint8_t*                                                  build_inputs_data) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessInitDx12AccelerationStructureCommand(
                command_header, geometry_descs, build_inputs_data);
        }
    }

    virtual void ProcessDxgiAdapterInfo(const format::DxgiAdapterInfoCommandHeader& adapter_info_header) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessDxgiAdapterInfo(adapter_info_header);
        }
    }

    virtual void ProcessDx12RuntimeInfo(const format::Dx12RuntimeInfoCommandHeader& runtime_info_header) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->ProcessDx12RuntimeInfo(runtime_info_header);
        }
    }

    virtual void Process_ID3D12Device_CheckFeatureSupport(format::HandleId object_id,
                                                          HRESULT          original_result,
                                                          D3D12_FEATURE    feature,
                                                          const void*      capture_feature_data,
                                                          void*            replay_feature_data,
                                                          UINT             feature_data_size) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->Process_ID3D12Device_CheckFeatureSupport(
                object_id, original_result, feature, capture_feature_data, replay_feature_data, feature_data_size);
        }
    }

    virtual void Process_IDXGIFactory5_CheckFeatureSupport(format::HandleId object_id,
                                                           HRESULT          original_result,
                                                           DXGI_FEATURE     feature,
                                                           const void*      capture_feature_data,
                                                           void*            replay_feature_data,
                                                           UINT             feature_data_size) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->Process_IDXGIFactory5_CheckFeatureSupport(
                object_id, original_result, feature, capture_feature_data, replay_feature_data, feature_data_size);
        }
    }

    virtual void Process_ID3D12Resource_WriteToSubresource(format::HandleId                         object_id,
                                                           HRESULT                                  original_result,
                                                           UINT                                     DstSubresource,
                                                           StructPointerDecoder<Decoded_D3D12_BOX>* pDstBox,
                                                           void*                                    pSrcData,
                                                           UINT                                     SrcRowPitch,
                                                           UINT SrcDepthPitch) override
    {
        if (ShouldCallNextLayer())
        {
            GetNextLayer()->Process_ID3D12Resource_WriteToSubresource(
                object_id, original_result, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
        }
    }

    void SetFatalErrorHandler(std::function<void(const char*)> handler) { fatal_error_handler_ = handler; }

    void          SetNextLayer(Dx12Consumer* next_layer) { next_layer_ = next_layer; }
    Dx12Consumer* GetNextLayer() const { return next_layer_; }

  protected:
    bool ShouldCallNextLayer(bool reset_skip_flag = true)
    {
        bool result      = !skip_next_layer_ && (GetNextLayer() != nullptr);
        skip_next_layer_ = reset_skip_flag ? false : skip_next_layer_;
        return result;
    }

  private:
    std::shared_ptr<application::Application>             application_;
    DxReplayOptions                                       options_;
    Dx12Consumer*                                         next_layer_{ nullptr };
    std::function<void(const char*)>                      fatal_error_handler_;
    graphics::FpsInfo*                                    fps_info_;
    bool                                                  skip_next_layer_{ false };
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_DX12_CONSUMER_LAYER_BASE_H
