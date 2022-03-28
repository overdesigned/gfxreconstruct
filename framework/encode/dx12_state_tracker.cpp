/*
** Copyright (c) 2021 LunarG, Inc.
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

#include "encode/dx12_state_tracker.h"

#include "encode/custom_dx12_struct_unwrappers.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

Dx12StateTracker::Dx12StateTracker() {}

Dx12StateTracker::~Dx12StateTracker() {}

void Dx12StateTracker::WriteState(Dx12StateWriter* writer, uint64_t frame_number)
{
    if (writer != nullptr)
    {
        std::unique_lock<std::mutex> lock(state_table_mutex_);
        writer->WriteState(state_table_, frame_number);
    }
}

void Dx12StateTracker::TrackOpenExistingHeapFromAddress(void** heap, const void* address)
{
    assert((heap != nullptr) && ((*heap) != nullptr) && (address != nullptr));

    auto heap_wrapper = reinterpret_cast<ID3D12Heap_Wrapper*>(*heap);
    auto info         = heap_wrapper->GetObjectInfo();
    assert(info != nullptr);
    info->open_existing_address = address;
}

void Dx12StateTracker::TrackFenceSetEventOnCompletion(ID3D12Fence_Wrapper* fence_wrapper, UINT64 value, HANDLE event)
{
    assert(fence_wrapper != nullptr);
    assert(fence_wrapper->GetWrappedObject() != nullptr);
    assert(fence_wrapper->GetObjectInfo() != nullptr);

    auto fence      = fence_wrapper->GetWrappedObjectAs<ID3D12Fence>();
    auto fence_info = fence_wrapper->GetObjectInfo();

    auto lock = std::unique_lock<std::mutex>(fence_info->pending_events_mutex);
    fence_info->pending_events[value].push_back(event);
}

void Dx12StateTracker::TrackFenceSignal(ID3D12Fence_Wrapper* fence_wrapper, UINT64 value)
{
    assert(fence_wrapper != nullptr);
    assert(fence_wrapper->GetWrappedObject() != nullptr);
    assert(fence_wrapper->GetObjectInfo() != nullptr);

    auto fence      = fence_wrapper->GetWrappedObjectAs<ID3D12Fence>();
    auto fence_info = fence_wrapper->GetObjectInfo();

    // Remove any events that were waiting for a signal value <= the signaled value.
    auto lock = std::unique_lock<std::mutex>(fence_info->pending_events_mutex);
    for (auto iter = fence_info->pending_events.cbegin(); iter != fence_info->pending_events.cend();)
    {
        if (iter->first <= value)
        {
            fence_info->pending_events.erase(iter++);
        }
        else
        {
            ++iter;
        }
    }
}

void Dx12StateTracker::TrackCommandExecution(ID3D12GraphicsCommandList_Wrapper* list_wrapper,
                                             format::ApiCallId                  call_id,
                                             const util::MemoryOutputStream*    parameter_buffer)
{
    if (list_wrapper == nullptr)
    {
        return;
    }

    assert(list_wrapper->GetWrappedObject() != nullptr);
    assert(list_wrapper->GetObjectInfo() != nullptr);

    auto list_info = list_wrapper->GetObjectInfo();

    if (call_id == format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Reset)
    {
        list_info->was_reset = true;
        list_info->is_closed = false;

        // Clear command data on command buffer reset.
        list_info->command_data.Reset();

        // Clear pending resource transitions.
        list_info->transition_barriers.clear();

        list_info->command_cpu_descriptor_handles.clear();
        list_info->command_gpu_descriptor_handles.clear();
        list_info->command_gpu_virtual_addresses.clear();

        for (size_t i = 0; i < D3D12GraphicsCommandObjectType::NumObjectTypes; ++i)
        {
            list_info->command_objects[i].clear();
        }

        // Clear pending acceleration structure builds.
        list_info->acceleration_structure_builds.clear();
    }

    if (call_id == format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Close)
    {
        list_info->is_closed = true;
    }

    // Append the command data.
    size_t size = parameter_buffer->GetDataSize();
    list_info->command_data.Write(&size, sizeof(size));
    list_info->command_data.Write(&call_id, sizeof(call_id));
    list_info->command_data.Write(parameter_buffer->GetData(), size);
}

void Dx12StateTracker::TrackCommand(ID3D12GraphicsCommandList_Wrapper* list_wrapper,
                                    format::ApiCallId                  call_id,
                                    const util::MemoryOutputStream*    parameter_buffer)
{
    if (list_wrapper != nullptr)
    {
        TrackCommandExecution(list_wrapper, call_id, parameter_buffer);
    }
}

void Dx12StateTracker::TrackResourceBarriers(ID3D12GraphicsCommandList_Wrapper* list_wrapper,
                                             UINT                               num_barriers,
                                             const D3D12_RESOURCE_BARRIER*      barriers)
{
    for (UINT i = 0; i < num_barriers; ++i)
    {
        // Save the transition barrier information with the command list to be applied to the resource when the command
        // list is executed.
        const auto& barrier = barriers[i];
        if (barrier.Type == D3D12_RESOURCE_BARRIER_TYPE_TRANSITION)
        {
            DxTransitionBarrier transition;
            transition.resource_wrapper = reinterpret_cast<ID3D12Resource_Wrapper*>(barrier.Transition.pResource);
            transition.subresource      = barrier.Transition.Subresource;
            transition.state_before     = barrier.Transition.StateBefore;
            transition.state_after      = barrier.Transition.StateAfter;
            transition.barrier_flags    = barrier.Flags;
            list_wrapper->GetObjectInfo()->transition_barriers.push_back(transition);
        }
    }
}

void Dx12StateTracker::TrackExecuteCommandLists(ID3D12CommandQueue_Wrapper* queue_wrapper,
                                                UINT                        num_lists,
                                                ID3D12CommandList* const*   lists)
{
    for (UINT i = 0; i < num_lists; ++i)
    {
        auto list_wrapper = reinterpret_cast<ID3D12GraphicsCommandList_Wrapper*>(lists[i]);
        auto list_info    = list_wrapper->GetObjectInfo();

        // Apply pending resource transitions to tracked resource states.
        for (const auto& transition_barrier : list_info->transition_barriers)
        {
            auto resource_wrapper = transition_barrier.resource_wrapper;
            auto resource_info    = resource_wrapper->GetObjectInfo();

            // TODO (GH #83): Should it be valid for resources to have an empty transitions array?
            if (resource_info->subresource_transitions.empty())
            {
                continue;
            }

            GFXRECON_ASSERT(resource_info->subresource_transitions.size() == resource_info->num_subresources);

            if (transition_barrier.subresource == D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES)
            {
                for (UINT i = 0; i < resource_info->num_subresources; ++i)
                {
                    TrackSubresourceTransitionBarrier(resource_info.get(), transition_barrier, i);
                }
            }
            else
            {
                GFXRECON_ASSERT(transition_barrier.subresource < resource_info->subresource_transitions.size());

                TrackSubresourceTransitionBarrier(
                    resource_info.get(), transition_barrier, transition_barrier.subresource);
            }
        }

        // Add acceleration structure build infos to their destination resources.
        for (const auto& accel_struct_build : list_info->acceleration_structure_builds)
        {
            auto  dest_resource_info = accel_struct_build.destination_resource->GetObjectInfo();
            auto& builds_map         = dest_resource_info->acceleration_structure_builds;
            auto  exact_iter         = builds_map.find(accel_struct_build.dest_gpu_va);
            if (exact_iter != builds_map.end() && exact_iter->second.dest_size == accel_struct_build.dest_size)
            {
                // Replace the existing AS build info if the dest_gpu_va and dest_size match.
                exact_iter->second = accel_struct_build;
            }
            else
            {
                // Find overlapping acceleration structures that were previously built to the destination resource.
                auto lower_iter = builds_map.lower_bound(accel_struct_build.dest_gpu_va);
                auto upper_iter = builds_map.lower_bound(accel_struct_build.dest_gpu_va + accel_struct_build.dest_size);

                // Fixup lower_iter to point to the first map entry that overlaps with accel_struct_build.dest_gpu_va.
                if (lower_iter != builds_map.begin())
                {
                    --lower_iter;
                }
                if ((lower_iter != upper_iter) &&
                    ((lower_iter->second.dest_gpu_va + lower_iter->second.dest_size) <= accel_struct_build.dest_gpu_va))
                {
                    ++lower_iter;
                }

                // Erase entries for AS builds that overlap with the new build.
                builds_map.erase(lower_iter, upper_iter);

                // Add the new build info to the resource.
                builds_map[accel_struct_build.dest_gpu_va] = accel_struct_build;
            }
        }
    }
}

void Dx12StateTracker::TrackResourceCreation(ID3D12Resource_Wrapper* resource_wrapper,
                                             D3D12_RESOURCE_STATES   initial_state,
                                             bool                    swapchain_buffer)
{
    auto resource_info = resource_wrapper->GetObjectInfo();

    resource_info->is_swapchain_buffer = swapchain_buffer;

    // Set all subresources to the initial state.
    resource_info->initial_state = initial_state;
    resource_info->subresource_transitions.reserve(resource_info->num_subresources);
    for (UINT i = 0; i < resource_info->num_subresources; ++i)
    {
        resource_info->subresource_transitions.push_back({ initial_state, D3D12_RESOURCE_BARRIER_FLAG_NONE });
    }
}

void Dx12StateTracker::TrackResourceGpuVa(ID3D12Resource_Wrapper* resource_wrapper, D3D12_GPU_VIRTUAL_ADDRESS address)
{
    GFXRECON_ASSERT(resource_wrapper);
    GFXRECON_ASSERT(address != 0);

    resource_wrapper->GetObjectInfo()->gpu_va = address;
    std::unique_lock<std::mutex> lock(state_table_mutex_);
    state_table_.AddResourceGpuVa(resource_wrapper, address);
}

void Dx12StateTracker::TrackCommandListCreation(ID3D12GraphicsCommandList_Wrapper* list_wrapper, bool created_closed)
{
    auto list_info       = list_wrapper->GetObjectInfo();
    list_info->is_closed = created_closed;
}

void Dx12StateTracker::TrackDescriptorCreation(ID3D12Device_Wrapper*           create_object_wrapper,
                                               format::ApiCallId               call_id,
                                               const util::MemoryOutputStream* parameter_buffer,
                                               DxDescriptorInfo*               descriptor_info)
{
    GFXRECON_ASSERT(descriptor_info != nullptr);

    // Store creation data with descriptor info struct.
    descriptor_info->create_object_id = create_object_wrapper->GetCaptureId();
    descriptor_info->create_call_id   = call_id;
    if (descriptor_info->create_parameters == nullptr)
    {
        descriptor_info->create_parameters =
            std::make_unique<util::MemoryOutputStream>(parameter_buffer->GetData(), parameter_buffer->GetDataSize());
    }
    else
    {
        descriptor_info->create_parameters->Reset();
        descriptor_info->create_parameters->Write(parameter_buffer->GetData(), parameter_buffer->GetDataSize());
    }
    descriptor_info->is_copy         = false;
    descriptor_info->resource_ids    = { format::kNullHandleId, format::kNullHandleId };
    descriptor_info->resource_gpu_va = 0;
}

void Dx12StateTracker::TrackCopyDescriptors(UINT                    num_descriptors,
                                            DxDescriptorInfo*       dest_descriptor_infos,
                                            const DxDescriptorInfo* src_descriptor_infos)
{
    GFXRECON_ASSERT(dest_descriptor_infos != nullptr);
    GFXRECON_ASSERT(src_descriptor_infos != nullptr);

    for (UINT i = 0; i < num_descriptors; ++i)
    {
        auto src = &src_descriptor_infos[i];
        auto dst = &dest_descriptor_infos[i];

        // Copy tracked descriptor state values.
        dst->create_object_id = src->create_object_id;
        dst->create_call_id   = src->create_call_id;
        dst->is_copy          = true;
        dst->resource_ids     = src->resource_ids;
        dst->resource_gpu_va  = src->resource_gpu_va;

        // Create or reset the destination descriptor's create_parameters buffer.
        if (dst->create_parameters == nullptr)
        {
            dst->create_parameters = std::make_unique<util::MemoryOutputStream>();
        }
        else
        {
            dst->create_parameters->Reset();
        }

        // Copy the source descriptor's creation parameters to destination.
        if ((src->create_parameters != nullptr) && (src->create_parameters->GetDataSize() != 0))
        {
            // Compute copy size.
            size_t heap_and_index_size = 0;
            if (!src->is_copy)
            {
                heap_and_index_size = sizeof(DxDescriptorInfo::heap_id) + sizeof(DxDescriptorInfo::index);
            }
            size_t src_size  = src->create_parameters->GetDataSize();
            size_t copy_size = src_size - heap_and_index_size;

            // If the source descriptor is modified asynchronously in another thread, its create_parameters may be
            // invalid. This behavior is not supported by DX12--descriptor creations and copies are free-threaded. Log a
            // warning and prevent the copy from crashing if an unexpected copy size is encountered.
            if ((copy_size == 0) || (copy_size > src_size))
            {
                GFXRECON_LOG_WARNING("The state of the source descriptor (0x%zx) in CopyDescriptors has an unexpected "
                                     "size. Skipping copy to destination descriptor (0x%zx).",
                                     src->cpu_address,
                                     dst->cpu_address);
            }
            else
            {
                dst->create_parameters->Write(src->create_parameters->GetData(), copy_size);

                // Additonal check to detect potential errors in the copy due to asynchronous changes to the source
                // descriptor.
                if ((src->create_parameters->GetDataSize() - heap_and_index_size) !=
                    dst->create_parameters->GetDataSize())
                {
                    GFXRECON_LOG_WARNING(
                        "The state of the source descriptor (0x%zx) may have changed during CopyDescriptors. The state "
                        "of the destination descriptor (0x%zx) may be invalid.",
                        src->cpu_address,
                        dst->cpu_address);
                }
            }
        }
        else
        {
            GFXRECON_LOG_WARNING_ONCE("CopyDescriptors was called with a source descriptor that may not have been "
                                      "initialized (created or copied to).");
        }
    }
}

void Dx12StateTracker::TrackDescriptorResources(SIZE_T          descriptor_cpu_address,
                                                ID3D12Resource* resource1,
                                                ID3D12Resource* resource2)
{
    auto* descriptor_info            = GetDescriptorInfo(descriptor_cpu_address);
    descriptor_info->resource_ids[0] = GetDx12WrappedId<ID3D12Resource>(resource1);
    descriptor_info->resource_ids[1] = GetDx12WrappedId<ID3D12Resource>(resource2);
}

void Dx12StateTracker::TrackDescriptorGpuVa(SIZE_T descriptor_cpu_address, D3D12_GPU_VIRTUAL_ADDRESS address)
{
    auto* descriptor_info            = GetDescriptorInfo(descriptor_cpu_address);
    descriptor_info->resource_gpu_va = address;
}

void Dx12StateTracker::TrackUpdateTileMappings(ID3D12Resource_Wrapper*         resource_wrapper,
                                               format::HandleId                queue_id,
                                               format::HandleId                heap_id,
                                               const util::MemoryOutputStream* parameter_buffer)
{
    GFXRECON_ASSERT(resource_wrapper != nullptr);
    GFXRECON_ASSERT(resource_wrapper->GetObjectInfo() != nullptr);

    auto resource_info = resource_wrapper->GetObjectInfo();
    resource_info->tile_mappings.push_back(
        { queue_id,
          heap_id,
          std::make_unique<util::MemoryOutputStream>(parameter_buffer->GetData(), parameter_buffer->GetDataSize()) });
}

void Dx12StateTracker::TrackSubresourceTransitionBarrier(ID3D12ResourceInfo*        resource_info,
                                                         const DxTransitionBarrier& transition,
                                                         UINT                       subresource)
{
    resource_info->subresource_transitions[subresource] = { transition.state_after, transition.barrier_flags };
}

void Dx12StateTracker::TrackAcquireImage(UINT image_index, IDXGISwapChain_Wrapper* wrapper)
{
    GFXRECON_ASSERT(wrapper != nullptr);
    auto wrapper_info = wrapper->GetObjectInfo();

    GFXRECON_ASSERT((wrapper_info != nullptr) && (image_index < wrapper_info->image_acquired_info.size()));
    wrapper_info->current_back_buffer_index                    = image_index;
    wrapper_info->image_acquired_info[image_index].is_acquired = true;
}

void Dx12StateTracker::TrackPresentedImages(IDXGISwapChain_Wrapper*        wrapper,
                                            UINT                           sync_interval,
                                            UINT                           present_flags,
                                            const DXGI_PRESENT_PARAMETERS* present_parameters)
{
    GFXRECON_ASSERT(wrapper != nullptr);
    auto     wrapper_info              = wrapper->GetObjectInfo();
    uint32_t image_index               = wrapper_info->current_back_buffer_index;
    wrapper_info->last_presented_image = image_index;

    GFXRECON_ASSERT((wrapper_info != nullptr) && (image_index < wrapper_info->image_acquired_info.size()));

    wrapper_info->image_acquired_info[image_index].sync_interval         = sync_interval;
    wrapper_info->image_acquired_info[image_index].present_flags         = present_flags;
    wrapper_info->image_acquired_info[image_index].is_acquired           = false;
    wrapper_info->image_acquired_info[image_index].is_present_parameters = false;
    if (present_parameters)
    {
        wrapper_info->image_acquired_info[image_index].is_present_parameters = true;
        wrapper_info->image_acquired_info[image_index].dirty_rects.resize(present_parameters->DirtyRectsCount);
        util::platform::MemoryCopy(wrapper_info->image_acquired_info[image_index].dirty_rects.data(),
                                   present_parameters->DirtyRectsCount * sizeof RECT,
                                   present_parameters->pDirtyRects,
                                   present_parameters->DirtyRectsCount * sizeof RECT);
        wrapper_info->image_acquired_info[image_index].scroll_rect   = *present_parameters->pScrollRect;
        wrapper_info->image_acquired_info[image_index].scroll_offset = *present_parameters->pScrollOffset;
    }
}

void Dx12StateTracker::TrackResizeBuffers(IDXGISwapChain_Wrapper*         swapchain_wrapper,
                                          format::ApiCallId               call_id,
                                          const util::MemoryOutputStream* parameter_buffer)
{
    GFXRECON_ASSERT(swapchain_wrapper != nullptr);
    GFXRECON_ASSERT(swapchain_wrapper->GetObjectInfo() != nullptr);

    auto swapchain_info         = swapchain_wrapper->GetObjectInfo();
    swapchain_info->resize_info = { call_id,
                                    std::make_unique<util::MemoryOutputStream>(parameter_buffer->GetData(),
                                                                               parameter_buffer->GetDataSize()) };
}

void Dx12StateTracker::TrackPrivateData(IUnknown_Wrapper* wrapper, REFGUID name, UINT data_size, const void* data)
{
    GFXRECON_ASSERT(wrapper != nullptr);
    GFXRECON_ASSERT(data != nullptr);
    auto* info = GetWrapperInfo(wrapper);
    if (info)
    {
        std::vector<uint8_t> private_data(data_size);
        memcpy(private_data.data(), data, data_size);
        info->private_datas[name] = std::move(private_data);
    }
}

void Dx12StateTracker::TrackResidencyPriority(ID3D12Device1_Wrapper*          device_wrapper,
                                              UINT                            num_objects,
                                              ID3D12Pageable* const*          objects,
                                              const D3D12_RESIDENCY_PRIORITY* priorities)
{
    GFXRECON_ASSERT(device_wrapper != nullptr);
    GFXRECON_ASSERT(device_wrapper->GetObjectInfo() != nullptr);
    GFXRECON_ASSERT(objects != nullptr);
    GFXRECON_ASSERT(priorities != nullptr);

    auto                         device_info = device_wrapper->GetObjectInfo();
    std::unique_lock<std::mutex> lock(state_table_mutex_);
    for (UINT i = 0; i < num_objects; ++i)
    {
        GFXRECON_ASSERT(objects[i] != nullptr);
        auto handle_id                               = GetDx12WrappedId<ID3D12Pageable>(objects[i]);
        device_info->residency_priorities[handle_id] = priorities[i];
    }
}

void Dx12StateTracker::TrackRelease(IUnknown_Wrapper* wrapper)
{
    GFXRECON_ASSERT(wrapper != nullptr);
    auto* info = GetWrapperInfo(wrapper);
    if (info && info->create_object_id != format::kNullHandleId)
    {
        auto* device_wrapper = state_table_.GetID3D12Device_Wrapper(info->create_object_id);
        if (device_wrapper)
        {
            auto device_info = device_wrapper->GetObjectInfo();
            GFXRECON_ASSERT(device_info != nullptr);
            std::unique_lock<std::mutex> lock(state_table_mutex_);
            device_info->residency_priorities.erase(wrapper->GetCaptureId());
        }
    }
}

void Dx12StateTracker::TrackBuildRaytracingAccelerationStructure(
    ID3D12GraphicsCommandList4_Wrapper* list_wrapper, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC* desc)
{
    // Get the wrapper of the destination resource.
    ID3D12Resource_Wrapper* resource_wrapper = nullptr;
    {
        std::unique_lock<std::mutex> lock(state_table_mutex_);
        resource_wrapper = GetResourceWrapperForGpuVa(desc->DestAccelerationStructureData);
    }

    if (resource_wrapper)
    {
        auto device5 = graphics::dx12::GetDeviceComPtrFromChild<ID3D12Device5>(
            list_wrapper->GetWrappedObjectAs<ID3D12GraphicsCommandList4>());

        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO prebuild_info;
        device5->GetRaytracingAccelerationStructurePrebuildInfo(&desc->Inputs, &prebuild_info);

        DxAccelerationStructureBuildInfo build_info;
        build_info.dest_gpu_va          = desc->DestAccelerationStructureData;
        build_info.destination_resource = resource_wrapper;
        build_info.dest_size            = prebuild_info.ResultDataMaxSizeInBytes;

        // Save build input arguments.
        build_info.inputs = desc->Inputs;

        // Save a copy of the input's geometry desc pointers.
        if (desc->Inputs.Type == D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL)
        {
            for (UINT i = 0; i < desc->Inputs.NumDescs; ++i)
            {
                if (desc->Inputs.DescsLayout == D3D12_ELEMENTS_LAYOUT_ARRAY)
                {
                    build_info.inputs_geometry_descs.push_back(desc->Inputs.pGeometryDescs[i]);
                }
                else if (desc->Inputs.DescsLayout == D3D12_ELEMENTS_LAYOUT_ARRAY_OF_POINTERS)
                {
                    build_info.inputs_geometry_descs.push_back(*desc->Inputs.ppGeometryDescs[i]);
                }
            }

            // The geometry desc pointers may be invalid when build_info is used in the future, so clear them here.
            build_info.inputs.pGeometryDescs  = nullptr;
            build_info.inputs.ppGeometryDescs = nullptr;
        }

        // Save the build info with the command list info.
        auto list_info = list_wrapper->GetObjectInfo();
        GFXRECON_ASSERT(list_info);
        list_info->acceleration_structure_builds.push_back(build_info);
    }
    else
    {
        GFXRECON_LOG_ERROR("Failed to find the resource object that corresponds to the DestAccelerationStructureData "
                           "GPU VA (value=%" PRIu64
                           ") in BuildRaytracingAccelerationStructure. Acceleration structure trimming may fail.",
                           desc->DestAccelerationStructureData);
    }
}

void Dx12StateTracker::TrackGetShaderIdentifier(ID3D12StateObjectProperties_Wrapper* state_object_properties_wrapper,
                                                void*                                result,
                                                LPCWSTR                              export_name,
                                                const util::MemoryOutputStream*      parameter_buffer)
{
    GFXRECON_ASSERT(state_object_properties_wrapper != nullptr);
    GFXRECON_ASSERT(state_object_properties_wrapper->GetObjectInfo() != nullptr);

    auto         state_object_properties_info = state_object_properties_wrapper->GetObjectInfo();
    std::wstring export_name_wstring          = export_name;
    state_object_properties_info->get_shader_identifier_call_parameters[export_name_wstring] =
        std::make_shared<util::MemoryOutputStream>(parameter_buffer->GetData(), parameter_buffer->GetDataSize());
}

ID3D12Resource_Wrapper* Dx12StateTracker::GetResourceWrapperForGpuVa(D3D12_GPU_VIRTUAL_ADDRESS gpu_va)
{
    ID3D12Resource_Wrapper* result      = nullptr;
    auto                    resource_id = state_table_.GetResourceForGpuVa(gpu_va);
    if (resource_id != format::kNullHandleId)
    {
        result = state_table_.GetID3D12Resource_Wrapper(resource_id);
    }
    return result;
}

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)
