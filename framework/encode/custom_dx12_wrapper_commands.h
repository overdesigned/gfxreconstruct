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

#ifndef GFXRECON_ENCODE_CUSTOM_DX12_WRAPPER_COMMANDS_H
#define GFXRECON_ENCODE_CUSTOM_DX12_WRAPPER_COMMANDS_H

#include "encode/d3d12_capture_manager.h"
#include "format/api_call_id.h"
#include "generated/generated_dx12_wrappers.h"
#include "util/defines.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

template <format::ApiCallId Id>
struct CustomWrapperPreCall
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager*, Args...)
    {}
};

template <format::ApiCallId Id>
struct CustomWrapperPostCall
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager*, Args...)
    {}
};

template <typename Wrapper>
void CustomWrapperDestroyCall(Wrapper* wrapper)
{}

template <>
struct CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateHeap>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PostProcess_ID3D12Device_CreateHeap(args...);
    }
};

template <>
struct CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommittedResource>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PostProcess_ID3D12Device_CreateCommittedResource(args...);
    }
};

template <>
struct CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreatePlacedResource>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PostProcess_ID3D12Device_CreatePlacedResource(args...);
    }
};

template <>
struct CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device3_OpenExistingHeapFromAddress>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PreProcess_ID3D12Device3_OpenExistingHeapFromAddress(args...);
    }
};

template <>
struct CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_Map>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PostProcess_ID3D12Resource_Map(args...);
    }
};

template <>
struct CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_Unmap>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PreProcess_ID3D12Resource_Unmap(args...);
    }
};

template <>
struct CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_GetHeapProperties>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PostProcess_ID3D12Resource_GetHeapProperties(args...);
    }
};

template <>
void CustomWrapperDestroyCall<ID3D12Resource_Wrapper>(ID3D12Resource_Wrapper* wrapper)
{
    D3D12CaptureManager::Get()->Destroy_ID3D12Resource(wrapper);
}

template <>
struct CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Heap_GetDesc>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PostProcess_ID3D12Heap_GetDesc(args...);
    }
};

template <>
struct CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_ExecuteCommandLists>
{
    template <typename... Args>
    static void Dispatch(D3D12CaptureManager* manager, Args... args)
    {
        manager->PreProcess_ID3D12CommandQueue_ExecuteCommandLists(args...);
    }
};

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_ENCODE_CUSTOM_DX12_WRAPPER_COMMANDS_H