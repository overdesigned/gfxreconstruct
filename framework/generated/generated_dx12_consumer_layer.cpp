/*
** Copyright (c) 2021 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to
** deal in the Software without restriction, including without limitation the
** rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
** sell copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
** IN THE SOFTWARE.
*/

/*
** This file is generated from dx12_consumer_layer_body_generator.py.
**
*/

#include "generated_dx12_consumer_layer.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

/*
** This part is generated from dxgi.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_CreateDXGIFactory(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFactory)
{
    Pre_Process_CreateDXGIFactory(call_info, return_value, riid, ppFactory);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_CreateDXGIFactory(call_info, return_value, riid, ppFactory);
    }
    Post_Process_CreateDXGIFactory(call_info, return_value, riid, ppFactory);
}

void Dx12LayerConsumer::Process_CreateDXGIFactory1(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFactory)
{
    Pre_Process_CreateDXGIFactory1(call_info, return_value, riid, ppFactory);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_CreateDXGIFactory1(call_info, return_value, riid, ppFactory);
    }
    Post_Process_CreateDXGIFactory1(call_info, return_value, riid, ppFactory);
}

void Dx12LayerConsumer::Process_IDXGIObject_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID Name,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData)
{
    Pre_Process_IDXGIObject_SetPrivateData(call_info, object_id, return_value, Name, DataSize, pData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIObject_SetPrivateData(call_info, object_id, return_value, Name, DataSize, pData);
    }
    Post_Process_IDXGIObject_SetPrivateData(call_info, object_id, return_value, Name, DataSize, pData);
}

void Dx12LayerConsumer::Process_IDXGIObject_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID Name,
        format::HandleId pUnknown)
{
    Pre_Process_IDXGIObject_SetPrivateDataInterface(call_info, object_id, return_value, Name, pUnknown);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIObject_SetPrivateDataInterface(call_info, object_id, return_value, Name, pUnknown);
    }
    Post_Process_IDXGIObject_SetPrivateDataInterface(call_info, object_id, return_value, Name, pUnknown);
}

void Dx12LayerConsumer::Process_IDXGIObject_GetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID Name,
        PointerDecoder<UINT>* pDataSize,
        PointerDecoder<uint8_t>* pData)
{
    Pre_Process_IDXGIObject_GetPrivateData(call_info, object_id, return_value, Name, pDataSize, pData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIObject_GetPrivateData(call_info, object_id, return_value, Name, pDataSize, pData);
    }
    Post_Process_IDXGIObject_GetPrivateData(call_info, object_id, return_value, Name, pDataSize, pData);
}

void Dx12LayerConsumer::Process_IDXGIObject_GetParent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppParent)
{
    Pre_Process_IDXGIObject_GetParent(call_info, object_id, return_value, riid, ppParent);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIObject_GetParent(call_info, object_id, return_value, riid, ppParent);
    }
    Post_Process_IDXGIObject_GetParent(call_info, object_id, return_value, riid, ppParent);
}

void Dx12LayerConsumer::Process_IDXGIDeviceSubObject_GetDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppDevice)
{
    Pre_Process_IDXGIDeviceSubObject_GetDevice(call_info, object_id, return_value, riid, ppDevice);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDeviceSubObject_GetDevice(call_info, object_id, return_value, riid, ppDevice);
    }
    Post_Process_IDXGIDeviceSubObject_GetDevice(call_info, object_id, return_value, riid, ppDevice);
}

void Dx12LayerConsumer::Process_IDXGIResource_GetSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pSharedHandle)
{
    Pre_Process_IDXGIResource_GetSharedHandle(call_info, object_id, return_value, pSharedHandle);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIResource_GetSharedHandle(call_info, object_id, return_value, pSharedHandle);
    }
    Post_Process_IDXGIResource_GetSharedHandle(call_info, object_id, return_value, pSharedHandle);
}

void Dx12LayerConsumer::Process_IDXGIResource_GetUsage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<DXGI_USAGE>* pUsage)
{
    Pre_Process_IDXGIResource_GetUsage(call_info, object_id, return_value, pUsage);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIResource_GetUsage(call_info, object_id, return_value, pUsage);
    }
    Post_Process_IDXGIResource_GetUsage(call_info, object_id, return_value, pUsage);
}

void Dx12LayerConsumer::Process_IDXGIResource_SetEvictionPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT EvictionPriority)
{
    Pre_Process_IDXGIResource_SetEvictionPriority(call_info, object_id, return_value, EvictionPriority);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIResource_SetEvictionPriority(call_info, object_id, return_value, EvictionPriority);
    }
    Post_Process_IDXGIResource_SetEvictionPriority(call_info, object_id, return_value, EvictionPriority);
}

void Dx12LayerConsumer::Process_IDXGIResource_GetEvictionPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pEvictionPriority)
{
    Pre_Process_IDXGIResource_GetEvictionPriority(call_info, object_id, return_value, pEvictionPriority);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIResource_GetEvictionPriority(call_info, object_id, return_value, pEvictionPriority);
    }
    Post_Process_IDXGIResource_GetEvictionPriority(call_info, object_id, return_value, pEvictionPriority);
}

void Dx12LayerConsumer::Process_IDXGIKeyedMutex_AcquireSync(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Key,
        DWORD dwMilliseconds)
{
    Pre_Process_IDXGIKeyedMutex_AcquireSync(call_info, object_id, return_value, Key, dwMilliseconds);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIKeyedMutex_AcquireSync(call_info, object_id, return_value, Key, dwMilliseconds);
    }
    Post_Process_IDXGIKeyedMutex_AcquireSync(call_info, object_id, return_value, Key, dwMilliseconds);
}

void Dx12LayerConsumer::Process_IDXGIKeyedMutex_ReleaseSync(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Key)
{
    Pre_Process_IDXGIKeyedMutex_ReleaseSync(call_info, object_id, return_value, Key);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIKeyedMutex_ReleaseSync(call_info, object_id, return_value, Key);
    }
    Post_Process_IDXGIKeyedMutex_ReleaseSync(call_info, object_id, return_value, Key);
}

void Dx12LayerConsumer::Process_IDXGISurface_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SURFACE_DESC>* pDesc)
{
    Pre_Process_IDXGISurface_GetDesc(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISurface_GetDesc(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGISurface_GetDesc(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGISurface_Map(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MAPPED_RECT>* pLockedRect,
        UINT MapFlags)
{
    Pre_Process_IDXGISurface_Map(call_info, object_id, return_value, pLockedRect, MapFlags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISurface_Map(call_info, object_id, return_value, pLockedRect, MapFlags);
    }
    Post_Process_IDXGISurface_Map(call_info, object_id, return_value, pLockedRect, MapFlags);
}

void Dx12LayerConsumer::Process_IDXGISurface_Unmap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_IDXGISurface_Unmap(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISurface_Unmap(call_info, object_id, return_value);
    }
    Post_Process_IDXGISurface_Unmap(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGISurface1_GetDC(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL Discard,
        PointerDecoder<uint64_t, void*>* phdc)
{
    Pre_Process_IDXGISurface1_GetDC(call_info, object_id, return_value, Discard, phdc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISurface1_GetDC(call_info, object_id, return_value, Discard, phdc);
    }
    Post_Process_IDXGISurface1_GetDC(call_info, object_id, return_value, Discard, phdc);
}

void Dx12LayerConsumer::Process_IDXGISurface1_ReleaseDC(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pDirtyRect)
{
    Pre_Process_IDXGISurface1_ReleaseDC(call_info, object_id, return_value, pDirtyRect);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISurface1_ReleaseDC(call_info, object_id, return_value, pDirtyRect);
    }
    Post_Process_IDXGISurface1_ReleaseDC(call_info, object_id, return_value, pDirtyRect);
}

void Dx12LayerConsumer::Process_IDXGIAdapter_EnumOutputs(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Output,
        HandlePointerDecoder<IDXGIOutput*>* ppOutput)
{
    Pre_Process_IDXGIAdapter_EnumOutputs(call_info, object_id, return_value, Output, ppOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter_EnumOutputs(call_info, object_id, return_value, Output, ppOutput);
    }
    Post_Process_IDXGIAdapter_EnumOutputs(call_info, object_id, return_value, Output, ppOutput);
}

void Dx12LayerConsumer::Process_IDXGIAdapter_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC>* pDesc)
{
    Pre_Process_IDXGIAdapter_GetDesc(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter_GetDesc(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGIAdapter_GetDesc(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIAdapter_CheckInterfaceSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID InterfaceName,
        StructPointerDecoder<Decoded_LARGE_INTEGER>* pUMDVersion)
{
    Pre_Process_IDXGIAdapter_CheckInterfaceSupport(call_info, object_id, return_value, InterfaceName, pUMDVersion);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter_CheckInterfaceSupport(call_info, object_id, return_value, InterfaceName, pUMDVersion);
    }
    Post_Process_IDXGIAdapter_CheckInterfaceSupport(call_info, object_id, return_value, InterfaceName, pUMDVersion);
}

void Dx12LayerConsumer::Process_IDXGIOutput_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_OUTPUT_DESC>* pDesc)
{
    Pre_Process_IDXGIOutput_GetDesc(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_GetDesc(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGIOutput_GetDesc(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutput_GetDisplayModeList(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT EnumFormat,
        UINT Flags,
        PointerDecoder<UINT>* pNumModes,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pDesc)
{
    Pre_Process_IDXGIOutput_GetDisplayModeList(call_info, object_id, return_value, EnumFormat, Flags, pNumModes, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_GetDisplayModeList(call_info, object_id, return_value, EnumFormat, Flags, pNumModes, pDesc);
    }
    Post_Process_IDXGIOutput_GetDisplayModeList(call_info, object_id, return_value, EnumFormat, Flags, pNumModes, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutput_FindClosestMatchingMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pModeToMatch,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pClosestMatch,
        format::HandleId pConcernedDevice)
{
    Pre_Process_IDXGIOutput_FindClosestMatchingMode(call_info, object_id, return_value, pModeToMatch, pClosestMatch, pConcernedDevice);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_FindClosestMatchingMode(call_info, object_id, return_value, pModeToMatch, pClosestMatch, pConcernedDevice);
    }
    Post_Process_IDXGIOutput_FindClosestMatchingMode(call_info, object_id, return_value, pModeToMatch, pClosestMatch, pConcernedDevice);
}

void Dx12LayerConsumer::Process_IDXGIOutput_WaitForVBlank(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_IDXGIOutput_WaitForVBlank(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_WaitForVBlank(call_info, object_id, return_value);
    }
    Post_Process_IDXGIOutput_WaitForVBlank(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIOutput_TakeOwnership(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        BOOL Exclusive)
{
    Pre_Process_IDXGIOutput_TakeOwnership(call_info, object_id, return_value, pDevice, Exclusive);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_TakeOwnership(call_info, object_id, return_value, pDevice, Exclusive);
    }
    Post_Process_IDXGIOutput_TakeOwnership(call_info, object_id, return_value, pDevice, Exclusive);
}

void Dx12LayerConsumer::Process_IDXGIOutput_ReleaseOwnership(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_IDXGIOutput_ReleaseOwnership(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_ReleaseOwnership(call_info, object_id);
    }
    Post_Process_IDXGIOutput_ReleaseOwnership(call_info, object_id);
}

void Dx12LayerConsumer::Process_IDXGIOutput_GetGammaControlCapabilities(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_GAMMA_CONTROL_CAPABILITIES>* pGammaCaps)
{
    Pre_Process_IDXGIOutput_GetGammaControlCapabilities(call_info, object_id, return_value, pGammaCaps);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_GetGammaControlCapabilities(call_info, object_id, return_value, pGammaCaps);
    }
    Post_Process_IDXGIOutput_GetGammaControlCapabilities(call_info, object_id, return_value, pGammaCaps);
}

void Dx12LayerConsumer::Process_IDXGIOutput_SetGammaControl(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_GAMMA_CONTROL>* pArray)
{
    Pre_Process_IDXGIOutput_SetGammaControl(call_info, object_id, return_value, pArray);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_SetGammaControl(call_info, object_id, return_value, pArray);
    }
    Post_Process_IDXGIOutput_SetGammaControl(call_info, object_id, return_value, pArray);
}

void Dx12LayerConsumer::Process_IDXGIOutput_GetGammaControl(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_GAMMA_CONTROL>* pArray)
{
    Pre_Process_IDXGIOutput_GetGammaControl(call_info, object_id, return_value, pArray);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_GetGammaControl(call_info, object_id, return_value, pArray);
    }
    Post_Process_IDXGIOutput_GetGammaControl(call_info, object_id, return_value, pArray);
}

void Dx12LayerConsumer::Process_IDXGIOutput_SetDisplaySurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pScanoutSurface)
{
    Pre_Process_IDXGIOutput_SetDisplaySurface(call_info, object_id, return_value, pScanoutSurface);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_SetDisplaySurface(call_info, object_id, return_value, pScanoutSurface);
    }
    Post_Process_IDXGIOutput_SetDisplaySurface(call_info, object_id, return_value, pScanoutSurface);
}

void Dx12LayerConsumer::Process_IDXGIOutput_GetDisplaySurfaceData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDestination)
{
    Pre_Process_IDXGIOutput_GetDisplaySurfaceData(call_info, object_id, return_value, pDestination);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_GetDisplaySurfaceData(call_info, object_id, return_value, pDestination);
    }
    Post_Process_IDXGIOutput_GetDisplaySurfaceData(call_info, object_id, return_value, pDestination);
}

void Dx12LayerConsumer::Process_IDXGIOutput_GetFrameStatistics(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_FRAME_STATISTICS>* pStats)
{
    Pre_Process_IDXGIOutput_GetFrameStatistics(call_info, object_id, return_value, pStats);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput_GetFrameStatistics(call_info, object_id, return_value, pStats);
    }
    Post_Process_IDXGIOutput_GetFrameStatistics(call_info, object_id, return_value, pStats);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_Present(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SyncInterval,
        UINT Flags)
{
    Pre_Process_IDXGISwapChain_Present(call_info, object_id, return_value, SyncInterval, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_Present(call_info, object_id, return_value, SyncInterval, Flags);
    }
    Post_Process_IDXGISwapChain_Present(call_info, object_id, return_value, SyncInterval, Flags);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_GetBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Buffer,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppSurface)
{
    Pre_Process_IDXGISwapChain_GetBuffer(call_info, object_id, return_value, Buffer, riid, ppSurface);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_GetBuffer(call_info, object_id, return_value, Buffer, riid, ppSurface);
    }
    Post_Process_IDXGISwapChain_GetBuffer(call_info, object_id, return_value, Buffer, riid, ppSurface);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_SetFullscreenState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL Fullscreen,
        format::HandleId pTarget)
{
    Pre_Process_IDXGISwapChain_SetFullscreenState(call_info, object_id, return_value, Fullscreen, pTarget);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_SetFullscreenState(call_info, object_id, return_value, Fullscreen, pTarget);
    }
    Post_Process_IDXGISwapChain_SetFullscreenState(call_info, object_id, return_value, Fullscreen, pTarget);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_GetFullscreenState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<BOOL>* pFullscreen,
        HandlePointerDecoder<IDXGIOutput*>* ppTarget)
{
    Pre_Process_IDXGISwapChain_GetFullscreenState(call_info, object_id, return_value, pFullscreen, ppTarget);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_GetFullscreenState(call_info, object_id, return_value, pFullscreen, ppTarget);
    }
    Post_Process_IDXGISwapChain_GetFullscreenState(call_info, object_id, return_value, pFullscreen, ppTarget);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC>* pDesc)
{
    Pre_Process_IDXGISwapChain_GetDesc(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_GetDesc(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGISwapChain_GetDesc(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_ResizeBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT BufferCount,
        UINT Width,
        UINT Height,
        DXGI_FORMAT NewFormat,
        UINT SwapChainFlags)
{
    Pre_Process_IDXGISwapChain_ResizeBuffers(call_info, object_id, return_value, BufferCount, Width, Height, NewFormat, SwapChainFlags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_ResizeBuffers(call_info, object_id, return_value, BufferCount, Width, Height, NewFormat, SwapChainFlags);
    }
    Post_Process_IDXGISwapChain_ResizeBuffers(call_info, object_id, return_value, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_ResizeTarget(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pNewTargetParameters)
{
    Pre_Process_IDXGISwapChain_ResizeTarget(call_info, object_id, return_value, pNewTargetParameters);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_ResizeTarget(call_info, object_id, return_value, pNewTargetParameters);
    }
    Post_Process_IDXGISwapChain_ResizeTarget(call_info, object_id, return_value, pNewTargetParameters);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_GetContainingOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IDXGIOutput*>* ppOutput)
{
    Pre_Process_IDXGISwapChain_GetContainingOutput(call_info, object_id, return_value, ppOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_GetContainingOutput(call_info, object_id, return_value, ppOutput);
    }
    Post_Process_IDXGISwapChain_GetContainingOutput(call_info, object_id, return_value, ppOutput);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_GetFrameStatistics(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_FRAME_STATISTICS>* pStats)
{
    Pre_Process_IDXGISwapChain_GetFrameStatistics(call_info, object_id, return_value, pStats);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_GetFrameStatistics(call_info, object_id, return_value, pStats);
    }
    Post_Process_IDXGISwapChain_GetFrameStatistics(call_info, object_id, return_value, pStats);
}

void Dx12LayerConsumer::Process_IDXGISwapChain_GetLastPresentCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pLastPresentCount)
{
    Pre_Process_IDXGISwapChain_GetLastPresentCount(call_info, object_id, return_value, pLastPresentCount);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain_GetLastPresentCount(call_info, object_id, return_value, pLastPresentCount);
    }
    Post_Process_IDXGISwapChain_GetLastPresentCount(call_info, object_id, return_value, pLastPresentCount);
}

void Dx12LayerConsumer::Process_IDXGIFactory_EnumAdapters(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Adapter,
        HandlePointerDecoder<IDXGIAdapter*>* ppAdapter)
{
    Pre_Process_IDXGIFactory_EnumAdapters(call_info, object_id, return_value, Adapter, ppAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory_EnumAdapters(call_info, object_id, return_value, Adapter, ppAdapter);
    }
    Post_Process_IDXGIFactory_EnumAdapters(call_info, object_id, return_value, Adapter, ppAdapter);
}

void Dx12LayerConsumer::Process_IDXGIFactory_MakeWindowAssociation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t WindowHandle,
        UINT Flags)
{
    Pre_Process_IDXGIFactory_MakeWindowAssociation(call_info, object_id, return_value, WindowHandle, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory_MakeWindowAssociation(call_info, object_id, return_value, WindowHandle, Flags);
    }
    Post_Process_IDXGIFactory_MakeWindowAssociation(call_info, object_id, return_value, WindowHandle, Flags);
}

void Dx12LayerConsumer::Process_IDXGIFactory_GetWindowAssociation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pWindowHandle)
{
    Pre_Process_IDXGIFactory_GetWindowAssociation(call_info, object_id, return_value, pWindowHandle);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory_GetWindowAssociation(call_info, object_id, return_value, pWindowHandle);
    }
    Post_Process_IDXGIFactory_GetWindowAssociation(call_info, object_id, return_value, pWindowHandle);
}

void Dx12LayerConsumer::Process_IDXGIFactory_CreateSwapChain(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC>* pDesc,
        HandlePointerDecoder<IDXGISwapChain*>* ppSwapChain)
{
    Pre_Process_IDXGIFactory_CreateSwapChain(call_info, object_id, return_value, pDevice, pDesc, ppSwapChain);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory_CreateSwapChain(call_info, object_id, return_value, pDevice, pDesc, ppSwapChain);
    }
    Post_Process_IDXGIFactory_CreateSwapChain(call_info, object_id, return_value, pDevice, pDesc, ppSwapChain);
}

void Dx12LayerConsumer::Process_IDXGIFactory_CreateSoftwareAdapter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t Module,
        HandlePointerDecoder<IDXGIAdapter*>* ppAdapter)
{
    Pre_Process_IDXGIFactory_CreateSoftwareAdapter(call_info, object_id, return_value, Module, ppAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory_CreateSoftwareAdapter(call_info, object_id, return_value, Module, ppAdapter);
    }
    Post_Process_IDXGIFactory_CreateSoftwareAdapter(call_info, object_id, return_value, Module, ppAdapter);
}

void Dx12LayerConsumer::Process_IDXGIDevice_GetAdapter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IDXGIAdapter*>* pAdapter)
{
    Pre_Process_IDXGIDevice_GetAdapter(call_info, object_id, return_value, pAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice_GetAdapter(call_info, object_id, return_value, pAdapter);
    }
    Post_Process_IDXGIDevice_GetAdapter(call_info, object_id, return_value, pAdapter);
}

void Dx12LayerConsumer::Process_IDXGIDevice_CreateSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SURFACE_DESC>* pDesc,
        UINT NumSurfaces,
        DXGI_USAGE Usage,
        StructPointerDecoder<Decoded_DXGI_SHARED_RESOURCE>* pSharedResource,
        HandlePointerDecoder<IDXGISurface*>* ppSurface)
{
    Pre_Process_IDXGIDevice_CreateSurface(call_info, object_id, return_value, pDesc, NumSurfaces, Usage, pSharedResource, ppSurface);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice_CreateSurface(call_info, object_id, return_value, pDesc, NumSurfaces, Usage, pSharedResource, ppSurface);
    }
    Post_Process_IDXGIDevice_CreateSurface(call_info, object_id, return_value, pDesc, NumSurfaces, Usage, pSharedResource, ppSurface);
}

void Dx12LayerConsumer::Process_IDXGIDevice_QueryResourceResidency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IUnknown*>* ppResources,
        PointerDecoder<DXGI_RESIDENCY>* pResidencyStatus,
        UINT NumResources)
{
    Pre_Process_IDXGIDevice_QueryResourceResidency(call_info, object_id, return_value, ppResources, pResidencyStatus, NumResources);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice_QueryResourceResidency(call_info, object_id, return_value, ppResources, pResidencyStatus, NumResources);
    }
    Post_Process_IDXGIDevice_QueryResourceResidency(call_info, object_id, return_value, ppResources, pResidencyStatus, NumResources);
}

void Dx12LayerConsumer::Process_IDXGIDevice_SetGPUThreadPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        INT Priority)
{
    Pre_Process_IDXGIDevice_SetGPUThreadPriority(call_info, object_id, return_value, Priority);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice_SetGPUThreadPriority(call_info, object_id, return_value, Priority);
    }
    Post_Process_IDXGIDevice_SetGPUThreadPriority(call_info, object_id, return_value, Priority);
}

void Dx12LayerConsumer::Process_IDXGIDevice_GetGPUThreadPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<INT>* pPriority)
{
    Pre_Process_IDXGIDevice_GetGPUThreadPriority(call_info, object_id, return_value, pPriority);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice_GetGPUThreadPriority(call_info, object_id, return_value, pPriority);
    }
    Post_Process_IDXGIDevice_GetGPUThreadPriority(call_info, object_id, return_value, pPriority);
}

void Dx12LayerConsumer::Process_IDXGIFactory1_EnumAdapters1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Adapter,
        HandlePointerDecoder<IDXGIAdapter1*>* ppAdapter)
{
    Pre_Process_IDXGIFactory1_EnumAdapters1(call_info, object_id, return_value, Adapter, ppAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory1_EnumAdapters1(call_info, object_id, return_value, Adapter, ppAdapter);
    }
    Post_Process_IDXGIFactory1_EnumAdapters1(call_info, object_id, return_value, Adapter, ppAdapter);
}

void Dx12LayerConsumer::Process_IDXGIFactory1_IsCurrent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_IDXGIFactory1_IsCurrent(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory1_IsCurrent(call_info, object_id, return_value);
    }
    Post_Process_IDXGIFactory1_IsCurrent(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIAdapter1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC1>* pDesc)
{
    Pre_Process_IDXGIAdapter1_GetDesc1(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter1_GetDesc1(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGIAdapter1_GetDesc1(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIDevice1_SetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT MaxLatency)
{
    Pre_Process_IDXGIDevice1_SetMaximumFrameLatency(call_info, object_id, return_value, MaxLatency);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice1_SetMaximumFrameLatency(call_info, object_id, return_value, MaxLatency);
    }
    Post_Process_IDXGIDevice1_SetMaximumFrameLatency(call_info, object_id, return_value, MaxLatency);
}

void Dx12LayerConsumer::Process_IDXGIDevice1_GetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pMaxLatency)
{
    Pre_Process_IDXGIDevice1_GetMaximumFrameLatency(call_info, object_id, return_value, pMaxLatency);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice1_GetMaximumFrameLatency(call_info, object_id, return_value, pMaxLatency);
    }
    Post_Process_IDXGIDevice1_GetMaximumFrameLatency(call_info, object_id, return_value, pMaxLatency);
}

/*
** This part is generated from dxgi1_2.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_IDXGIDisplayControl_IsStereoEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_IDXGIDisplayControl_IsStereoEnabled(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDisplayControl_IsStereoEnabled(call_info, object_id, return_value);
    }
    Post_Process_IDXGIDisplayControl_IsStereoEnabled(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIDisplayControl_SetStereoEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL enabled)
{
    Pre_Process_IDXGIDisplayControl_SetStereoEnabled(call_info, object_id, enabled);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDisplayControl_SetStereoEnabled(call_info, object_id, enabled);
    }
    Post_Process_IDXGIDisplayControl_SetStereoEnabled(call_info, object_id, enabled);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_DESC>* pDesc)
{
    Pre_Process_IDXGIOutputDuplication_GetDesc(call_info, object_id, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_GetDesc(call_info, object_id, pDesc);
    }
    Post_Process_IDXGIOutputDuplication_GetDesc(call_info, object_id, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_AcquireNextFrame(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT TimeoutInMilliseconds,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_FRAME_INFO>* pFrameInfo,
        HandlePointerDecoder<IDXGIResource*>* ppDesktopResource)
{
    Pre_Process_IDXGIOutputDuplication_AcquireNextFrame(call_info, object_id, return_value, TimeoutInMilliseconds, pFrameInfo, ppDesktopResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_AcquireNextFrame(call_info, object_id, return_value, TimeoutInMilliseconds, pFrameInfo, ppDesktopResource);
    }
    Post_Process_IDXGIOutputDuplication_AcquireNextFrame(call_info, object_id, return_value, TimeoutInMilliseconds, pFrameInfo, ppDesktopResource);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_GetFrameDirtyRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT DirtyRectsBufferSize,
        StructPointerDecoder<Decoded_tagRECT>* pDirtyRectsBuffer,
        PointerDecoder<UINT>* pDirtyRectsBufferSizeRequired)
{
    Pre_Process_IDXGIOutputDuplication_GetFrameDirtyRects(call_info, object_id, return_value, DirtyRectsBufferSize, pDirtyRectsBuffer, pDirtyRectsBufferSizeRequired);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_GetFrameDirtyRects(call_info, object_id, return_value, DirtyRectsBufferSize, pDirtyRectsBuffer, pDirtyRectsBufferSizeRequired);
    }
    Post_Process_IDXGIOutputDuplication_GetFrameDirtyRects(call_info, object_id, return_value, DirtyRectsBufferSize, pDirtyRectsBuffer, pDirtyRectsBufferSizeRequired);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_GetFrameMoveRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT MoveRectsBufferSize,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_MOVE_RECT>* pMoveRectBuffer,
        PointerDecoder<UINT>* pMoveRectsBufferSizeRequired)
{
    Pre_Process_IDXGIOutputDuplication_GetFrameMoveRects(call_info, object_id, return_value, MoveRectsBufferSize, pMoveRectBuffer, pMoveRectsBufferSizeRequired);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_GetFrameMoveRects(call_info, object_id, return_value, MoveRectsBufferSize, pMoveRectBuffer, pMoveRectsBufferSizeRequired);
    }
    Post_Process_IDXGIOutputDuplication_GetFrameMoveRects(call_info, object_id, return_value, MoveRectsBufferSize, pMoveRectBuffer, pMoveRectsBufferSizeRequired);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_GetFramePointerShape(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT PointerShapeBufferSize,
        PointerDecoder<uint8_t>* pPointerShapeBuffer,
        PointerDecoder<UINT>* pPointerShapeBufferSizeRequired,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_POINTER_SHAPE_INFO>* pPointerShapeInfo)
{
    Pre_Process_IDXGIOutputDuplication_GetFramePointerShape(call_info, object_id, return_value, PointerShapeBufferSize, pPointerShapeBuffer, pPointerShapeBufferSizeRequired, pPointerShapeInfo);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_GetFramePointerShape(call_info, object_id, return_value, PointerShapeBufferSize, pPointerShapeBuffer, pPointerShapeBufferSizeRequired, pPointerShapeInfo);
    }
    Post_Process_IDXGIOutputDuplication_GetFramePointerShape(call_info, object_id, return_value, PointerShapeBufferSize, pPointerShapeBuffer, pPointerShapeBufferSizeRequired, pPointerShapeInfo);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_MapDesktopSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MAPPED_RECT>* pLockedRect)
{
    Pre_Process_IDXGIOutputDuplication_MapDesktopSurface(call_info, object_id, return_value, pLockedRect);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_MapDesktopSurface(call_info, object_id, return_value, pLockedRect);
    }
    Post_Process_IDXGIOutputDuplication_MapDesktopSurface(call_info, object_id, return_value, pLockedRect);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_UnMapDesktopSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_IDXGIOutputDuplication_UnMapDesktopSurface(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_UnMapDesktopSurface(call_info, object_id, return_value);
    }
    Post_Process_IDXGIOutputDuplication_UnMapDesktopSurface(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIOutputDuplication_ReleaseFrame(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_IDXGIOutputDuplication_ReleaseFrame(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutputDuplication_ReleaseFrame(call_info, object_id, return_value);
    }
    Post_Process_IDXGIOutputDuplication_ReleaseFrame(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGISurface2_GetResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppParentResource,
        PointerDecoder<UINT>* pSubresourceIndex)
{
    Pre_Process_IDXGISurface2_GetResource(call_info, object_id, return_value, riid, ppParentResource, pSubresourceIndex);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISurface2_GetResource(call_info, object_id, return_value, riid, ppParentResource, pSubresourceIndex);
    }
    Post_Process_IDXGISurface2_GetResource(call_info, object_id, return_value, riid, ppParentResource, pSubresourceIndex);
}

void Dx12LayerConsumer::Process_IDXGIResource1_CreateSubresourceSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT index,
        HandlePointerDecoder<IDXGISurface2*>* ppSurface)
{
    Pre_Process_IDXGIResource1_CreateSubresourceSurface(call_info, object_id, return_value, index, ppSurface);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIResource1_CreateSubresourceSurface(call_info, object_id, return_value, index, ppSurface);
    }
    Post_Process_IDXGIResource1_CreateSubresourceSurface(call_info, object_id, return_value, index, ppSurface);
}

void Dx12LayerConsumer::Process_IDXGIResource1_CreateSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded__SECURITY_ATTRIBUTES>* pAttributes,
        DWORD dwAccess,
        WStringDecoder* lpName,
        PointerDecoder<uint64_t, void*>* pHandle)
{
    Pre_Process_IDXGIResource1_CreateSharedHandle(call_info, object_id, return_value, pAttributes, dwAccess, lpName, pHandle);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIResource1_CreateSharedHandle(call_info, object_id, return_value, pAttributes, dwAccess, lpName, pHandle);
    }
    Post_Process_IDXGIResource1_CreateSharedHandle(call_info, object_id, return_value, pAttributes, dwAccess, lpName, pHandle);
}

void Dx12LayerConsumer::Process_IDXGIDevice2_OfferResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        DXGI_OFFER_RESOURCE_PRIORITY Priority)
{
    Pre_Process_IDXGIDevice2_OfferResources(call_info, object_id, return_value, NumResources, ppResources, Priority);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice2_OfferResources(call_info, object_id, return_value, NumResources, ppResources, Priority);
    }
    Post_Process_IDXGIDevice2_OfferResources(call_info, object_id, return_value, NumResources, ppResources, Priority);
}

void Dx12LayerConsumer::Process_IDXGIDevice2_ReclaimResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        PointerDecoder<BOOL>* pDiscarded)
{
    Pre_Process_IDXGIDevice2_ReclaimResources(call_info, object_id, return_value, NumResources, ppResources, pDiscarded);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice2_ReclaimResources(call_info, object_id, return_value, NumResources, ppResources, pDiscarded);
    }
    Post_Process_IDXGIDevice2_ReclaimResources(call_info, object_id, return_value, NumResources, ppResources, pDiscarded);
}

void Dx12LayerConsumer::Process_IDXGIDevice2_EnqueueSetEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent)
{
    Pre_Process_IDXGIDevice2_EnqueueSetEvent(call_info, object_id, return_value, hEvent);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice2_EnqueueSetEvent(call_info, object_id, return_value, hEvent);
    }
    Post_Process_IDXGIDevice2_EnqueueSetEvent(call_info, object_id, return_value, hEvent);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc)
{
    Pre_Process_IDXGISwapChain1_GetDesc1(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetDesc1(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGISwapChain1_GetDesc1(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetFullscreenDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC>* pDesc)
{
    Pre_Process_IDXGISwapChain1_GetFullscreenDesc(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetFullscreenDesc(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGISwapChain1_GetFullscreenDesc(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetHwnd(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pHwnd)
{
    Pre_Process_IDXGISwapChain1_GetHwnd(call_info, object_id, return_value, pHwnd);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetHwnd(call_info, object_id, return_value, pHwnd);
    }
    Post_Process_IDXGISwapChain1_GetHwnd(call_info, object_id, return_value, pHwnd);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetCoreWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID refiid,
        HandlePointerDecoder<void*>* ppUnk)
{
    Pre_Process_IDXGISwapChain1_GetCoreWindow(call_info, object_id, return_value, refiid, ppUnk);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetCoreWindow(call_info, object_id, return_value, refiid, ppUnk);
    }
    Post_Process_IDXGISwapChain1_GetCoreWindow(call_info, object_id, return_value, refiid, ppUnk);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_Present1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SyncInterval,
        UINT PresentFlags,
        StructPointerDecoder<Decoded_DXGI_PRESENT_PARAMETERS>* pPresentParameters)
{
    Pre_Process_IDXGISwapChain1_Present1(call_info, object_id, return_value, SyncInterval, PresentFlags, pPresentParameters);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_Present1(call_info, object_id, return_value, SyncInterval, PresentFlags, pPresentParameters);
    }
    Post_Process_IDXGISwapChain1_Present1(call_info, object_id, return_value, SyncInterval, PresentFlags, pPresentParameters);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_IsTemporaryMonoSupported(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_IDXGISwapChain1_IsTemporaryMonoSupported(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_IsTemporaryMonoSupported(call_info, object_id, return_value);
    }
    Post_Process_IDXGISwapChain1_IsTemporaryMonoSupported(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetRestrictToOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IDXGIOutput*>* ppRestrictToOutput)
{
    Pre_Process_IDXGISwapChain1_GetRestrictToOutput(call_info, object_id, return_value, ppRestrictToOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetRestrictToOutput(call_info, object_id, return_value, ppRestrictToOutput);
    }
    Post_Process_IDXGISwapChain1_GetRestrictToOutput(call_info, object_id, return_value, ppRestrictToOutput);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_SetBackgroundColor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3DCOLORVALUE>* pColor)
{
    Pre_Process_IDXGISwapChain1_SetBackgroundColor(call_info, object_id, return_value, pColor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_SetBackgroundColor(call_info, object_id, return_value, pColor);
    }
    Post_Process_IDXGISwapChain1_SetBackgroundColor(call_info, object_id, return_value, pColor);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetBackgroundColor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3DCOLORVALUE>* pColor)
{
    Pre_Process_IDXGISwapChain1_GetBackgroundColor(call_info, object_id, return_value, pColor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetBackgroundColor(call_info, object_id, return_value, pColor);
    }
    Post_Process_IDXGISwapChain1_GetBackgroundColor(call_info, object_id, return_value, pColor);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_SetRotation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_MODE_ROTATION Rotation)
{
    Pre_Process_IDXGISwapChain1_SetRotation(call_info, object_id, return_value, Rotation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_SetRotation(call_info, object_id, return_value, Rotation);
    }
    Post_Process_IDXGISwapChain1_SetRotation(call_info, object_id, return_value, Rotation);
}

void Dx12LayerConsumer::Process_IDXGISwapChain1_GetRotation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<DXGI_MODE_ROTATION>* pRotation)
{
    Pre_Process_IDXGISwapChain1_GetRotation(call_info, object_id, return_value, pRotation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain1_GetRotation(call_info, object_id, return_value, pRotation);
    }
    Post_Process_IDXGISwapChain1_GetRotation(call_info, object_id, return_value, pRotation);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_IsWindowedStereoEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_IDXGIFactory2_IsWindowedStereoEnabled(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_IsWindowedStereoEnabled(call_info, object_id, return_value);
    }
    Post_Process_IDXGIFactory2_IsWindowedStereoEnabled(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_CreateSwapChainForHwnd(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        uint64_t hWnd,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC>* pFullscreenDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain)
{
    Pre_Process_IDXGIFactory2_CreateSwapChainForHwnd(call_info, object_id, return_value, pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_CreateSwapChainForHwnd(call_info, object_id, return_value, pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
    }
    Post_Process_IDXGIFactory2_CreateSwapChainForHwnd(call_info, object_id, return_value, pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_CreateSwapChainForCoreWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        format::HandleId pWindow,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain)
{
    Pre_Process_IDXGIFactory2_CreateSwapChainForCoreWindow(call_info, object_id, return_value, pDevice, pWindow, pDesc, pRestrictToOutput, ppSwapChain);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_CreateSwapChainForCoreWindow(call_info, object_id, return_value, pDevice, pWindow, pDesc, pRestrictToOutput, ppSwapChain);
    }
    Post_Process_IDXGIFactory2_CreateSwapChainForCoreWindow(call_info, object_id, return_value, pDevice, pWindow, pDesc, pRestrictToOutput, ppSwapChain);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_GetSharedResourceAdapterLuid(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hResource,
        StructPointerDecoder<Decoded_LUID>* pLuid)
{
    Pre_Process_IDXGIFactory2_GetSharedResourceAdapterLuid(call_info, object_id, return_value, hResource, pLuid);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_GetSharedResourceAdapterLuid(call_info, object_id, return_value, hResource, pLuid);
    }
    Post_Process_IDXGIFactory2_GetSharedResourceAdapterLuid(call_info, object_id, return_value, hResource, pLuid);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_RegisterStereoStatusWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t WindowHandle,
        UINT wMsg,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIFactory2_RegisterStereoStatusWindow(call_info, object_id, return_value, WindowHandle, wMsg, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_RegisterStereoStatusWindow(call_info, object_id, return_value, WindowHandle, wMsg, pdwCookie);
    }
    Post_Process_IDXGIFactory2_RegisterStereoStatusWindow(call_info, object_id, return_value, WindowHandle, wMsg, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_RegisterStereoStatusEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIFactory2_RegisterStereoStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_RegisterStereoStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    }
    Post_Process_IDXGIFactory2_RegisterStereoStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_UnregisterStereoStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie)
{
    Pre_Process_IDXGIFactory2_UnregisterStereoStatus(call_info, object_id, dwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_UnregisterStereoStatus(call_info, object_id, dwCookie);
    }
    Post_Process_IDXGIFactory2_UnregisterStereoStatus(call_info, object_id, dwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_RegisterOcclusionStatusWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t WindowHandle,
        UINT wMsg,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIFactory2_RegisterOcclusionStatusWindow(call_info, object_id, return_value, WindowHandle, wMsg, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_RegisterOcclusionStatusWindow(call_info, object_id, return_value, WindowHandle, wMsg, pdwCookie);
    }
    Post_Process_IDXGIFactory2_RegisterOcclusionStatusWindow(call_info, object_id, return_value, WindowHandle, wMsg, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_RegisterOcclusionStatusEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIFactory2_RegisterOcclusionStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_RegisterOcclusionStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    }
    Post_Process_IDXGIFactory2_RegisterOcclusionStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_UnregisterOcclusionStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie)
{
    Pre_Process_IDXGIFactory2_UnregisterOcclusionStatus(call_info, object_id, dwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_UnregisterOcclusionStatus(call_info, object_id, dwCookie);
    }
    Post_Process_IDXGIFactory2_UnregisterOcclusionStatus(call_info, object_id, dwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory2_CreateSwapChainForComposition(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain)
{
    Pre_Process_IDXGIFactory2_CreateSwapChainForComposition(call_info, object_id, return_value, pDevice, pDesc, pRestrictToOutput, ppSwapChain);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory2_CreateSwapChainForComposition(call_info, object_id, return_value, pDevice, pDesc, pRestrictToOutput, ppSwapChain);
    }
    Post_Process_IDXGIFactory2_CreateSwapChainForComposition(call_info, object_id, return_value, pDevice, pDesc, pRestrictToOutput, ppSwapChain);
}

void Dx12LayerConsumer::Process_IDXGIAdapter2_GetDesc2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC2>* pDesc)
{
    Pre_Process_IDXGIAdapter2_GetDesc2(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter2_GetDesc2(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGIAdapter2_GetDesc2(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutput1_GetDisplayModeList1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT EnumFormat,
        UINT Flags,
        PointerDecoder<UINT>* pNumModes,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC1>* pDesc)
{
    Pre_Process_IDXGIOutput1_GetDisplayModeList1(call_info, object_id, return_value, EnumFormat, Flags, pNumModes, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput1_GetDisplayModeList1(call_info, object_id, return_value, EnumFormat, Flags, pNumModes, pDesc);
    }
    Post_Process_IDXGIOutput1_GetDisplayModeList1(call_info, object_id, return_value, EnumFormat, Flags, pNumModes, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutput1_FindClosestMatchingMode1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC1>* pModeToMatch,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC1>* pClosestMatch,
        format::HandleId pConcernedDevice)
{
    Pre_Process_IDXGIOutput1_FindClosestMatchingMode1(call_info, object_id, return_value, pModeToMatch, pClosestMatch, pConcernedDevice);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput1_FindClosestMatchingMode1(call_info, object_id, return_value, pModeToMatch, pClosestMatch, pConcernedDevice);
    }
    Post_Process_IDXGIOutput1_FindClosestMatchingMode1(call_info, object_id, return_value, pModeToMatch, pClosestMatch, pConcernedDevice);
}

void Dx12LayerConsumer::Process_IDXGIOutput1_GetDisplaySurfaceData1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDestination)
{
    Pre_Process_IDXGIOutput1_GetDisplaySurfaceData1(call_info, object_id, return_value, pDestination);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput1_GetDisplaySurfaceData1(call_info, object_id, return_value, pDestination);
    }
    Post_Process_IDXGIOutput1_GetDisplaySurfaceData1(call_info, object_id, return_value, pDestination);
}

void Dx12LayerConsumer::Process_IDXGIOutput1_DuplicateOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        HandlePointerDecoder<IDXGIOutputDuplication*>* ppOutputDuplication)
{
    Pre_Process_IDXGIOutput1_DuplicateOutput(call_info, object_id, return_value, pDevice, ppOutputDuplication);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput1_DuplicateOutput(call_info, object_id, return_value, pDevice, ppOutputDuplication);
    }
    Post_Process_IDXGIOutput1_DuplicateOutput(call_info, object_id, return_value, pDevice, ppOutputDuplication);
}

/*
** This part is generated from dxgi1_3.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_CreateDXGIFactory2(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        UINT Flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFactory)
{
    Pre_Process_CreateDXGIFactory2(call_info, return_value, Flags, riid, ppFactory);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_CreateDXGIFactory2(call_info, return_value, Flags, riid, ppFactory);
    }
    Post_Process_CreateDXGIFactory2(call_info, return_value, Flags, riid, ppFactory);
}

void Dx12LayerConsumer::Process_DXGIGetDebugInterface1(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        UINT Flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* pDebug)
{
    Pre_Process_DXGIGetDebugInterface1(call_info, return_value, Flags, riid, pDebug);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_DXGIGetDebugInterface1(call_info, return_value, Flags, riid, pDebug);
    }
    Post_Process_DXGIGetDebugInterface1(call_info, return_value, Flags, riid, pDebug);
}

void Dx12LayerConsumer::Process_IDXGIDevice3_Trim(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_IDXGIDevice3_Trim(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice3_Trim(call_info, object_id);
    }
    Post_Process_IDXGIDevice3_Trim(call_info, object_id);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_SetSourceSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Width,
        UINT Height)
{
    Pre_Process_IDXGISwapChain2_SetSourceSize(call_info, object_id, return_value, Width, Height);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_SetSourceSize(call_info, object_id, return_value, Width, Height);
    }
    Post_Process_IDXGISwapChain2_SetSourceSize(call_info, object_id, return_value, Width, Height);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_GetSourceSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pWidth,
        PointerDecoder<UINT>* pHeight)
{
    Pre_Process_IDXGISwapChain2_GetSourceSize(call_info, object_id, return_value, pWidth, pHeight);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_GetSourceSize(call_info, object_id, return_value, pWidth, pHeight);
    }
    Post_Process_IDXGISwapChain2_GetSourceSize(call_info, object_id, return_value, pWidth, pHeight);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_SetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT MaxLatency)
{
    Pre_Process_IDXGISwapChain2_SetMaximumFrameLatency(call_info, object_id, return_value, MaxLatency);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_SetMaximumFrameLatency(call_info, object_id, return_value, MaxLatency);
    }
    Post_Process_IDXGISwapChain2_SetMaximumFrameLatency(call_info, object_id, return_value, MaxLatency);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_GetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pMaxLatency)
{
    Pre_Process_IDXGISwapChain2_GetMaximumFrameLatency(call_info, object_id, return_value, pMaxLatency);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_GetMaximumFrameLatency(call_info, object_id, return_value, pMaxLatency);
    }
    Post_Process_IDXGISwapChain2_GetMaximumFrameLatency(call_info, object_id, return_value, pMaxLatency);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_GetFrameLatencyWaitableObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        uint64_t return_value)
{
    Pre_Process_IDXGISwapChain2_GetFrameLatencyWaitableObject(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_GetFrameLatencyWaitableObject(call_info, object_id, return_value);
    }
    Post_Process_IDXGISwapChain2_GetFrameLatencyWaitableObject(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_SetMatrixTransform(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MATRIX_3X2_F>* pMatrix)
{
    Pre_Process_IDXGISwapChain2_SetMatrixTransform(call_info, object_id, return_value, pMatrix);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_SetMatrixTransform(call_info, object_id, return_value, pMatrix);
    }
    Post_Process_IDXGISwapChain2_SetMatrixTransform(call_info, object_id, return_value, pMatrix);
}

void Dx12LayerConsumer::Process_IDXGISwapChain2_GetMatrixTransform(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MATRIX_3X2_F>* pMatrix)
{
    Pre_Process_IDXGISwapChain2_GetMatrixTransform(call_info, object_id, return_value, pMatrix);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain2_GetMatrixTransform(call_info, object_id, return_value, pMatrix);
    }
    Post_Process_IDXGISwapChain2_GetMatrixTransform(call_info, object_id, return_value, pMatrix);
}

void Dx12LayerConsumer::Process_IDXGIOutput2_SupportsOverlays(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_IDXGIOutput2_SupportsOverlays(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput2_SupportsOverlays(call_info, object_id, return_value);
    }
    Post_Process_IDXGIOutput2_SupportsOverlays(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIFactory3_GetCreationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value)
{
    Pre_Process_IDXGIFactory3_GetCreationFlags(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory3_GetCreationFlags(call_info, object_id, return_value);
    }
    Post_Process_IDXGIFactory3_GetCreationFlags(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_PresentBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT BufferToPresent,
        UINT SyncInterval,
        UINT Flags)
{
    Pre_Process_IDXGIDecodeSwapChain_PresentBuffer(call_info, object_id, return_value, BufferToPresent, SyncInterval, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_PresentBuffer(call_info, object_id, return_value, BufferToPresent, SyncInterval, Flags);
    }
    Post_Process_IDXGIDecodeSwapChain_PresentBuffer(call_info, object_id, return_value, BufferToPresent, SyncInterval, Flags);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_SetSourceRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect)
{
    Pre_Process_IDXGIDecodeSwapChain_SetSourceRect(call_info, object_id, return_value, pRect);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_SetSourceRect(call_info, object_id, return_value, pRect);
    }
    Post_Process_IDXGIDecodeSwapChain_SetSourceRect(call_info, object_id, return_value, pRect);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_SetTargetRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect)
{
    Pre_Process_IDXGIDecodeSwapChain_SetTargetRect(call_info, object_id, return_value, pRect);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_SetTargetRect(call_info, object_id, return_value, pRect);
    }
    Post_Process_IDXGIDecodeSwapChain_SetTargetRect(call_info, object_id, return_value, pRect);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_SetDestSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Width,
        UINT Height)
{
    Pre_Process_IDXGIDecodeSwapChain_SetDestSize(call_info, object_id, return_value, Width, Height);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_SetDestSize(call_info, object_id, return_value, Width, Height);
    }
    Post_Process_IDXGIDecodeSwapChain_SetDestSize(call_info, object_id, return_value, Width, Height);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_GetSourceRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect)
{
    Pre_Process_IDXGIDecodeSwapChain_GetSourceRect(call_info, object_id, return_value, pRect);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_GetSourceRect(call_info, object_id, return_value, pRect);
    }
    Post_Process_IDXGIDecodeSwapChain_GetSourceRect(call_info, object_id, return_value, pRect);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_GetTargetRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect)
{
    Pre_Process_IDXGIDecodeSwapChain_GetTargetRect(call_info, object_id, return_value, pRect);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_GetTargetRect(call_info, object_id, return_value, pRect);
    }
    Post_Process_IDXGIDecodeSwapChain_GetTargetRect(call_info, object_id, return_value, pRect);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_GetDestSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pWidth,
        PointerDecoder<UINT>* pHeight)
{
    Pre_Process_IDXGIDecodeSwapChain_GetDestSize(call_info, object_id, return_value, pWidth, pHeight);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_GetDestSize(call_info, object_id, return_value, pWidth, pHeight);
    }
    Post_Process_IDXGIDecodeSwapChain_GetDestSize(call_info, object_id, return_value, pWidth, pHeight);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_SetColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace)
{
    Pre_Process_IDXGIDecodeSwapChain_SetColorSpace(call_info, object_id, return_value, ColorSpace);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_SetColorSpace(call_info, object_id, return_value, ColorSpace);
    }
    Post_Process_IDXGIDecodeSwapChain_SetColorSpace(call_info, object_id, return_value, ColorSpace);
}

void Dx12LayerConsumer::Process_IDXGIDecodeSwapChain_GetColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS return_value)
{
    Pre_Process_IDXGIDecodeSwapChain_GetColorSpace(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDecodeSwapChain_GetColorSpace(call_info, object_id, return_value);
    }
    Post_Process_IDXGIDecodeSwapChain_GetColorSpace(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        uint64_t hSurface,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain)
{
    Pre_Process_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle(call_info, object_id, return_value, pDevice, hSurface, pDesc, pRestrictToOutput, ppSwapChain);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle(call_info, object_id, return_value, pDevice, hSurface, pDesc, pRestrictToOutput, ppSwapChain);
    }
    Post_Process_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle(call_info, object_id, return_value, pDevice, hSurface, pDesc, pRestrictToOutput, ppSwapChain);
}

void Dx12LayerConsumer::Process_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        uint64_t hSurface,
        StructPointerDecoder<Decoded_DXGI_DECODE_SWAP_CHAIN_DESC>* pDesc,
        format::HandleId pYuvDecodeBuffers,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGIDecodeSwapChain*>* ppSwapChain)
{
    Pre_Process_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle(call_info, object_id, return_value, pDevice, hSurface, pDesc, pYuvDecodeBuffers, pRestrictToOutput, ppSwapChain);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle(call_info, object_id, return_value, pDevice, hSurface, pDesc, pYuvDecodeBuffers, pRestrictToOutput, ppSwapChain);
    }
    Post_Process_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle(call_info, object_id, return_value, pDevice, hSurface, pDesc, pYuvDecodeBuffers, pRestrictToOutput, ppSwapChain);
}

void Dx12LayerConsumer::Process_IDXGISwapChainMedia_GetFrameStatisticsMedia(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_FRAME_STATISTICS_MEDIA>* pStats)
{
    Pre_Process_IDXGISwapChainMedia_GetFrameStatisticsMedia(call_info, object_id, return_value, pStats);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChainMedia_GetFrameStatisticsMedia(call_info, object_id, return_value, pStats);
    }
    Post_Process_IDXGISwapChainMedia_GetFrameStatisticsMedia(call_info, object_id, return_value, pStats);
}

void Dx12LayerConsumer::Process_IDXGISwapChainMedia_SetPresentDuration(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Duration)
{
    Pre_Process_IDXGISwapChainMedia_SetPresentDuration(call_info, object_id, return_value, Duration);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChainMedia_SetPresentDuration(call_info, object_id, return_value, Duration);
    }
    Post_Process_IDXGISwapChainMedia_SetPresentDuration(call_info, object_id, return_value, Duration);
}

void Dx12LayerConsumer::Process_IDXGISwapChainMedia_CheckPresentDurationSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT DesiredPresentDuration,
        PointerDecoder<UINT>* pClosestSmallerPresentDuration,
        PointerDecoder<UINT>* pClosestLargerPresentDuration)
{
    Pre_Process_IDXGISwapChainMedia_CheckPresentDurationSupport(call_info, object_id, return_value, DesiredPresentDuration, pClosestSmallerPresentDuration, pClosestLargerPresentDuration);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChainMedia_CheckPresentDurationSupport(call_info, object_id, return_value, DesiredPresentDuration, pClosestSmallerPresentDuration, pClosestLargerPresentDuration);
    }
    Post_Process_IDXGISwapChainMedia_CheckPresentDurationSupport(call_info, object_id, return_value, DesiredPresentDuration, pClosestSmallerPresentDuration, pClosestLargerPresentDuration);
}

void Dx12LayerConsumer::Process_IDXGIOutput3_CheckOverlaySupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT EnumFormat,
        format::HandleId pConcernedDevice,
        PointerDecoder<UINT>* pFlags)
{
    Pre_Process_IDXGIOutput3_CheckOverlaySupport(call_info, object_id, return_value, EnumFormat, pConcernedDevice, pFlags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput3_CheckOverlaySupport(call_info, object_id, return_value, EnumFormat, pConcernedDevice, pFlags);
    }
    Post_Process_IDXGIOutput3_CheckOverlaySupport(call_info, object_id, return_value, EnumFormat, pConcernedDevice, pFlags);
}

/*
** This part is generated from dxgi1_4.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_IDXGISwapChain3_GetCurrentBackBufferIndex(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value)
{
    Pre_Process_IDXGISwapChain3_GetCurrentBackBufferIndex(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain3_GetCurrentBackBufferIndex(call_info, object_id, return_value);
    }
    Post_Process_IDXGISwapChain3_GetCurrentBackBufferIndex(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IDXGISwapChain3_CheckColorSpaceSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_COLOR_SPACE_TYPE ColorSpace,
        PointerDecoder<UINT>* pColorSpaceSupport)
{
    Pre_Process_IDXGISwapChain3_CheckColorSpaceSupport(call_info, object_id, return_value, ColorSpace, pColorSpaceSupport);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain3_CheckColorSpaceSupport(call_info, object_id, return_value, ColorSpace, pColorSpaceSupport);
    }
    Post_Process_IDXGISwapChain3_CheckColorSpaceSupport(call_info, object_id, return_value, ColorSpace, pColorSpaceSupport);
}

void Dx12LayerConsumer::Process_IDXGISwapChain3_SetColorSpace1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_COLOR_SPACE_TYPE ColorSpace)
{
    Pre_Process_IDXGISwapChain3_SetColorSpace1(call_info, object_id, return_value, ColorSpace);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain3_SetColorSpace1(call_info, object_id, return_value, ColorSpace);
    }
    Post_Process_IDXGISwapChain3_SetColorSpace1(call_info, object_id, return_value, ColorSpace);
}

void Dx12LayerConsumer::Process_IDXGISwapChain3_ResizeBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT BufferCount,
        UINT Width,
        UINT Height,
        DXGI_FORMAT Format,
        UINT SwapChainFlags,
        PointerDecoder<UINT>* pCreationNodeMask,
        HandlePointerDecoder<IUnknown*>* ppPresentQueue)
{
    Pre_Process_IDXGISwapChain3_ResizeBuffers1(call_info, object_id, return_value, BufferCount, Width, Height, Format, SwapChainFlags, pCreationNodeMask, ppPresentQueue);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain3_ResizeBuffers1(call_info, object_id, return_value, BufferCount, Width, Height, Format, SwapChainFlags, pCreationNodeMask, ppPresentQueue);
    }
    Post_Process_IDXGISwapChain3_ResizeBuffers1(call_info, object_id, return_value, BufferCount, Width, Height, Format, SwapChainFlags, pCreationNodeMask, ppPresentQueue);
}

void Dx12LayerConsumer::Process_IDXGIOutput4_CheckOverlayColorSpaceSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT Format,
        DXGI_COLOR_SPACE_TYPE ColorSpace,
        format::HandleId pConcernedDevice,
        PointerDecoder<UINT>* pFlags)
{
    Pre_Process_IDXGIOutput4_CheckOverlayColorSpaceSupport(call_info, object_id, return_value, Format, ColorSpace, pConcernedDevice, pFlags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput4_CheckOverlayColorSpaceSupport(call_info, object_id, return_value, Format, ColorSpace, pConcernedDevice, pFlags);
    }
    Post_Process_IDXGIOutput4_CheckOverlayColorSpaceSupport(call_info, object_id, return_value, Format, ColorSpace, pConcernedDevice, pFlags);
}

void Dx12LayerConsumer::Process_IDXGIFactory4_EnumAdapterByLuid(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_LUID AdapterLuid,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvAdapter)
{
    Pre_Process_IDXGIFactory4_EnumAdapterByLuid(call_info, object_id, return_value, AdapterLuid, riid, ppvAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory4_EnumAdapterByLuid(call_info, object_id, return_value, AdapterLuid, riid, ppvAdapter);
    }
    Post_Process_IDXGIFactory4_EnumAdapterByLuid(call_info, object_id, return_value, AdapterLuid, riid, ppvAdapter);
}

void Dx12LayerConsumer::Process_IDXGIFactory4_EnumWarpAdapter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvAdapter)
{
    Pre_Process_IDXGIFactory4_EnumWarpAdapter(call_info, object_id, return_value, riid, ppvAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory4_EnumWarpAdapter(call_info, object_id, return_value, riid, ppvAdapter);
    }
    Post_Process_IDXGIFactory4_EnumWarpAdapter(call_info, object_id, return_value, riid, ppvAdapter);
}

void Dx12LayerConsumer::Process_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    }
    Post_Process_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent(call_info, object_id, return_value, hEvent, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie)
{
    Pre_Process_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus(call_info, object_id, dwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus(call_info, object_id, dwCookie);
    }
    Post_Process_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus(call_info, object_id, dwCookie);
}

void Dx12LayerConsumer::Process_IDXGIAdapter3_QueryVideoMemoryInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NodeIndex,
        DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
        StructPointerDecoder<Decoded_DXGI_QUERY_VIDEO_MEMORY_INFO>* pVideoMemoryInfo)
{
    Pre_Process_IDXGIAdapter3_QueryVideoMemoryInfo(call_info, object_id, return_value, NodeIndex, MemorySegmentGroup, pVideoMemoryInfo);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter3_QueryVideoMemoryInfo(call_info, object_id, return_value, NodeIndex, MemorySegmentGroup, pVideoMemoryInfo);
    }
    Post_Process_IDXGIAdapter3_QueryVideoMemoryInfo(call_info, object_id, return_value, NodeIndex, MemorySegmentGroup, pVideoMemoryInfo);
}

void Dx12LayerConsumer::Process_IDXGIAdapter3_SetVideoMemoryReservation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NodeIndex,
        DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
        UINT64 Reservation)
{
    Pre_Process_IDXGIAdapter3_SetVideoMemoryReservation(call_info, object_id, return_value, NodeIndex, MemorySegmentGroup, Reservation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter3_SetVideoMemoryReservation(call_info, object_id, return_value, NodeIndex, MemorySegmentGroup, Reservation);
    }
    Post_Process_IDXGIAdapter3_SetVideoMemoryReservation(call_info, object_id, return_value, NodeIndex, MemorySegmentGroup, Reservation);
}

void Dx12LayerConsumer::Process_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    }
    Post_Process_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent(call_info, object_id, return_value, hEvent, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie)
{
    Pre_Process_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification(call_info, object_id, dwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification(call_info, object_id, dwCookie);
    }
    Post_Process_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification(call_info, object_id, dwCookie);
}

/*
** This part is generated from dxgi1_5.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_IDXGIOutput5_DuplicateOutput1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        UINT Flags,
        UINT SupportedFormatsCount,
        PointerDecoder<DXGI_FORMAT>* pSupportedFormats,
        HandlePointerDecoder<IDXGIOutputDuplication*>* ppOutputDuplication)
{
    Pre_Process_IDXGIOutput5_DuplicateOutput1(call_info, object_id, return_value, pDevice, Flags, SupportedFormatsCount, pSupportedFormats, ppOutputDuplication);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput5_DuplicateOutput1(call_info, object_id, return_value, pDevice, Flags, SupportedFormatsCount, pSupportedFormats, ppOutputDuplication);
    }
    Post_Process_IDXGIOutput5_DuplicateOutput1(call_info, object_id, return_value, pDevice, Flags, SupportedFormatsCount, pSupportedFormats, ppOutputDuplication);
}

void Dx12LayerConsumer::Process_IDXGISwapChain4_SetHDRMetaData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_HDR_METADATA_TYPE Type,
        UINT Size,
        PointerDecoder<uint8_t>* pMetaData)
{
    Pre_Process_IDXGISwapChain4_SetHDRMetaData(call_info, object_id, return_value, Type, Size, pMetaData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGISwapChain4_SetHDRMetaData(call_info, object_id, return_value, Type, Size, pMetaData);
    }
    Post_Process_IDXGISwapChain4_SetHDRMetaData(call_info, object_id, return_value, Type, Size, pMetaData);
}

void Dx12LayerConsumer::Process_IDXGIDevice4_OfferResources1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        DXGI_OFFER_RESOURCE_PRIORITY Priority,
        UINT Flags)
{
    Pre_Process_IDXGIDevice4_OfferResources1(call_info, object_id, return_value, NumResources, ppResources, Priority, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice4_OfferResources1(call_info, object_id, return_value, NumResources, ppResources, Priority, Flags);
    }
    Post_Process_IDXGIDevice4_OfferResources1(call_info, object_id, return_value, NumResources, ppResources, Priority, Flags);
}

void Dx12LayerConsumer::Process_IDXGIDevice4_ReclaimResources1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        PointerDecoder<DXGI_RECLAIM_RESOURCE_RESULTS>* pResults)
{
    Pre_Process_IDXGIDevice4_ReclaimResources1(call_info, object_id, return_value, NumResources, ppResources, pResults);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIDevice4_ReclaimResources1(call_info, object_id, return_value, NumResources, ppResources, pResults);
    }
    Post_Process_IDXGIDevice4_ReclaimResources1(call_info, object_id, return_value, NumResources, ppResources, pResults);
}

/*
** This part is generated from dxgi1_6.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_DXGIDeclareAdapterRemovalSupport(
        const ApiCallInfo& call_info,
        HRESULT return_value)
{
    Pre_Process_DXGIDeclareAdapterRemovalSupport(call_info, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_DXGIDeclareAdapterRemovalSupport(call_info, return_value);
    }
    Post_Process_DXGIDeclareAdapterRemovalSupport(call_info, return_value);
}

void Dx12LayerConsumer::Process_IDXGIAdapter4_GetDesc3(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC3>* pDesc)
{
    Pre_Process_IDXGIAdapter4_GetDesc3(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIAdapter4_GetDesc3(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGIAdapter4_GetDesc3(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutput6_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_OUTPUT_DESC1>* pDesc)
{
    Pre_Process_IDXGIOutput6_GetDesc1(call_info, object_id, return_value, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput6_GetDesc1(call_info, object_id, return_value, pDesc);
    }
    Post_Process_IDXGIOutput6_GetDesc1(call_info, object_id, return_value, pDesc);
}

void Dx12LayerConsumer::Process_IDXGIOutput6_CheckHardwareCompositionSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pFlags)
{
    Pre_Process_IDXGIOutput6_CheckHardwareCompositionSupport(call_info, object_id, return_value, pFlags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIOutput6_CheckHardwareCompositionSupport(call_info, object_id, return_value, pFlags);
    }
    Post_Process_IDXGIOutput6_CheckHardwareCompositionSupport(call_info, object_id, return_value, pFlags);
}

void Dx12LayerConsumer::Process_IDXGIFactory6_EnumAdapterByGpuPreference(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Adapter,
        DXGI_GPU_PREFERENCE GpuPreference,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvAdapter)
{
    Pre_Process_IDXGIFactory6_EnumAdapterByGpuPreference(call_info, object_id, return_value, Adapter, GpuPreference, riid, ppvAdapter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory6_EnumAdapterByGpuPreference(call_info, object_id, return_value, Adapter, GpuPreference, riid, ppvAdapter);
    }
    Post_Process_IDXGIFactory6_EnumAdapterByGpuPreference(call_info, object_id, return_value, Adapter, GpuPreference, riid, ppvAdapter);
}

void Dx12LayerConsumer::Process_IDXGIFactory7_RegisterAdaptersChangedEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie)
{
    Pre_Process_IDXGIFactory7_RegisterAdaptersChangedEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory7_RegisterAdaptersChangedEvent(call_info, object_id, return_value, hEvent, pdwCookie);
    }
    Post_Process_IDXGIFactory7_RegisterAdaptersChangedEvent(call_info, object_id, return_value, hEvent, pdwCookie);
}

void Dx12LayerConsumer::Process_IDXGIFactory7_UnregisterAdaptersChangedEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DWORD dwCookie)
{
    Pre_Process_IDXGIFactory7_UnregisterAdaptersChangedEvent(call_info, object_id, return_value, dwCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IDXGIFactory7_UnregisterAdaptersChangedEvent(call_info, object_id, return_value, dwCookie);
    }
    Post_Process_IDXGIFactory7_UnregisterAdaptersChangedEvent(call_info, object_id, return_value, dwCookie);
}

/*
** This part is generated from d3d12.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_D3D12SerializeRootSignature(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_ROOT_SIGNATURE_DESC>* pRootSignature,
        D3D_ROOT_SIGNATURE_VERSION Version,
        HandlePointerDecoder<ID3D10Blob*>* ppBlob,
        HandlePointerDecoder<ID3D10Blob*>* ppErrorBlob)
{
    Pre_Process_D3D12SerializeRootSignature(call_info, return_value, pRootSignature, Version, ppBlob, ppErrorBlob);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12SerializeRootSignature(call_info, return_value, pRootSignature, Version, ppBlob, ppErrorBlob);
    }
    Post_Process_D3D12SerializeRootSignature(call_info, return_value, pRootSignature, Version, ppBlob, ppErrorBlob);
}

void Dx12LayerConsumer::Process_D3D12SerializeVersionedRootSignature(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* pRootSignature,
        HandlePointerDecoder<ID3D10Blob*>* ppBlob,
        HandlePointerDecoder<ID3D10Blob*>* ppErrorBlob)
{
    Pre_Process_D3D12SerializeVersionedRootSignature(call_info, return_value, pRootSignature, ppBlob, ppErrorBlob);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12SerializeVersionedRootSignature(call_info, return_value, pRootSignature, ppBlob, ppErrorBlob);
    }
    Post_Process_D3D12SerializeVersionedRootSignature(call_info, return_value, pRootSignature, ppBlob, ppErrorBlob);
}

void Dx12LayerConsumer::Process_D3D12CreateVersionedRootSignatureDeserializer(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pSrcData,
        SIZE_T SrcDataSizeInBytes,
        Decoded_GUID pRootSignatureDeserializerInterface,
        HandlePointerDecoder<void*>* ppRootSignatureDeserializer)
{
    Pre_Process_D3D12CreateVersionedRootSignatureDeserializer(call_info, return_value, pSrcData, SrcDataSizeInBytes, pRootSignatureDeserializerInterface, ppRootSignatureDeserializer);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12CreateVersionedRootSignatureDeserializer(call_info, return_value, pSrcData, SrcDataSizeInBytes, pRootSignatureDeserializerInterface, ppRootSignatureDeserializer);
    }
    Post_Process_D3D12CreateVersionedRootSignatureDeserializer(call_info, return_value, pSrcData, SrcDataSizeInBytes, pRootSignatureDeserializerInterface, ppRootSignatureDeserializer);
}

void Dx12LayerConsumer::Process_D3D12CreateDevice(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        format::HandleId pAdapter,
        D3D_FEATURE_LEVEL MinimumFeatureLevel,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppDevice)
{
    Pre_Process_D3D12CreateDevice(call_info, return_value, pAdapter, MinimumFeatureLevel, riid, ppDevice);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12CreateDevice(call_info, return_value, pAdapter, MinimumFeatureLevel, riid, ppDevice);
    }
    Post_Process_D3D12CreateDevice(call_info, return_value, pAdapter, MinimumFeatureLevel, riid, ppDevice);
}

void Dx12LayerConsumer::Process_D3D12GetDebugInterface(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDebug)
{
    Pre_Process_D3D12GetDebugInterface(call_info, return_value, riid, ppvDebug);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12GetDebugInterface(call_info, return_value, riid, ppvDebug);
    }
    Post_Process_D3D12GetDebugInterface(call_info, return_value, riid, ppvDebug);
}

void Dx12LayerConsumer::Process_D3D12EnableExperimentalFeatures(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        UINT NumFeatures,
        StructPointerDecoder<Decoded_GUID>* pIIDs,
        PointerDecoder<uint8_t>* pConfigurationStructs,
        PointerDecoder<UINT>* pConfigurationStructSizes)
{
    Pre_Process_D3D12EnableExperimentalFeatures(call_info, return_value, NumFeatures, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12EnableExperimentalFeatures(call_info, return_value, NumFeatures, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
    }
    Post_Process_D3D12EnableExperimentalFeatures(call_info, return_value, NumFeatures, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
}

void Dx12LayerConsumer::Process_D3D12GetInterface(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID rclsid,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDebug)
{
    Pre_Process_D3D12GetInterface(call_info, return_value, rclsid, riid, ppvDebug);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_D3D12GetInterface(call_info, return_value, rclsid, riid, ppvDebug);
    }
    Post_Process_D3D12GetInterface(call_info, return_value, rclsid, riid, ppvDebug);
}

void Dx12LayerConsumer::Process_ID3D12Object_GetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        PointerDecoder<UINT>* pDataSize,
        PointerDecoder<uint8_t>* pData)
{
    Pre_Process_ID3D12Object_GetPrivateData(call_info, object_id, return_value, guid, pDataSize, pData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Object_GetPrivateData(call_info, object_id, return_value, guid, pDataSize, pData);
    }
    Post_Process_ID3D12Object_GetPrivateData(call_info, object_id, return_value, guid, pDataSize, pData);
}

void Dx12LayerConsumer::Process_ID3D12Object_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData)
{
    Pre_Process_ID3D12Object_SetPrivateData(call_info, object_id, return_value, guid, DataSize, pData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Object_SetPrivateData(call_info, object_id, return_value, guid, DataSize, pData);
    }
    Post_Process_ID3D12Object_SetPrivateData(call_info, object_id, return_value, guid, DataSize, pData);
}

void Dx12LayerConsumer::Process_ID3D12Object_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        format::HandleId pData)
{
    Pre_Process_ID3D12Object_SetPrivateDataInterface(call_info, object_id, return_value, guid, pData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Object_SetPrivateDataInterface(call_info, object_id, return_value, guid, pData);
    }
    Post_Process_ID3D12Object_SetPrivateDataInterface(call_info, object_id, return_value, guid, pData);
}

void Dx12LayerConsumer::Process_ID3D12Object_SetName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* Name)
{
    Pre_Process_ID3D12Object_SetName(call_info, object_id, return_value, Name);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Object_SetName(call_info, object_id, return_value, Name);
    }
    Post_Process_ID3D12Object_SetName(call_info, object_id, return_value, Name);
}

void Dx12LayerConsumer::Process_ID3D12DeviceChild_GetDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDevice)
{
    Pre_Process_ID3D12DeviceChild_GetDevice(call_info, object_id, return_value, riid, ppvDevice);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceChild_GetDevice(call_info, object_id, return_value, riid, ppvDevice);
    }
    Post_Process_ID3D12DeviceChild_GetDevice(call_info, object_id, return_value, riid, ppvDevice);
}

void Dx12LayerConsumer::Process_ID3D12RootSignatureDeserializer_GetRootSignatureDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_ROOT_SIGNATURE_DESC>* return_value)
{
    Pre_Process_ID3D12RootSignatureDeserializer_GetRootSignatureDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12RootSignatureDeserializer_GetRootSignatureDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12RootSignatureDeserializer_GetRootSignatureDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D_ROOT_SIGNATURE_VERSION convertToVersion,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* ppDesc)
{
    Pre_Process_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion(call_info, object_id, return_value, convertToVersion, ppDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion(call_info, object_id, return_value, convertToVersion, ppDesc);
    }
    Post_Process_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion(call_info, object_id, return_value, convertToVersion, ppDesc);
}

void Dx12LayerConsumer::Process_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* return_value)
{
    Pre_Process_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Heap_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_HEAP_DESC return_value)
{
    Pre_Process_ID3D12Heap_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Heap_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Heap_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Resource_Map(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Subresource,
        StructPointerDecoder<Decoded_D3D12_RANGE>* pReadRange,
        PointerDecoder<uint64_t, void*>* ppData)
{
    Pre_Process_ID3D12Resource_Map(call_info, object_id, return_value, Subresource, pReadRange, ppData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource_Map(call_info, object_id, return_value, Subresource, pReadRange, ppData);
    }
    Post_Process_ID3D12Resource_Map(call_info, object_id, return_value, Subresource, pReadRange, ppData);
}

void Dx12LayerConsumer::Process_ID3D12Resource_Unmap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Subresource,
        StructPointerDecoder<Decoded_D3D12_RANGE>* pWrittenRange)
{
    Pre_Process_ID3D12Resource_Unmap(call_info, object_id, Subresource, pWrittenRange);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource_Unmap(call_info, object_id, Subresource, pWrittenRange);
    }
    Post_Process_ID3D12Resource_Unmap(call_info, object_id, Subresource, pWrittenRange);
}

void Dx12LayerConsumer::Process_ID3D12Resource_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_DESC return_value)
{
    Pre_Process_ID3D12Resource_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Resource_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Resource_GetGPUVirtualAddress(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_VIRTUAL_ADDRESS return_value)
{
    Pre_Process_ID3D12Resource_GetGPUVirtualAddress(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource_GetGPUVirtualAddress(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Resource_GetGPUVirtualAddress(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Resource_ReadFromSubresource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t pDstData,
        UINT DstRowPitch,
        UINT DstDepthPitch,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_D3D12_BOX>* pSrcBox)
{
    Pre_Process_ID3D12Resource_ReadFromSubresource(call_info, object_id, return_value, pDstData, DstRowPitch, DstDepthPitch, SrcSubresource, pSrcBox);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource_ReadFromSubresource(call_info, object_id, return_value, pDstData, DstRowPitch, DstDepthPitch, SrcSubresource, pSrcBox);
    }
    Post_Process_ID3D12Resource_ReadFromSubresource(call_info, object_id, return_value, pDstData, DstRowPitch, DstDepthPitch, SrcSubresource, pSrcBox);
}

void Dx12LayerConsumer::Process_ID3D12Resource_GetHeapProperties(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        PointerDecoder<D3D12_HEAP_FLAGS>* pHeapFlags)
{
    Pre_Process_ID3D12Resource_GetHeapProperties(call_info, object_id, return_value, pHeapProperties, pHeapFlags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource_GetHeapProperties(call_info, object_id, return_value, pHeapProperties, pHeapFlags);
    }
    Post_Process_ID3D12Resource_GetHeapProperties(call_info, object_id, return_value, pHeapProperties, pHeapFlags);
}

void Dx12LayerConsumer::Process_ID3D12CommandAllocator_Reset(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12CommandAllocator_Reset(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandAllocator_Reset(call_info, object_id, return_value);
    }
    Post_Process_ID3D12CommandAllocator_Reset(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Fence_GetCompletedValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12Fence_GetCompletedValue(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Fence_GetCompletedValue(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Fence_GetCompletedValue(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Fence_SetEventOnCompletion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Value,
        uint64_t hEvent)
{
    Pre_Process_ID3D12Fence_SetEventOnCompletion(call_info, object_id, return_value, Value, hEvent);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Fence_SetEventOnCompletion(call_info, object_id, return_value, Value, hEvent);
    }
    Post_Process_ID3D12Fence_SetEventOnCompletion(call_info, object_id, return_value, Value, hEvent);
}

void Dx12LayerConsumer::Process_ID3D12Fence_Signal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Value)
{
    Pre_Process_ID3D12Fence_Signal(call_info, object_id, return_value, Value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Fence_Signal(call_info, object_id, return_value, Value);
    }
    Post_Process_ID3D12Fence_Signal(call_info, object_id, return_value, Value);
}

void Dx12LayerConsumer::Process_ID3D12Fence1_GetCreationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_FENCE_FLAGS return_value)
{
    Pre_Process_ID3D12Fence1_GetCreationFlags(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Fence1_GetCreationFlags(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Fence1_GetCreationFlags(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12PipelineState_GetCachedBlob(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<ID3D10Blob*>* ppBlob)
{
    Pre_Process_ID3D12PipelineState_GetCachedBlob(call_info, object_id, return_value, ppBlob);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineState_GetCachedBlob(call_info, object_id, return_value, ppBlob);
    }
    Post_Process_ID3D12PipelineState_GetCachedBlob(call_info, object_id, return_value, ppBlob);
}

void Dx12LayerConsumer::Process_ID3D12DescriptorHeap_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_DESCRIPTOR_HEAP_DESC return_value)
{
    Pre_Process_ID3D12DescriptorHeap_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DescriptorHeap_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DescriptorHeap_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE return_value)
{
    Pre_Process_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE return_value)
{
    Pre_Process_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12CommandList_GetType(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_COMMAND_LIST_TYPE return_value)
{
    Pre_Process_ID3D12CommandList_GetType(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandList_GetType(call_info, object_id, return_value);
    }
    Post_Process_ID3D12CommandList_GetType(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_Close(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12GraphicsCommandList_Close(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_Close(call_info, object_id, return_value);
    }
    Post_Process_ID3D12GraphicsCommandList_Close(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_Reset(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pAllocator,
        format::HandleId pInitialState)
{
    Pre_Process_ID3D12GraphicsCommandList_Reset(call_info, object_id, return_value, pAllocator, pInitialState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_Reset(call_info, object_id, return_value, pAllocator, pInitialState);
    }
    Post_Process_ID3D12GraphicsCommandList_Reset(call_info, object_id, return_value, pAllocator, pInitialState);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ClearState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pPipelineState)
{
    Pre_Process_ID3D12GraphicsCommandList_ClearState(call_info, object_id, pPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ClearState(call_info, object_id, pPipelineState);
    }
    Post_Process_ID3D12GraphicsCommandList_ClearState(call_info, object_id, pPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_DrawInstanced(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT VertexCountPerInstance,
        UINT InstanceCount,
        UINT StartVertexLocation,
        UINT StartInstanceLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_DrawInstanced(call_info, object_id, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_DrawInstanced(call_info, object_id, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_DrawInstanced(call_info, object_id, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_DrawIndexedInstanced(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT IndexCountPerInstance,
        UINT InstanceCount,
        UINT StartIndexLocation,
        INT BaseVertexLocation,
        UINT StartInstanceLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_DrawIndexedInstanced(call_info, object_id, IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_DrawIndexedInstanced(call_info, object_id, IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_DrawIndexedInstanced(call_info, object_id, IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_Dispatch(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT ThreadGroupCountX,
        UINT ThreadGroupCountY,
        UINT ThreadGroupCountZ)
{
    Pre_Process_ID3D12GraphicsCommandList_Dispatch(call_info, object_id, ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_Dispatch(call_info, object_id, ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
    }
    Post_Process_ID3D12GraphicsCommandList_Dispatch(call_info, object_id, ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_CopyBufferRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT64 DstOffset,
        format::HandleId pSrcBuffer,
        UINT64 SrcOffset,
        UINT64 NumBytes)
{
    Pre_Process_ID3D12GraphicsCommandList_CopyBufferRegion(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, NumBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_CopyBufferRegion(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, NumBytes);
    }
    Post_Process_ID3D12GraphicsCommandList_CopyBufferRegion(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, NumBytes);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_CopyTextureRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pDst,
        UINT DstX,
        UINT DstY,
        UINT DstZ,
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pSrc,
        StructPointerDecoder<Decoded_D3D12_BOX>* pSrcBox)
{
    Pre_Process_ID3D12GraphicsCommandList_CopyTextureRegion(call_info, object_id, pDst, DstX, DstY, DstZ, pSrc, pSrcBox);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_CopyTextureRegion(call_info, object_id, pDst, DstX, DstY, DstZ, pSrc, pSrcBox);
    }
    Post_Process_ID3D12GraphicsCommandList_CopyTextureRegion(call_info, object_id, pDst, DstX, DstY, DstZ, pSrc, pSrcBox);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_CopyResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        format::HandleId pSrcResource)
{
    Pre_Process_ID3D12GraphicsCommandList_CopyResource(call_info, object_id, pDstResource, pSrcResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_CopyResource(call_info, object_id, pDstResource, pSrcResource);
    }
    Post_Process_ID3D12GraphicsCommandList_CopyResource(call_info, object_id, pDstResource, pSrcResource);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_CopyTiles(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pTileRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>* pTileRegionSize,
        format::HandleId pBuffer,
        UINT64 BufferStartOffsetInBytes,
        D3D12_TILE_COPY_FLAGS Flags)
{
    Pre_Process_ID3D12GraphicsCommandList_CopyTiles(call_info, object_id, pTiledResource, pTileRegionStartCoordinate, pTileRegionSize, pBuffer, BufferStartOffsetInBytes, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_CopyTiles(call_info, object_id, pTiledResource, pTileRegionStartCoordinate, pTileRegionSize, pBuffer, BufferStartOffsetInBytes, Flags);
    }
    Post_Process_ID3D12GraphicsCommandList_CopyTiles(call_info, object_id, pTiledResource, pTileRegionStartCoordinate, pTileRegionSize, pBuffer, BufferStartOffsetInBytes, Flags);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ResolveSubresource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        DXGI_FORMAT Format)
{
    Pre_Process_ID3D12GraphicsCommandList_ResolveSubresource(call_info, object_id, pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ResolveSubresource(call_info, object_id, pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
    }
    Post_Process_ID3D12GraphicsCommandList_ResolveSubresource(call_info, object_id, pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_IASetPrimitiveTopology(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D_PRIMITIVE_TOPOLOGY PrimitiveTopology)
{
    Pre_Process_ID3D12GraphicsCommandList_IASetPrimitiveTopology(call_info, object_id, PrimitiveTopology);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_IASetPrimitiveTopology(call_info, object_id, PrimitiveTopology);
    }
    Post_Process_ID3D12GraphicsCommandList_IASetPrimitiveTopology(call_info, object_id, PrimitiveTopology);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_RSSetViewports(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumViewports,
        StructPointerDecoder<Decoded_D3D12_VIEWPORT>* pViewports)
{
    Pre_Process_ID3D12GraphicsCommandList_RSSetViewports(call_info, object_id, NumViewports, pViewports);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_RSSetViewports(call_info, object_id, NumViewports, pViewports);
    }
    Post_Process_ID3D12GraphicsCommandList_RSSetViewports(call_info, object_id, NumViewports, pViewports);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_RSSetScissorRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
{
    Pre_Process_ID3D12GraphicsCommandList_RSSetScissorRects(call_info, object_id, NumRects, pRects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_RSSetScissorRects(call_info, object_id, NumRects, pRects);
    }
    Post_Process_ID3D12GraphicsCommandList_RSSetScissorRects(call_info, object_id, NumRects, pRects);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_OMSetBlendFactor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<FLOAT> BlendFactor [4])
{
    Pre_Process_ID3D12GraphicsCommandList_OMSetBlendFactor(call_info, object_id, BlendFactor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_OMSetBlendFactor(call_info, object_id, BlendFactor);
    }
    Post_Process_ID3D12GraphicsCommandList_OMSetBlendFactor(call_info, object_id, BlendFactor);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_OMSetStencilRef(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StencilRef)
{
    Pre_Process_ID3D12GraphicsCommandList_OMSetStencilRef(call_info, object_id, StencilRef);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_OMSetStencilRef(call_info, object_id, StencilRef);
    }
    Post_Process_ID3D12GraphicsCommandList_OMSetStencilRef(call_info, object_id, StencilRef);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetPipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pPipelineState)
{
    Pre_Process_ID3D12GraphicsCommandList_SetPipelineState(call_info, object_id, pPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetPipelineState(call_info, object_id, pPipelineState);
    }
    Post_Process_ID3D12GraphicsCommandList_SetPipelineState(call_info, object_id, pPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ResourceBarrier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumBarriers,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_BARRIER>* pBarriers)
{
    Pre_Process_ID3D12GraphicsCommandList_ResourceBarrier(call_info, object_id, NumBarriers, pBarriers);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ResourceBarrier(call_info, object_id, NumBarriers, pBarriers);
    }
    Post_Process_ID3D12GraphicsCommandList_ResourceBarrier(call_info, object_id, NumBarriers, pBarriers);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ExecuteBundle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCommandList)
{
    Pre_Process_ID3D12GraphicsCommandList_ExecuteBundle(call_info, object_id, pCommandList);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ExecuteBundle(call_info, object_id, pCommandList);
    }
    Post_Process_ID3D12GraphicsCommandList_ExecuteBundle(call_info, object_id, pCommandList);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumDescriptorHeaps,
        HandlePointerDecoder<ID3D12DescriptorHeap*>* ppDescriptorHeaps)
{
    Pre_Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(call_info, object_id, NumDescriptorHeaps, ppDescriptorHeaps);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(call_info, object_id, NumDescriptorHeaps, ppDescriptorHeaps);
    }
    Post_Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(call_info, object_id, NumDescriptorHeaps, ppDescriptorHeaps);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pRootSignature)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootSignature(call_info, object_id, pRootSignature);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRootSignature(call_info, object_id, pRootSignature);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootSignature(call_info, object_id, pRootSignature);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pRootSignature)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootSignature(call_info, object_id, pRootSignature);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRootSignature(call_info, object_id, pRootSignature);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootSignature(call_info, object_id, pRootSignature);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(call_info, object_id, RootParameterIndex, BaseDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(call_info, object_id, RootParameterIndex, BaseDescriptor);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(call_info, object_id, RootParameterIndex, BaseDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(call_info, object_id, RootParameterIndex, BaseDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(call_info, object_id, RootParameterIndex, BaseDescriptor);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(call_info, object_id, RootParameterIndex, BaseDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT SrcData,
        UINT DestOffsetIn32BitValues)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(call_info, object_id, RootParameterIndex, SrcData, DestOffsetIn32BitValues);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(call_info, object_id, RootParameterIndex, SrcData, DestOffsetIn32BitValues);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(call_info, object_id, RootParameterIndex, SrcData, DestOffsetIn32BitValues);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT SrcData,
        UINT DestOffsetIn32BitValues)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(call_info, object_id, RootParameterIndex, SrcData, DestOffsetIn32BitValues);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(call_info, object_id, RootParameterIndex, SrcData, DestOffsetIn32BitValues);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(call_info, object_id, RootParameterIndex, SrcData, DestOffsetIn32BitValues);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT Num32BitValuesToSet,
        PointerDecoder<uint8_t>* pSrcData,
        UINT DestOffsetIn32BitValues)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(call_info, object_id, RootParameterIndex, Num32BitValuesToSet, pSrcData, DestOffsetIn32BitValues);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(call_info, object_id, RootParameterIndex, Num32BitValuesToSet, pSrcData, DestOffsetIn32BitValues);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(call_info, object_id, RootParameterIndex, Num32BitValuesToSet, pSrcData, DestOffsetIn32BitValues);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT Num32BitValuesToSet,
        PointerDecoder<uint8_t>* pSrcData,
        UINT DestOffsetIn32BitValues)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(call_info, object_id, RootParameterIndex, Num32BitValuesToSet, pSrcData, DestOffsetIn32BitValues);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(call_info, object_id, RootParameterIndex, Num32BitValuesToSet, pSrcData, DestOffsetIn32BitValues);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(call_info, object_id, RootParameterIndex, Num32BitValuesToSet, pSrcData, DestOffsetIn32BitValues);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(call_info, object_id, RootParameterIndex, BufferLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(call_info, object_id, RootParameterIndex, BufferLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(call_info, object_id, RootParameterIndex, BufferLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(call_info, object_id, RootParameterIndex, BufferLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(call_info, object_id, RootParameterIndex, BufferLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(call_info, object_id, RootParameterIndex, BufferLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(call_info, object_id, RootParameterIndex, BufferLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(call_info, object_id, RootParameterIndex, BufferLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(call_info, object_id, RootParameterIndex, BufferLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(call_info, object_id, RootParameterIndex, BufferLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(call_info, object_id, RootParameterIndex, BufferLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(call_info, object_id, RootParameterIndex, BufferLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(call_info, object_id, RootParameterIndex, BufferLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(call_info, object_id, RootParameterIndex, BufferLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(call_info, object_id, RootParameterIndex, BufferLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(call_info, object_id, RootParameterIndex, BufferLocation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(call_info, object_id, RootParameterIndex, BufferLocation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(call_info, object_id, RootParameterIndex, BufferLocation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_IASetIndexBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_INDEX_BUFFER_VIEW>* pView)
{
    Pre_Process_ID3D12GraphicsCommandList_IASetIndexBuffer(call_info, object_id, pView);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_IASetIndexBuffer(call_info, object_id, pView);
    }
    Post_Process_ID3D12GraphicsCommandList_IASetIndexBuffer(call_info, object_id, pView);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_IASetVertexBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        StructPointerDecoder<Decoded_D3D12_VERTEX_BUFFER_VIEW>* pViews)
{
    Pre_Process_ID3D12GraphicsCommandList_IASetVertexBuffers(call_info, object_id, StartSlot, NumViews, pViews);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_IASetVertexBuffers(call_info, object_id, StartSlot, NumViews, pViews);
    }
    Post_Process_ID3D12GraphicsCommandList_IASetVertexBuffers(call_info, object_id, StartSlot, NumViews, pViews);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SOSetTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        StructPointerDecoder<Decoded_D3D12_STREAM_OUTPUT_BUFFER_VIEW>* pViews)
{
    Pre_Process_ID3D12GraphicsCommandList_SOSetTargets(call_info, object_id, StartSlot, NumViews, pViews);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SOSetTargets(call_info, object_id, StartSlot, NumViews, pViews);
    }
    Post_Process_ID3D12GraphicsCommandList_SOSetTargets(call_info, object_id, StartSlot, NumViews, pViews);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_OMSetRenderTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRenderTargetDescriptors,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pRenderTargetDescriptors,
        BOOL RTsSingleHandleToDescriptorRange,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pDepthStencilDescriptor)
{
    Pre_Process_ID3D12GraphicsCommandList_OMSetRenderTargets(call_info, object_id, NumRenderTargetDescriptors, pRenderTargetDescriptors, RTsSingleHandleToDescriptorRange, pDepthStencilDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_OMSetRenderTargets(call_info, object_id, NumRenderTargetDescriptors, pRenderTargetDescriptors, RTsSingleHandleToDescriptorRange, pDepthStencilDescriptor);
    }
    Post_Process_ID3D12GraphicsCommandList_OMSetRenderTargets(call_info, object_id, NumRenderTargetDescriptors, pRenderTargetDescriptors, RTsSingleHandleToDescriptorRange, pDepthStencilDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ClearDepthStencilView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
        D3D12_CLEAR_FLAGS ClearFlags,
        FLOAT Depth,
        UINT8 Stencil,
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
{
    Pre_Process_ID3D12GraphicsCommandList_ClearDepthStencilView(call_info, object_id, DepthStencilView, ClearFlags, Depth, Stencil, NumRects, pRects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ClearDepthStencilView(call_info, object_id, DepthStencilView, ClearFlags, Depth, Stencil, NumRects, pRects);
    }
    Post_Process_ID3D12GraphicsCommandList_ClearDepthStencilView(call_info, object_id, DepthStencilView, ClearFlags, Depth, Stencil, NumRects, pRects);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ClearRenderTargetView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
        PointerDecoder<FLOAT> ColorRGBA [4],
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
{
    Pre_Process_ID3D12GraphicsCommandList_ClearRenderTargetView(call_info, object_id, RenderTargetView, ColorRGBA, NumRects, pRects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ClearRenderTargetView(call_info, object_id, RenderTargetView, ColorRGBA, NumRects, pRects);
    }
    Post_Process_ID3D12GraphicsCommandList_ClearRenderTargetView(call_info, object_id, RenderTargetView, ColorRGBA, NumRects, pRects);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
        format::HandleId pResource,
        PointerDecoder<UINT> Values [4],
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
{
    Pre_Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(call_info, object_id, ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, Values, NumRects, pRects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(call_info, object_id, ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, Values, NumRects, pRects);
    }
    Post_Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(call_info, object_id, ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, Values, NumRects, pRects);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
        format::HandleId pResource,
        PointerDecoder<FLOAT> Values [4],
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects)
{
    Pre_Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(call_info, object_id, ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, Values, NumRects, pRects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(call_info, object_id, ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, Values, NumRects, pRects);
    }
    Post_Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(call_info, object_id, ViewGPUHandleInCurrentHeap, ViewCPUHandle, pResource, Values, NumRects, pRects);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_DiscardResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_DISCARD_REGION>* pRegion)
{
    Pre_Process_ID3D12GraphicsCommandList_DiscardResource(call_info, object_id, pResource, pRegion);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_DiscardResource(call_info, object_id, pResource, pRegion);
    }
    Post_Process_ID3D12GraphicsCommandList_DiscardResource(call_info, object_id, pResource, pRegion);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_BeginQuery(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pQueryHeap,
        D3D12_QUERY_TYPE Type,
        UINT Index)
{
    Pre_Process_ID3D12GraphicsCommandList_BeginQuery(call_info, object_id, pQueryHeap, Type, Index);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_BeginQuery(call_info, object_id, pQueryHeap, Type, Index);
    }
    Post_Process_ID3D12GraphicsCommandList_BeginQuery(call_info, object_id, pQueryHeap, Type, Index);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_EndQuery(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pQueryHeap,
        D3D12_QUERY_TYPE Type,
        UINT Index)
{
    Pre_Process_ID3D12GraphicsCommandList_EndQuery(call_info, object_id, pQueryHeap, Type, Index);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_EndQuery(call_info, object_id, pQueryHeap, Type, Index);
    }
    Post_Process_ID3D12GraphicsCommandList_EndQuery(call_info, object_id, pQueryHeap, Type, Index);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ResolveQueryData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pQueryHeap,
        D3D12_QUERY_TYPE Type,
        UINT StartIndex,
        UINT NumQueries,
        format::HandleId pDestinationBuffer,
        UINT64 AlignedDestinationBufferOffset)
{
    Pre_Process_ID3D12GraphicsCommandList_ResolveQueryData(call_info, object_id, pQueryHeap, Type, StartIndex, NumQueries, pDestinationBuffer, AlignedDestinationBufferOffset);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ResolveQueryData(call_info, object_id, pQueryHeap, Type, StartIndex, NumQueries, pDestinationBuffer, AlignedDestinationBufferOffset);
    }
    Post_Process_ID3D12GraphicsCommandList_ResolveQueryData(call_info, object_id, pQueryHeap, Type, StartIndex, NumQueries, pDestinationBuffer, AlignedDestinationBufferOffset);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetPredication(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pBuffer,
        UINT64 AlignedBufferOffset,
        D3D12_PREDICATION_OP Operation)
{
    Pre_Process_ID3D12GraphicsCommandList_SetPredication(call_info, object_id, pBuffer, AlignedBufferOffset, Operation);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetPredication(call_info, object_id, pBuffer, AlignedBufferOffset, Operation);
    }
    Post_Process_ID3D12GraphicsCommandList_SetPredication(call_info, object_id, pBuffer, AlignedBufferOffset, Operation);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_SetMarker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size)
{
    Pre_Process_ID3D12GraphicsCommandList_SetMarker(call_info, object_id, Metadata, pData, Size);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_SetMarker(call_info, object_id, Metadata, pData, Size);
    }
    Post_Process_ID3D12GraphicsCommandList_SetMarker(call_info, object_id, Metadata, pData, Size);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_BeginEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size)
{
    Pre_Process_ID3D12GraphicsCommandList_BeginEvent(call_info, object_id, Metadata, pData, Size);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_BeginEvent(call_info, object_id, Metadata, pData, Size);
    }
    Post_Process_ID3D12GraphicsCommandList_BeginEvent(call_info, object_id, Metadata, pData, Size);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_EndEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12GraphicsCommandList_EndEvent(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_EndEvent(call_info, object_id);
    }
    Post_Process_ID3D12GraphicsCommandList_EndEvent(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList_ExecuteIndirect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCommandSignature,
        UINT MaxCommandCount,
        format::HandleId pArgumentBuffer,
        UINT64 ArgumentBufferOffset,
        format::HandleId pCountBuffer,
        UINT64 CountBufferOffset)
{
    Pre_Process_ID3D12GraphicsCommandList_ExecuteIndirect(call_info, object_id, pCommandSignature, MaxCommandCount, pArgumentBuffer, ArgumentBufferOffset, pCountBuffer, CountBufferOffset);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList_ExecuteIndirect(call_info, object_id, pCommandSignature, MaxCommandCount, pArgumentBuffer, ArgumentBufferOffset, pCountBuffer, CountBufferOffset);
    }
    Post_Process_ID3D12GraphicsCommandList_ExecuteIndirect(call_info, object_id, pCommandSignature, MaxCommandCount, pArgumentBuffer, ArgumentBufferOffset, pCountBuffer, CountBufferOffset);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT64 DstOffset,
        format::HandleId pSrcBuffer,
        UINT64 SrcOffset,
        UINT Dependencies,
        HandlePointerDecoder<ID3D12Resource*>* ppDependentResources,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_RANGE_UINT64>* pDependentSubresourceRanges)
{
    Pre_Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, Dependencies, ppDependentResources, pDependentSubresourceRanges);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, Dependencies, ppDependentResources, pDependentSubresourceRanges);
    }
    Post_Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, Dependencies, ppDependentResources, pDependentSubresourceRanges);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT64 DstOffset,
        format::HandleId pSrcBuffer,
        UINT64 SrcOffset,
        UINT Dependencies,
        HandlePointerDecoder<ID3D12Resource*>* ppDependentResources,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_RANGE_UINT64>* pDependentSubresourceRanges)
{
    Pre_Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, Dependencies, ppDependentResources, pDependentSubresourceRanges);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, Dependencies, ppDependentResources, pDependentSubresourceRanges);
    }
    Post_Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(call_info, object_id, pDstBuffer, DstOffset, pSrcBuffer, SrcOffset, Dependencies, ppDependentResources, pDependentSubresourceRanges);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList1_OMSetDepthBounds(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        FLOAT Min,
        FLOAT Max)
{
    Pre_Process_ID3D12GraphicsCommandList1_OMSetDepthBounds(call_info, object_id, Min, Max);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList1_OMSetDepthBounds(call_info, object_id, Min, Max);
    }
    Post_Process_ID3D12GraphicsCommandList1_OMSetDepthBounds(call_info, object_id, Min, Max);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList1_SetSamplePositions(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumSamplesPerPixel,
        UINT NumPixels,
        StructPointerDecoder<Decoded_D3D12_SAMPLE_POSITION>* pSamplePositions)
{
    Pre_Process_ID3D12GraphicsCommandList1_SetSamplePositions(call_info, object_id, NumSamplesPerPixel, NumPixels, pSamplePositions);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList1_SetSamplePositions(call_info, object_id, NumSamplesPerPixel, NumPixels, pSamplePositions);
    }
    Post_Process_ID3D12GraphicsCommandList1_SetSamplePositions(call_info, object_id, NumSamplesPerPixel, NumPixels, pSamplePositions);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        UINT DstX,
        UINT DstY,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_tagRECT>* pSrcRect,
        DXGI_FORMAT Format,
        D3D12_RESOLVE_MODE ResolveMode)
{
    Pre_Process_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(call_info, object_id, pDstResource, DstSubresource, DstX, DstY, pSrcResource, SrcSubresource, pSrcRect, Format, ResolveMode);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(call_info, object_id, pDstResource, DstSubresource, DstX, DstY, pSrcResource, SrcSubresource, pSrcRect, Format, ResolveMode);
    }
    Post_Process_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(call_info, object_id, pDstResource, DstSubresource, DstX, DstY, pSrcResource, SrcSubresource, pSrcRect, Format, ResolveMode);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList1_SetViewInstanceMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Mask)
{
    Pre_Process_ID3D12GraphicsCommandList1_SetViewInstanceMask(call_info, object_id, Mask);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList1_SetViewInstanceMask(call_info, object_id, Mask);
    }
    Post_Process_ID3D12GraphicsCommandList1_SetViewInstanceMask(call_info, object_id, Mask);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList2_WriteBufferImmediate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Count,
        StructPointerDecoder<Decoded_D3D12_WRITEBUFFERIMMEDIATE_PARAMETER>* pParams,
        PointerDecoder<D3D12_WRITEBUFFERIMMEDIATE_MODE>* pModes)
{
    Pre_Process_ID3D12GraphicsCommandList2_WriteBufferImmediate(call_info, object_id, Count, pParams, pModes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList2_WriteBufferImmediate(call_info, object_id, Count, pParams, pModes);
    }
    Post_Process_ID3D12GraphicsCommandList2_WriteBufferImmediate(call_info, object_id, Count, pParams, pModes);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_UpdateTileMappings(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT NumResourceRegions,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pResourceRegionStartCoordinates,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>* pResourceRegionSizes,
        format::HandleId pHeap,
        UINT NumRanges,
        PointerDecoder<D3D12_TILE_RANGE_FLAGS>* pRangeFlags,
        PointerDecoder<UINT>* pHeapRangeStartOffsets,
        PointerDecoder<UINT>* pRangeTileCounts,
        D3D12_TILE_MAPPING_FLAGS Flags)
{
    Pre_Process_ID3D12CommandQueue_UpdateTileMappings(call_info, object_id, pResource, NumResourceRegions, pResourceRegionStartCoordinates, pResourceRegionSizes, pHeap, NumRanges, pRangeFlags, pHeapRangeStartOffsets, pRangeTileCounts, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_UpdateTileMappings(call_info, object_id, pResource, NumResourceRegions, pResourceRegionStartCoordinates, pResourceRegionSizes, pHeap, NumRanges, pRangeFlags, pHeapRangeStartOffsets, pRangeTileCounts, Flags);
    }
    Post_Process_ID3D12CommandQueue_UpdateTileMappings(call_info, object_id, pResource, NumResourceRegions, pResourceRegionStartCoordinates, pResourceRegionSizes, pHeap, NumRanges, pRangeFlags, pHeapRangeStartOffsets, pRangeTileCounts, Flags);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_CopyTileMappings(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pDstRegionStartCoordinate,
        format::HandleId pSrcResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pSrcRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>* pRegionSize,
        D3D12_TILE_MAPPING_FLAGS Flags)
{
    Pre_Process_ID3D12CommandQueue_CopyTileMappings(call_info, object_id, pDstResource, pDstRegionStartCoordinate, pSrcResource, pSrcRegionStartCoordinate, pRegionSize, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_CopyTileMappings(call_info, object_id, pDstResource, pDstRegionStartCoordinate, pSrcResource, pSrcRegionStartCoordinate, pRegionSize, Flags);
    }
    Post_Process_ID3D12CommandQueue_CopyTileMappings(call_info, object_id, pDstResource, pDstRegionStartCoordinate, pSrcResource, pSrcRegionStartCoordinate, pRegionSize, Flags);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_ExecuteCommandLists(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumCommandLists,
        HandlePointerDecoder<ID3D12CommandList*>* ppCommandLists)
{
    Pre_Process_ID3D12CommandQueue_ExecuteCommandLists(call_info, object_id, NumCommandLists, ppCommandLists);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_ExecuteCommandLists(call_info, object_id, NumCommandLists, ppCommandLists);
    }
    Post_Process_ID3D12CommandQueue_ExecuteCommandLists(call_info, object_id, NumCommandLists, ppCommandLists);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_SetMarker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size)
{
    Pre_Process_ID3D12CommandQueue_SetMarker(call_info, object_id, Metadata, pData, Size);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_SetMarker(call_info, object_id, Metadata, pData, Size);
    }
    Post_Process_ID3D12CommandQueue_SetMarker(call_info, object_id, Metadata, pData, Size);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_BeginEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size)
{
    Pre_Process_ID3D12CommandQueue_BeginEvent(call_info, object_id, Metadata, pData, Size);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_BeginEvent(call_info, object_id, Metadata, pData, Size);
    }
    Post_Process_ID3D12CommandQueue_BeginEvent(call_info, object_id, Metadata, pData, Size);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_EndEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12CommandQueue_EndEvent(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_EndEvent(call_info, object_id);
    }
    Post_Process_ID3D12CommandQueue_EndEvent(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_Signal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 Value)
{
    Pre_Process_ID3D12CommandQueue_Signal(call_info, object_id, return_value, pFence, Value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_Signal(call_info, object_id, return_value, pFence, Value);
    }
    Post_Process_ID3D12CommandQueue_Signal(call_info, object_id, return_value, pFence, Value);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_Wait(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 Value)
{
    Pre_Process_ID3D12CommandQueue_Wait(call_info, object_id, return_value, pFence, Value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_Wait(call_info, object_id, return_value, pFence, Value);
    }
    Post_Process_ID3D12CommandQueue_Wait(call_info, object_id, return_value, pFence, Value);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_GetTimestampFrequency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT64>* pFrequency)
{
    Pre_Process_ID3D12CommandQueue_GetTimestampFrequency(call_info, object_id, return_value, pFrequency);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_GetTimestampFrequency(call_info, object_id, return_value, pFrequency);
    }
    Post_Process_ID3D12CommandQueue_GetTimestampFrequency(call_info, object_id, return_value, pFrequency);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_GetClockCalibration(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT64>* pGpuTimestamp,
        PointerDecoder<UINT64>* pCpuTimestamp)
{
    Pre_Process_ID3D12CommandQueue_GetClockCalibration(call_info, object_id, return_value, pGpuTimestamp, pCpuTimestamp);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_GetClockCalibration(call_info, object_id, return_value, pGpuTimestamp, pCpuTimestamp);
    }
    Post_Process_ID3D12CommandQueue_GetClockCalibration(call_info, object_id, return_value, pGpuTimestamp, pCpuTimestamp);
}

void Dx12LayerConsumer::Process_ID3D12CommandQueue_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_COMMAND_QUEUE_DESC return_value)
{
    Pre_Process_ID3D12CommandQueue_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12CommandQueue_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12CommandQueue_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetNodeCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value)
{
    Pre_Process_ID3D12Device_GetNodeCount(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetNodeCount(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Device_GetNodeCount(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateCommandQueue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMMAND_QUEUE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandQueue)
{
    Pre_Process_ID3D12Device_CreateCommandQueue(call_info, object_id, return_value, pDesc, riid, ppCommandQueue);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateCommandQueue(call_info, object_id, return_value, pDesc, riid, ppCommandQueue);
    }
    Post_Process_ID3D12Device_CreateCommandQueue(call_info, object_id, return_value, pDesc, riid, ppCommandQueue);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateCommandAllocator(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_COMMAND_LIST_TYPE type,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandAllocator)
{
    Pre_Process_ID3D12Device_CreateCommandAllocator(call_info, object_id, return_value, type, riid, ppCommandAllocator);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateCommandAllocator(call_info, object_id, return_value, type, riid, ppCommandAllocator);
    }
    Post_Process_ID3D12Device_CreateCommandAllocator(call_info, object_id, return_value, type, riid, ppCommandAllocator);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateGraphicsPipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState)
{
    Pre_Process_ID3D12Device_CreateGraphicsPipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateGraphicsPipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
    }
    Post_Process_ID3D12Device_CreateGraphicsPipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateComputePipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState)
{
    Pre_Process_ID3D12Device_CreateComputePipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateComputePipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
    }
    Post_Process_ID3D12Device_CreateComputePipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateCommandList(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT nodeMask,
        D3D12_COMMAND_LIST_TYPE type,
        format::HandleId pCommandAllocator,
        format::HandleId pInitialState,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandList)
{
    Pre_Process_ID3D12Device_CreateCommandList(call_info, object_id, return_value, nodeMask, type, pCommandAllocator, pInitialState, riid, ppCommandList);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateCommandList(call_info, object_id, return_value, nodeMask, type, pCommandAllocator, pInitialState, riid, ppCommandList);
    }
    Post_Process_ID3D12Device_CreateCommandList(call_info, object_id, return_value, nodeMask, type, pCommandAllocator, pInitialState, riid, ppCommandList);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateDescriptorHeap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DESCRIPTOR_HEAP_DESC>* pDescriptorHeapDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap)
{
    Pre_Process_ID3D12Device_CreateDescriptorHeap(call_info, object_id, return_value, pDescriptorHeapDesc, riid, ppvHeap);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateDescriptorHeap(call_info, object_id, return_value, pDescriptorHeapDesc, riid, ppvHeap);
    }
    Post_Process_ID3D12Device_CreateDescriptorHeap(call_info, object_id, return_value, pDescriptorHeapDesc, riid, ppvHeap);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetDescriptorHandleIncrementSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value,
        D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType)
{
    Pre_Process_ID3D12Device_GetDescriptorHandleIncrementSize(call_info, object_id, return_value, DescriptorHeapType);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetDescriptorHandleIncrementSize(call_info, object_id, return_value, DescriptorHeapType);
    }
    Post_Process_ID3D12Device_GetDescriptorHandleIncrementSize(call_info, object_id, return_value, DescriptorHeapType);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT nodeMask,
        PointerDecoder<uint8_t>* pBlobWithRootSignature,
        SIZE_T blobLengthInBytes,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvRootSignature)
{
    Pre_Process_ID3D12Device_CreateRootSignature(call_info, object_id, return_value, nodeMask, pBlobWithRootSignature, blobLengthInBytes, riid, ppvRootSignature);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateRootSignature(call_info, object_id, return_value, nodeMask, pBlobWithRootSignature, blobLengthInBytes, riid, ppvRootSignature);
    }
    Post_Process_ID3D12Device_CreateRootSignature(call_info, object_id, return_value, nodeMask, pBlobWithRootSignature, blobLengthInBytes, riid, ppvRootSignature);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateConstantBufferView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_CONSTANT_BUFFER_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device_CreateConstantBufferView(call_info, object_id, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateConstantBufferView(call_info, object_id, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device_CreateConstantBufferView(call_info, object_id, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_SHADER_RESOURCE_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device_CreateShaderResourceView(call_info, object_id, pResource, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateShaderResourceView(call_info, object_id, pResource, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device_CreateShaderResourceView(call_info, object_id, pResource, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        format::HandleId pCounterResource,
        StructPointerDecoder<Decoded_D3D12_UNORDERED_ACCESS_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device_CreateUnorderedAccessView(call_info, object_id, pResource, pCounterResource, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateUnorderedAccessView(call_info, object_id, pResource, pCounterResource, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device_CreateUnorderedAccessView(call_info, object_id, pResource, pCounterResource, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateRenderTargetView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_RENDER_TARGET_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device_CreateRenderTargetView(call_info, object_id, pResource, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateRenderTargetView(call_info, object_id, pResource, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device_CreateRenderTargetView(call_info, object_id, pResource, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateDepthStencilView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_DEPTH_STENCIL_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device_CreateDepthStencilView(call_info, object_id, pResource, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateDepthStencilView(call_info, object_id, pResource, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device_CreateDepthStencilView(call_info, object_id, pResource, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateSampler(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_SAMPLER_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device_CreateSampler(call_info, object_id, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateSampler(call_info, object_id, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device_CreateSampler(call_info, object_id, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device_CopyDescriptors(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumDestDescriptorRanges,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pDestDescriptorRangeStarts,
        PointerDecoder<UINT>* pDestDescriptorRangeSizes,
        UINT NumSrcDescriptorRanges,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pSrcDescriptorRangeStarts,
        PointerDecoder<UINT>* pSrcDescriptorRangeSizes,
        D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
{
    Pre_Process_ID3D12Device_CopyDescriptors(call_info, object_id, NumDestDescriptorRanges, pDestDescriptorRangeStarts, pDestDescriptorRangeSizes, NumSrcDescriptorRanges, pSrcDescriptorRangeStarts, pSrcDescriptorRangeSizes, DescriptorHeapsType);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CopyDescriptors(call_info, object_id, NumDestDescriptorRanges, pDestDescriptorRangeStarts, pDestDescriptorRangeSizes, NumSrcDescriptorRanges, pSrcDescriptorRangeStarts, pSrcDescriptorRangeSizes, DescriptorHeapsType);
    }
    Post_Process_ID3D12Device_CopyDescriptors(call_info, object_id, NumDestDescriptorRanges, pDestDescriptorRangeStarts, pDestDescriptorRangeSizes, NumSrcDescriptorRanges, pSrcDescriptorRangeStarts, pSrcDescriptorRangeSizes, DescriptorHeapsType);
}

void Dx12LayerConsumer::Process_ID3D12Device_CopyDescriptorsSimple(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumDescriptors,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
        D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
{
    Pre_Process_ID3D12Device_CopyDescriptorsSimple(call_info, object_id, NumDescriptors, DestDescriptorRangeStart, SrcDescriptorRangeStart, DescriptorHeapsType);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CopyDescriptorsSimple(call_info, object_id, NumDescriptors, DestDescriptorRangeStart, SrcDescriptorRangeStart, DescriptorHeapsType);
    }
    Post_Process_ID3D12Device_CopyDescriptorsSimple(call_info, object_id, NumDescriptors, DestDescriptorRangeStart, SrcDescriptorRangeStart, DescriptorHeapsType);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetResourceAllocationInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_ALLOCATION_INFO return_value,
        UINT visibleMask,
        UINT numResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pResourceDescs)
{
    Pre_Process_ID3D12Device_GetResourceAllocationInfo(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetResourceAllocationInfo(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs);
    }
    Post_Process_ID3D12Device_GetResourceAllocationInfo(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetCustomHeapProperties(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_HEAP_PROPERTIES return_value,
        UINT nodeMask,
        D3D12_HEAP_TYPE heapType)
{
    Pre_Process_ID3D12Device_GetCustomHeapProperties(call_info, object_id, return_value, nodeMask, heapType);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetCustomHeapProperties(call_info, object_id, return_value, nodeMask, heapType);
    }
    Post_Process_ID3D12Device_GetCustomHeapProperties(call_info, object_id, return_value, nodeMask, heapType);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateCommittedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialResourceState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device_CreateCommittedResource(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateCommittedResource(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);
    }
    Post_Process_ID3D12Device_CreateCommittedResource(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateHeap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap)
{
    Pre_Process_ID3D12Device_CreateHeap(call_info, object_id, return_value, pDesc, riid, ppvHeap);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateHeap(call_info, object_id, return_value, pDesc, riid, ppvHeap);
    }
    Post_Process_ID3D12Device_CreateHeap(call_info, object_id, return_value, pDesc, riid, ppvHeap);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreatePlacedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pHeap,
        UINT64 HeapOffset,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device_CreatePlacedResource(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreatePlacedResource(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
    }
    Post_Process_ID3D12Device_CreatePlacedResource(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateReservedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device_CreateReservedResource(call_info, object_id, return_value, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateReservedResource(call_info, object_id, return_value, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
    }
    Post_Process_ID3D12Device_CreateReservedResource(call_info, object_id, return_value, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pObject,
        StructPointerDecoder<Decoded__SECURITY_ATTRIBUTES>* pAttributes,
        DWORD Access,
        WStringDecoder* Name,
        PointerDecoder<uint64_t, void*>* pHandle)
{
    Pre_Process_ID3D12Device_CreateSharedHandle(call_info, object_id, return_value, pObject, pAttributes, Access, Name, pHandle);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateSharedHandle(call_info, object_id, return_value, pObject, pAttributes, Access, Name, pHandle);
    }
    Post_Process_ID3D12Device_CreateSharedHandle(call_info, object_id, return_value, pObject, pAttributes, Access, Name, pHandle);
}

void Dx12LayerConsumer::Process_ID3D12Device_OpenSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t NTHandle,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvObj)
{
    Pre_Process_ID3D12Device_OpenSharedHandle(call_info, object_id, return_value, NTHandle, riid, ppvObj);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_OpenSharedHandle(call_info, object_id, return_value, NTHandle, riid, ppvObj);
    }
    Post_Process_ID3D12Device_OpenSharedHandle(call_info, object_id, return_value, NTHandle, riid, ppvObj);
}

void Dx12LayerConsumer::Process_ID3D12Device_OpenSharedHandleByName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* Name,
        DWORD Access,
        PointerDecoder<uint64_t, void*>* pNTHandle)
{
    Pre_Process_ID3D12Device_OpenSharedHandleByName(call_info, object_id, return_value, Name, Access, pNTHandle);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_OpenSharedHandleByName(call_info, object_id, return_value, Name, Access, pNTHandle);
    }
    Post_Process_ID3D12Device_OpenSharedHandleByName(call_info, object_id, return_value, Name, Access, pNTHandle);
}

void Dx12LayerConsumer::Process_ID3D12Device_MakeResident(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects)
{
    Pre_Process_ID3D12Device_MakeResident(call_info, object_id, return_value, NumObjects, ppObjects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_MakeResident(call_info, object_id, return_value, NumObjects, ppObjects);
    }
    Post_Process_ID3D12Device_MakeResident(call_info, object_id, return_value, NumObjects, ppObjects);
}

void Dx12LayerConsumer::Process_ID3D12Device_Evict(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects)
{
    Pre_Process_ID3D12Device_Evict(call_info, object_id, return_value, NumObjects, ppObjects);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_Evict(call_info, object_id, return_value, NumObjects, ppObjects);
    }
    Post_Process_ID3D12Device_Evict(call_info, object_id, return_value, NumObjects, ppObjects);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateFence(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 InitialValue,
        D3D12_FENCE_FLAGS Flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFence)
{
    Pre_Process_ID3D12Device_CreateFence(call_info, object_id, return_value, InitialValue, Flags, riid, ppFence);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateFence(call_info, object_id, return_value, InitialValue, Flags, riid, ppFence);
    }
    Post_Process_ID3D12Device_CreateFence(call_info, object_id, return_value, InitialValue, Flags, riid, ppFence);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetDeviceRemovedReason(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12Device_GetDeviceRemovedReason(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetDeviceRemovedReason(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Device_GetDeviceRemovedReason(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetCopyableFootprints(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pResourceDesc,
        UINT FirstSubresource,
        UINT NumSubresources,
        UINT64 BaseOffset,
        StructPointerDecoder<Decoded_D3D12_PLACED_SUBRESOURCE_FOOTPRINT>* pLayouts,
        PointerDecoder<UINT>* pNumRows,
        PointerDecoder<UINT64>* pRowSizeInBytes,
        PointerDecoder<UINT64>* pTotalBytes)
{
    Pre_Process_ID3D12Device_GetCopyableFootprints(call_info, object_id, pResourceDesc, FirstSubresource, NumSubresources, BaseOffset, pLayouts, pNumRows, pRowSizeInBytes, pTotalBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetCopyableFootprints(call_info, object_id, pResourceDesc, FirstSubresource, NumSubresources, BaseOffset, pLayouts, pNumRows, pRowSizeInBytes, pTotalBytes);
    }
    Post_Process_ID3D12Device_GetCopyableFootprints(call_info, object_id, pResourceDesc, FirstSubresource, NumSubresources, BaseOffset, pLayouts, pNumRows, pRowSizeInBytes, pTotalBytes);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateQueryHeap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_QUERY_HEAP_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap)
{
    Pre_Process_ID3D12Device_CreateQueryHeap(call_info, object_id, return_value, pDesc, riid, ppvHeap);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateQueryHeap(call_info, object_id, return_value, pDesc, riid, ppvHeap);
    }
    Post_Process_ID3D12Device_CreateQueryHeap(call_info, object_id, return_value, pDesc, riid, ppvHeap);
}

void Dx12LayerConsumer::Process_ID3D12Device_SetStablePowerState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL Enable)
{
    Pre_Process_ID3D12Device_SetStablePowerState(call_info, object_id, return_value, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_SetStablePowerState(call_info, object_id, return_value, Enable);
    }
    Post_Process_ID3D12Device_SetStablePowerState(call_info, object_id, return_value, Enable);
}

void Dx12LayerConsumer::Process_ID3D12Device_CreateCommandSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMMAND_SIGNATURE_DESC>* pDesc,
        format::HandleId pRootSignature,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvCommandSignature)
{
    Pre_Process_ID3D12Device_CreateCommandSignature(call_info, object_id, return_value, pDesc, pRootSignature, riid, ppvCommandSignature);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_CreateCommandSignature(call_info, object_id, return_value, pDesc, pRootSignature, riid, ppvCommandSignature);
    }
    Post_Process_ID3D12Device_CreateCommandSignature(call_info, object_id, return_value, pDesc, pRootSignature, riid, ppvCommandSignature);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetResourceTiling(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResource,
        PointerDecoder<UINT>* pNumTilesForEntireResource,
        StructPointerDecoder<Decoded_D3D12_PACKED_MIP_INFO>* pPackedMipDesc,
        StructPointerDecoder<Decoded_D3D12_TILE_SHAPE>* pStandardTileShapeForNonPackedMips,
        PointerDecoder<UINT>* pNumSubresourceTilings,
        UINT FirstSubresourceTilingToGet,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_TILING>* pSubresourceTilingsForNonPackedMips)
{
    Pre_Process_ID3D12Device_GetResourceTiling(call_info, object_id, pTiledResource, pNumTilesForEntireResource, pPackedMipDesc, pStandardTileShapeForNonPackedMips, pNumSubresourceTilings, FirstSubresourceTilingToGet, pSubresourceTilingsForNonPackedMips);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetResourceTiling(call_info, object_id, pTiledResource, pNumTilesForEntireResource, pPackedMipDesc, pStandardTileShapeForNonPackedMips, pNumSubresourceTilings, FirstSubresourceTilingToGet, pSubresourceTilingsForNonPackedMips);
    }
    Post_Process_ID3D12Device_GetResourceTiling(call_info, object_id, pTiledResource, pNumTilesForEntireResource, pPackedMipDesc, pStandardTileShapeForNonPackedMips, pNumSubresourceTilings, FirstSubresourceTilingToGet, pSubresourceTilingsForNonPackedMips);
}

void Dx12LayerConsumer::Process_ID3D12Device_GetAdapterLuid(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_LUID return_value)
{
    Pre_Process_ID3D12Device_GetAdapterLuid(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device_GetAdapterLuid(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Device_GetAdapterLuid(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12PipelineLibrary_StorePipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        format::HandleId pPipeline)
{
    Pre_Process_ID3D12PipelineLibrary_StorePipeline(call_info, object_id, return_value, pName, pPipeline);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineLibrary_StorePipeline(call_info, object_id, return_value, pName, pPipeline);
    }
    Post_Process_ID3D12PipelineLibrary_StorePipeline(call_info, object_id, return_value, pName, pPipeline);
}

void Dx12LayerConsumer::Process_ID3D12PipelineLibrary_LoadGraphicsPipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        StructPointerDecoder<Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState)
{
    Pre_Process_ID3D12PipelineLibrary_LoadGraphicsPipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineLibrary_LoadGraphicsPipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
    }
    Post_Process_ID3D12PipelineLibrary_LoadGraphicsPipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12PipelineLibrary_LoadComputePipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        StructPointerDecoder<Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState)
{
    Pre_Process_ID3D12PipelineLibrary_LoadComputePipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineLibrary_LoadComputePipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
    }
    Post_Process_ID3D12PipelineLibrary_LoadComputePipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12PipelineLibrary_GetSerializedSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        SIZE_T return_value)
{
    Pre_Process_ID3D12PipelineLibrary_GetSerializedSize(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineLibrary_GetSerializedSize(call_info, object_id, return_value);
    }
    Post_Process_ID3D12PipelineLibrary_GetSerializedSize(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12PipelineLibrary_Serialize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pData,
        SIZE_T DataSizeInBytes)
{
    Pre_Process_ID3D12PipelineLibrary_Serialize(call_info, object_id, return_value, pData, DataSizeInBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineLibrary_Serialize(call_info, object_id, return_value, pData, DataSizeInBytes);
    }
    Post_Process_ID3D12PipelineLibrary_Serialize(call_info, object_id, return_value, pData, DataSizeInBytes);
}

void Dx12LayerConsumer::Process_ID3D12PipelineLibrary1_LoadPipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        StructPointerDecoder<Decoded_D3D12_PIPELINE_STATE_STREAM_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState)
{
    Pre_Process_ID3D12PipelineLibrary1_LoadPipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12PipelineLibrary1_LoadPipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
    }
    Post_Process_ID3D12PipelineLibrary1_LoadPipeline(call_info, object_id, return_value, pName, pDesc, riid, ppPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12Device1_CreatePipelineLibrary(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pLibraryBlob,
        SIZE_T BlobLength,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineLibrary)
{
    Pre_Process_ID3D12Device1_CreatePipelineLibrary(call_info, object_id, return_value, pLibraryBlob, BlobLength, riid, ppPipelineLibrary);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device1_CreatePipelineLibrary(call_info, object_id, return_value, pLibraryBlob, BlobLength, riid, ppPipelineLibrary);
    }
    Post_Process_ID3D12Device1_CreatePipelineLibrary(call_info, object_id, return_value, pLibraryBlob, BlobLength, riid, ppPipelineLibrary);
}

void Dx12LayerConsumer::Process_ID3D12Device1_SetEventOnMultipleFenceCompletion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<ID3D12Fence*>* ppFences,
        PointerDecoder<UINT64>* pFenceValues,
        UINT NumFences,
        D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
        uint64_t hEvent)
{
    Pre_Process_ID3D12Device1_SetEventOnMultipleFenceCompletion(call_info, object_id, return_value, ppFences, pFenceValues, NumFences, Flags, hEvent);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device1_SetEventOnMultipleFenceCompletion(call_info, object_id, return_value, ppFences, pFenceValues, NumFences, Flags, hEvent);
    }
    Post_Process_ID3D12Device1_SetEventOnMultipleFenceCompletion(call_info, object_id, return_value, ppFences, pFenceValues, NumFences, Flags, hEvent);
}

void Dx12LayerConsumer::Process_ID3D12Device1_SetResidencyPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects,
        PointerDecoder<D3D12_RESIDENCY_PRIORITY>* pPriorities)
{
    Pre_Process_ID3D12Device1_SetResidencyPriority(call_info, object_id, return_value, NumObjects, ppObjects, pPriorities);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device1_SetResidencyPriority(call_info, object_id, return_value, NumObjects, ppObjects, pPriorities);
    }
    Post_Process_ID3D12Device1_SetResidencyPriority(call_info, object_id, return_value, NumObjects, ppObjects, pPriorities);
}

void Dx12LayerConsumer::Process_ID3D12Device2_CreatePipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_PIPELINE_STATE_STREAM_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState)
{
    Pre_Process_ID3D12Device2_CreatePipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device2_CreatePipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
    }
    Post_Process_ID3D12Device2_CreatePipelineState(call_info, object_id, return_value, pDesc, riid, ppPipelineState);
}

void Dx12LayerConsumer::Process_ID3D12Device3_OpenExistingHeapFromAddress(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t pAddress,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap)
{
    Pre_Process_ID3D12Device3_OpenExistingHeapFromAddress(call_info, object_id, return_value, pAddress, riid, ppvHeap);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device3_OpenExistingHeapFromAddress(call_info, object_id, return_value, pAddress, riid, ppvHeap);
    }
    Post_Process_ID3D12Device3_OpenExistingHeapFromAddress(call_info, object_id, return_value, pAddress, riid, ppvHeap);
}

void Dx12LayerConsumer::Process_ID3D12Device3_OpenExistingHeapFromFileMapping(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hFileMapping,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap)
{
    Pre_Process_ID3D12Device3_OpenExistingHeapFromFileMapping(call_info, object_id, return_value, hFileMapping, riid, ppvHeap);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device3_OpenExistingHeapFromFileMapping(call_info, object_id, return_value, hFileMapping, riid, ppvHeap);
    }
    Post_Process_ID3D12Device3_OpenExistingHeapFromFileMapping(call_info, object_id, return_value, hFileMapping, riid, ppvHeap);
}

void Dx12LayerConsumer::Process_ID3D12Device3_EnqueueMakeResident(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_RESIDENCY_FLAGS Flags,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects,
        format::HandleId pFenceToSignal,
        UINT64 FenceValueToSignal)
{
    Pre_Process_ID3D12Device3_EnqueueMakeResident(call_info, object_id, return_value, Flags, NumObjects, ppObjects, pFenceToSignal, FenceValueToSignal);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device3_EnqueueMakeResident(call_info, object_id, return_value, Flags, NumObjects, ppObjects, pFenceToSignal, FenceValueToSignal);
    }
    Post_Process_ID3D12Device3_EnqueueMakeResident(call_info, object_id, return_value, Flags, NumObjects, ppObjects, pFenceToSignal, FenceValueToSignal);
}

void Dx12LayerConsumer::Process_ID3D12ProtectedSession_GetStatusFence(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFence)
{
    Pre_Process_ID3D12ProtectedSession_GetStatusFence(call_info, object_id, return_value, riid, ppFence);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ProtectedSession_GetStatusFence(call_info, object_id, return_value, riid, ppFence);
    }
    Post_Process_ID3D12ProtectedSession_GetStatusFence(call_info, object_id, return_value, riid, ppFence);
}

void Dx12LayerConsumer::Process_ID3D12ProtectedSession_GetSessionStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_PROTECTED_SESSION_STATUS return_value)
{
    Pre_Process_ID3D12ProtectedSession_GetSessionStatus(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ProtectedSession_GetSessionStatus(call_info, object_id, return_value);
    }
    Post_Process_ID3D12ProtectedSession_GetSessionStatus(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12ProtectedResourceSession_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC return_value)
{
    Pre_Process_ID3D12ProtectedResourceSession_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ProtectedResourceSession_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12ProtectedResourceSession_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device4_CreateCommandList1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT nodeMask,
        D3D12_COMMAND_LIST_TYPE type,
        D3D12_COMMAND_LIST_FLAGS flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandList)
{
    Pre_Process_ID3D12Device4_CreateCommandList1(call_info, object_id, return_value, nodeMask, type, flags, riid, ppCommandList);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device4_CreateCommandList1(call_info, object_id, return_value, nodeMask, type, flags, riid, ppCommandList);
    }
    Post_Process_ID3D12Device4_CreateCommandList1(call_info, object_id, return_value, nodeMask, type, flags, riid, ppCommandList);
}

void Dx12LayerConsumer::Process_ID3D12Device4_CreateProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppSession)
{
    Pre_Process_ID3D12Device4_CreateProtectedResourceSession(call_info, object_id, return_value, pDesc, riid, ppSession);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device4_CreateProtectedResourceSession(call_info, object_id, return_value, pDesc, riid, ppSession);
    }
    Post_Process_ID3D12Device4_CreateProtectedResourceSession(call_info, object_id, return_value, pDesc, riid, ppSession);
}

void Dx12LayerConsumer::Process_ID3D12Device4_CreateCommittedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialResourceState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device4_CreateCommittedResource1(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, pProtectedSession, riidResource, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device4_CreateCommittedResource1(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, pProtectedSession, riidResource, ppvResource);
    }
    Post_Process_ID3D12Device4_CreateCommittedResource1(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, pProtectedSession, riidResource, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device4_CreateHeap1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_DESC>* pDesc,
        format::HandleId pProtectedSession,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap)
{
    Pre_Process_ID3D12Device4_CreateHeap1(call_info, object_id, return_value, pDesc, pProtectedSession, riid, ppvHeap);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device4_CreateHeap1(call_info, object_id, return_value, pDesc, pProtectedSession, riid, ppvHeap);
    }
    Post_Process_ID3D12Device4_CreateHeap1(call_info, object_id, return_value, pDesc, pProtectedSession, riid, ppvHeap);
}

void Dx12LayerConsumer::Process_ID3D12Device4_CreateReservedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device4_CreateReservedResource1(call_info, object_id, return_value, pDesc, InitialState, pOptimizedClearValue, pProtectedSession, riid, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device4_CreateReservedResource1(call_info, object_id, return_value, pDesc, InitialState, pOptimizedClearValue, pProtectedSession, riid, ppvResource);
    }
    Post_Process_ID3D12Device4_CreateReservedResource1(call_info, object_id, return_value, pDesc, InitialState, pOptimizedClearValue, pProtectedSession, riid, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device4_GetResourceAllocationInfo1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_ALLOCATION_INFO return_value,
        UINT visibleMask,
        UINT numResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_ALLOCATION_INFO1>* pResourceAllocationInfo1)
{
    Pre_Process_ID3D12Device4_GetResourceAllocationInfo1(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device4_GetResourceAllocationInfo1(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
    }
    Post_Process_ID3D12Device4_GetResourceAllocationInfo1(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
}

void Dx12LayerConsumer::Process_ID3D12LifetimeOwner_LifetimeStateUpdated(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_LIFETIME_STATE NewState)
{
    Pre_Process_ID3D12LifetimeOwner_LifetimeStateUpdated(call_info, object_id, NewState);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12LifetimeOwner_LifetimeStateUpdated(call_info, object_id, NewState);
    }
    Post_Process_ID3D12LifetimeOwner_LifetimeStateUpdated(call_info, object_id, NewState);
}

void Dx12LayerConsumer::Process_ID3D12SwapChainAssistant_GetLUID(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_LUID return_value)
{
    Pre_Process_ID3D12SwapChainAssistant_GetLUID(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SwapChainAssistant_GetLUID(call_info, object_id, return_value);
    }
    Post_Process_ID3D12SwapChainAssistant_GetLUID(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12SwapChainAssistant_GetSwapChainObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppv)
{
    Pre_Process_ID3D12SwapChainAssistant_GetSwapChainObject(call_info, object_id, return_value, riid, ppv);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SwapChainAssistant_GetSwapChainObject(call_info, object_id, return_value, riid, ppv);
    }
    Post_Process_ID3D12SwapChainAssistant_GetSwapChainObject(call_info, object_id, return_value, riid, ppv);
}

void Dx12LayerConsumer::Process_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource,
        Decoded_GUID riidQueue,
        HandlePointerDecoder<void*>* ppvQueue)
{
    Pre_Process_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue(call_info, object_id, return_value, riidResource, ppvResource, riidQueue, ppvQueue);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue(call_info, object_id, return_value, riidResource, ppvResource, riidQueue, ppvQueue);
    }
    Post_Process_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue(call_info, object_id, return_value, riidResource, ppvResource, riidQueue, ppvQueue);
}

void Dx12LayerConsumer::Process_ID3D12SwapChainAssistant_InsertImplicitSync(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12SwapChainAssistant_InsertImplicitSync(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SwapChainAssistant_InsertImplicitSync(call_info, object_id, return_value);
    }
    Post_Process_ID3D12SwapChainAssistant_InsertImplicitSync(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12LifetimeTracker_DestroyOwnedObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pObject)
{
    Pre_Process_ID3D12LifetimeTracker_DestroyOwnedObject(call_info, object_id, return_value, pObject);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12LifetimeTracker_DestroyOwnedObject(call_info, object_id, return_value, pObject);
    }
    Post_Process_ID3D12LifetimeTracker_DestroyOwnedObject(call_info, object_id, return_value, pObject);
}

void Dx12LayerConsumer::Process_ID3D12StateObjectProperties_GetShaderIdentifier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<uint8_t>* return_value,
        WStringDecoder* pExportName)
{
    Pre_Process_ID3D12StateObjectProperties_GetShaderIdentifier(call_info, object_id, return_value, pExportName);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12StateObjectProperties_GetShaderIdentifier(call_info, object_id, return_value, pExportName);
    }
    Post_Process_ID3D12StateObjectProperties_GetShaderIdentifier(call_info, object_id, return_value, pExportName);
}

void Dx12LayerConsumer::Process_ID3D12StateObjectProperties_GetShaderStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value,
        WStringDecoder* pExportName)
{
    Pre_Process_ID3D12StateObjectProperties_GetShaderStackSize(call_info, object_id, return_value, pExportName);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12StateObjectProperties_GetShaderStackSize(call_info, object_id, return_value, pExportName);
    }
    Post_Process_ID3D12StateObjectProperties_GetShaderStackSize(call_info, object_id, return_value, pExportName);
}

void Dx12LayerConsumer::Process_ID3D12StateObjectProperties_GetPipelineStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12StateObjectProperties_GetPipelineStackSize(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12StateObjectProperties_GetPipelineStackSize(call_info, object_id, return_value);
    }
    Post_Process_ID3D12StateObjectProperties_GetPipelineStackSize(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12StateObjectProperties_SetPipelineStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 PipelineStackSizeInBytes)
{
    Pre_Process_ID3D12StateObjectProperties_SetPipelineStackSize(call_info, object_id, PipelineStackSizeInBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12StateObjectProperties_SetPipelineStackSize(call_info, object_id, PipelineStackSizeInBytes);
    }
    Post_Process_ID3D12StateObjectProperties_SetPipelineStackSize(call_info, object_id, PipelineStackSizeInBytes);
}

void Dx12LayerConsumer::Process_ID3D12Device5_CreateLifetimeTracker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pOwner,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvTracker)
{
    Pre_Process_ID3D12Device5_CreateLifetimeTracker(call_info, object_id, return_value, pOwner, riid, ppvTracker);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_CreateLifetimeTracker(call_info, object_id, return_value, pOwner, riid, ppvTracker);
    }
    Post_Process_ID3D12Device5_CreateLifetimeTracker(call_info, object_id, return_value, pOwner, riid, ppvTracker);
}

void Dx12LayerConsumer::Process_ID3D12Device5_RemoveDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12Device5_RemoveDevice(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_RemoveDevice(call_info, object_id);
    }
    Post_Process_ID3D12Device5_RemoveDevice(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12Device5_EnumerateMetaCommands(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pNumMetaCommands,
        StructPointerDecoder<Decoded_D3D12_META_COMMAND_DESC>* pDescs)
{
    Pre_Process_ID3D12Device5_EnumerateMetaCommands(call_info, object_id, return_value, pNumMetaCommands, pDescs);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_EnumerateMetaCommands(call_info, object_id, return_value, pNumMetaCommands, pDescs);
    }
    Post_Process_ID3D12Device5_EnumerateMetaCommands(call_info, object_id, return_value, pNumMetaCommands, pDescs);
}

void Dx12LayerConsumer::Process_ID3D12Device5_EnumerateMetaCommandParameters(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID CommandId,
        D3D12_META_COMMAND_PARAMETER_STAGE Stage,
        PointerDecoder<UINT>* pTotalStructureSizeInBytes,
        PointerDecoder<UINT>* pParameterCount,
        StructPointerDecoder<Decoded_D3D12_META_COMMAND_PARAMETER_DESC>* pParameterDescs)
{
    Pre_Process_ID3D12Device5_EnumerateMetaCommandParameters(call_info, object_id, return_value, CommandId, Stage, pTotalStructureSizeInBytes, pParameterCount, pParameterDescs);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_EnumerateMetaCommandParameters(call_info, object_id, return_value, CommandId, Stage, pTotalStructureSizeInBytes, pParameterCount, pParameterDescs);
    }
    Post_Process_ID3D12Device5_EnumerateMetaCommandParameters(call_info, object_id, return_value, CommandId, Stage, pTotalStructureSizeInBytes, pParameterCount, pParameterDescs);
}

void Dx12LayerConsumer::Process_ID3D12Device5_CreateMetaCommand(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID CommandId,
        UINT NodeMask,
        PointerDecoder<uint8_t>* pCreationParametersData,
        SIZE_T CreationParametersDataSizeInBytes,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppMetaCommand)
{
    Pre_Process_ID3D12Device5_CreateMetaCommand(call_info, object_id, return_value, CommandId, NodeMask, pCreationParametersData, CreationParametersDataSizeInBytes, riid, ppMetaCommand);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_CreateMetaCommand(call_info, object_id, return_value, CommandId, NodeMask, pCreationParametersData, CreationParametersDataSizeInBytes, riid, ppMetaCommand);
    }
    Post_Process_ID3D12Device5_CreateMetaCommand(call_info, object_id, return_value, CommandId, NodeMask, pCreationParametersData, CreationParametersDataSizeInBytes, riid, ppMetaCommand);
}

void Dx12LayerConsumer::Process_ID3D12Device5_CreateStateObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_STATE_OBJECT_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppStateObject)
{
    Pre_Process_ID3D12Device5_CreateStateObject(call_info, object_id, return_value, pDesc, riid, ppStateObject);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_CreateStateObject(call_info, object_id, return_value, pDesc, riid, ppStateObject);
    }
    Post_Process_ID3D12Device5_CreateStateObject(call_info, object_id, return_value, pDesc, riid, ppStateObject);
}

void Dx12LayerConsumer::Process_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS>* pDesc,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO>* pInfo)
{
    Pre_Process_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(call_info, object_id, pDesc, pInfo);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(call_info, object_id, pDesc, pInfo);
    }
    Post_Process_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(call_info, object_id, pDesc, pInfo);
}

void Dx12LayerConsumer::Process_ID3D12Device5_CheckDriverMatchingIdentifier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS return_value,
        D3D12_SERIALIZED_DATA_TYPE SerializedDataType,
        StructPointerDecoder<Decoded_D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER>* pIdentifierToCheck)
{
    Pre_Process_ID3D12Device5_CheckDriverMatchingIdentifier(call_info, object_id, return_value, SerializedDataType, pIdentifierToCheck);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device5_CheckDriverMatchingIdentifier(call_info, object_id, return_value, SerializedDataType, pIdentifierToCheck);
    }
    Post_Process_ID3D12Device5_CheckDriverMatchingIdentifier(call_info, object_id, return_value, SerializedDataType, pIdentifierToCheck);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement)
{
    Pre_Process_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement(call_info, object_id, Enablement);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement(call_info, object_id, Enablement);
    }
    Post_Process_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement(call_info, object_id, Enablement);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement)
{
    Pre_Process_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement(call_info, object_id, Enablement);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement(call_info, object_id, Enablement);
    }
    Post_Process_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement(call_info, object_id, Enablement);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement)
{
    Pre_Process_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement(call_info, object_id, Enablement);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement(call_info, object_id, Enablement);
    }
    Post_Process_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement(call_info, object_id, Enablement);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement)
{
    Pre_Process_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement(call_info, object_id, Enablement);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement(call_info, object_id, Enablement);
    }
    Post_Process_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement(call_info, object_id, Enablement);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedDataSettings2_UseMarkersOnlyAutoBreadcrumbs(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL MarkersOnly)
{
    Pre_Process_ID3D12DeviceRemovedExtendedDataSettings2_UseMarkersOnlyAutoBreadcrumbs(call_info, object_id, MarkersOnly);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedDataSettings2_UseMarkersOnlyAutoBreadcrumbs(call_info, object_id, MarkersOnly);
    }
    Post_Process_ID3D12DeviceRemovedExtendedDataSettings2_UseMarkersOnlyAutoBreadcrumbs(call_info, object_id, MarkersOnly);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT>* pOutput)
{
    Pre_Process_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput(call_info, object_id, return_value, pOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput(call_info, object_id, return_value, pOutput);
    }
    Post_Process_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput(call_info, object_id, return_value, pOutput);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT>* pOutput)
{
    Pre_Process_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput(call_info, object_id, return_value, pOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput(call_info, object_id, return_value, pOutput);
    }
    Post_Process_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput(call_info, object_id, return_value, pOutput);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT1>* pOutput)
{
    Pre_Process_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1(call_info, object_id, return_value, pOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1(call_info, object_id, return_value, pOutput);
    }
    Post_Process_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1(call_info, object_id, return_value, pOutput);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT1>* pOutput)
{
    Pre_Process_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1(call_info, object_id, return_value, pOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1(call_info, object_id, return_value, pOutput);
    }
    Post_Process_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1(call_info, object_id, return_value, pOutput);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedData2_GetPageFaultAllocationOutput2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT2>* pOutput)
{
    Pre_Process_ID3D12DeviceRemovedExtendedData2_GetPageFaultAllocationOutput2(call_info, object_id, return_value, pOutput);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedData2_GetPageFaultAllocationOutput2(call_info, object_id, return_value, pOutput);
    }
    Post_Process_ID3D12DeviceRemovedExtendedData2_GetPageFaultAllocationOutput2(call_info, object_id, return_value, pOutput);
}

void Dx12LayerConsumer::Process_ID3D12DeviceRemovedExtendedData2_GetDeviceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_DEVICE_STATE return_value)
{
    Pre_Process_ID3D12DeviceRemovedExtendedData2_GetDeviceState(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceRemovedExtendedData2_GetDeviceState(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DeviceRemovedExtendedData2_GetDeviceState(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device6_SetBackgroundProcessingMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_BACKGROUND_PROCESSING_MODE Mode,
        D3D12_MEASUREMENTS_ACTION MeasurementsAction,
        uint64_t hEventToSignalUponCompletion,
        PointerDecoder<BOOL>* pbFurtherMeasurementsDesired)
{
    Pre_Process_ID3D12Device6_SetBackgroundProcessingMode(call_info, object_id, return_value, Mode, MeasurementsAction, hEventToSignalUponCompletion, pbFurtherMeasurementsDesired);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device6_SetBackgroundProcessingMode(call_info, object_id, return_value, Mode, MeasurementsAction, hEventToSignalUponCompletion, pbFurtherMeasurementsDesired);
    }
    Post_Process_ID3D12Device6_SetBackgroundProcessingMode(call_info, object_id, return_value, Mode, MeasurementsAction, hEventToSignalUponCompletion, pbFurtherMeasurementsDesired);
}

void Dx12LayerConsumer::Process_ID3D12ProtectedResourceSession1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC1 return_value)
{
    Pre_Process_ID3D12ProtectedResourceSession1_GetDesc1(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ProtectedResourceSession1_GetDesc1(call_info, object_id, return_value);
    }
    Post_Process_ID3D12ProtectedResourceSession1_GetDesc1(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device7_AddToStateObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_STATE_OBJECT_DESC>* pAddition,
        format::HandleId pStateObjectToGrowFrom,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppNewStateObject)
{
    Pre_Process_ID3D12Device7_AddToStateObject(call_info, object_id, return_value, pAddition, pStateObjectToGrowFrom, riid, ppNewStateObject);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device7_AddToStateObject(call_info, object_id, return_value, pAddition, pStateObjectToGrowFrom, riid, ppNewStateObject);
    }
    Post_Process_ID3D12Device7_AddToStateObject(call_info, object_id, return_value, pAddition, pStateObjectToGrowFrom, riid, ppNewStateObject);
}

void Dx12LayerConsumer::Process_ID3D12Device7_CreateProtectedResourceSession1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC1>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppSession)
{
    Pre_Process_ID3D12Device7_CreateProtectedResourceSession1(call_info, object_id, return_value, pDesc, riid, ppSession);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device7_CreateProtectedResourceSession1(call_info, object_id, return_value, pDesc, riid, ppSession);
    }
    Post_Process_ID3D12Device7_CreateProtectedResourceSession1(call_info, object_id, return_value, pDesc, riid, ppSession);
}

void Dx12LayerConsumer::Process_ID3D12Device8_GetResourceAllocationInfo2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_ALLOCATION_INFO return_value,
        UINT visibleMask,
        UINT numResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_ALLOCATION_INFO1>* pResourceAllocationInfo1)
{
    Pre_Process_ID3D12Device8_GetResourceAllocationInfo2(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device8_GetResourceAllocationInfo2(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
    }
    Post_Process_ID3D12Device8_GetResourceAllocationInfo2(call_info, object_id, return_value, visibleMask, numResourceDescs, pResourceDescs, pResourceAllocationInfo1);
}

void Dx12LayerConsumer::Process_ID3D12Device8_CreateCommittedResource2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_RESOURCE_STATES InitialResourceState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device8_CreateCommittedResource2(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, pProtectedSession, riidResource, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device8_CreateCommittedResource2(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, pProtectedSession, riidResource, ppvResource);
    }
    Post_Process_ID3D12Device8_CreateCommittedResource2(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialResourceState, pOptimizedClearValue, pProtectedSession, riidResource, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device8_CreatePlacedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pHeap,
        UINT64 HeapOffset,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device8_CreatePlacedResource1(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device8_CreatePlacedResource1(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
    }
    Post_Process_ID3D12Device8_CreatePlacedResource1(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialState, pOptimizedClearValue, riid, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTargetedResource,
        format::HandleId pFeedbackResource,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(call_info, object_id, pTargetedResource, pFeedbackResource, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(call_info, object_id, pTargetedResource, pFeedbackResource, DestDescriptor);
    }
    Post_Process_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(call_info, object_id, pTargetedResource, pFeedbackResource, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12Device8_GetCopyableFootprints1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pResourceDesc,
        UINT FirstSubresource,
        UINT NumSubresources,
        UINT64 BaseOffset,
        StructPointerDecoder<Decoded_D3D12_PLACED_SUBRESOURCE_FOOTPRINT>* pLayouts,
        PointerDecoder<UINT>* pNumRows,
        PointerDecoder<UINT64>* pRowSizeInBytes,
        PointerDecoder<UINT64>* pTotalBytes)
{
    Pre_Process_ID3D12Device8_GetCopyableFootprints1(call_info, object_id, pResourceDesc, FirstSubresource, NumSubresources, BaseOffset, pLayouts, pNumRows, pRowSizeInBytes, pTotalBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device8_GetCopyableFootprints1(call_info, object_id, pResourceDesc, FirstSubresource, NumSubresources, BaseOffset, pLayouts, pNumRows, pRowSizeInBytes, pTotalBytes);
    }
    Post_Process_ID3D12Device8_GetCopyableFootprints1(call_info, object_id, pResourceDesc, FirstSubresource, NumSubresources, BaseOffset, pLayouts, pNumRows, pRowSizeInBytes, pTotalBytes);
}

void Dx12LayerConsumer::Process_ID3D12Resource1_GetProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppProtectedSession)
{
    Pre_Process_ID3D12Resource1_GetProtectedResourceSession(call_info, object_id, return_value, riid, ppProtectedSession);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource1_GetProtectedResourceSession(call_info, object_id, return_value, riid, ppProtectedSession);
    }
    Post_Process_ID3D12Resource1_GetProtectedResourceSession(call_info, object_id, return_value, riid, ppProtectedSession);
}

void Dx12LayerConsumer::Process_ID3D12Resource2_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_DESC1 return_value)
{
    Pre_Process_ID3D12Resource2_GetDesc1(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Resource2_GetDesc1(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Resource2_GetDesc1(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Heap1_GetProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppProtectedSession)
{
    Pre_Process_ID3D12Heap1_GetProtectedResourceSession(call_info, object_id, return_value, riid, ppProtectedSession);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Heap1_GetProtectedResourceSession(call_info, object_id, return_value, riid, ppProtectedSession);
    }
    Post_Process_ID3D12Heap1_GetProtectedResourceSession(call_info, object_id, return_value, riid, ppProtectedSession);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList3_SetProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pProtectedResourceSession)
{
    Pre_Process_ID3D12GraphicsCommandList3_SetProtectedResourceSession(call_info, object_id, pProtectedResourceSession);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList3_SetProtectedResourceSession(call_info, object_id, pProtectedResourceSession);
    }
    Post_Process_ID3D12GraphicsCommandList3_SetProtectedResourceSession(call_info, object_id, pProtectedResourceSession);
}

void Dx12LayerConsumer::Process_ID3D12MetaCommand_GetRequiredParameterResourceSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value,
        D3D12_META_COMMAND_PARAMETER_STAGE Stage,
        UINT ParameterIndex)
{
    Pre_Process_ID3D12MetaCommand_GetRequiredParameterResourceSize(call_info, object_id, return_value, Stage, ParameterIndex);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12MetaCommand_GetRequiredParameterResourceSize(call_info, object_id, return_value, Stage, ParameterIndex);
    }
    Post_Process_ID3D12MetaCommand_GetRequiredParameterResourceSize(call_info, object_id, return_value, Stage, ParameterIndex);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_BeginRenderPass(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRenderTargets,
        StructPointerDecoder<Decoded_D3D12_RENDER_PASS_RENDER_TARGET_DESC>* pRenderTargets,
        StructPointerDecoder<Decoded_D3D12_RENDER_PASS_DEPTH_STENCIL_DESC>* pDepthStencil,
        D3D12_RENDER_PASS_FLAGS Flags)
{
    Pre_Process_ID3D12GraphicsCommandList4_BeginRenderPass(call_info, object_id, NumRenderTargets, pRenderTargets, pDepthStencil, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_BeginRenderPass(call_info, object_id, NumRenderTargets, pRenderTargets, pDepthStencil, Flags);
    }
    Post_Process_ID3D12GraphicsCommandList4_BeginRenderPass(call_info, object_id, NumRenderTargets, pRenderTargets, pDepthStencil, Flags);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_EndRenderPass(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12GraphicsCommandList4_EndRenderPass(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_EndRenderPass(call_info, object_id);
    }
    Post_Process_ID3D12GraphicsCommandList4_EndRenderPass(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_InitializeMetaCommand(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pMetaCommand,
        PointerDecoder<uint8_t>* pInitializationParametersData,
        SIZE_T InitializationParametersDataSizeInBytes)
{
    Pre_Process_ID3D12GraphicsCommandList4_InitializeMetaCommand(call_info, object_id, pMetaCommand, pInitializationParametersData, InitializationParametersDataSizeInBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_InitializeMetaCommand(call_info, object_id, pMetaCommand, pInitializationParametersData, InitializationParametersDataSizeInBytes);
    }
    Post_Process_ID3D12GraphicsCommandList4_InitializeMetaCommand(call_info, object_id, pMetaCommand, pInitializationParametersData, InitializationParametersDataSizeInBytes);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_ExecuteMetaCommand(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pMetaCommand,
        PointerDecoder<uint8_t>* pExecutionParametersData,
        SIZE_T ExecutionParametersDataSizeInBytes)
{
    Pre_Process_ID3D12GraphicsCommandList4_ExecuteMetaCommand(call_info, object_id, pMetaCommand, pExecutionParametersData, ExecutionParametersDataSizeInBytes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_ExecuteMetaCommand(call_info, object_id, pMetaCommand, pExecutionParametersData, ExecutionParametersDataSizeInBytes);
    }
    Post_Process_ID3D12GraphicsCommandList4_ExecuteMetaCommand(call_info, object_id, pMetaCommand, pExecutionParametersData, ExecutionParametersDataSizeInBytes);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>* pDesc,
        UINT NumPostbuildInfoDescs,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC>* pPostbuildInfoDescs)
{
    Pre_Process_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(call_info, object_id, pDesc, NumPostbuildInfoDescs, pPostbuildInfoDescs);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(call_info, object_id, pDesc, NumPostbuildInfoDescs, pPostbuildInfoDescs);
    }
    Post_Process_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(call_info, object_id, pDesc, NumPostbuildInfoDescs, pPostbuildInfoDescs);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC>* pDesc,
        UINT NumSourceAccelerationStructures,
        PointerDecoder<D3D12_GPU_VIRTUAL_ADDRESS>* pSourceAccelerationStructureData)
{
    Pre_Process_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(call_info, object_id, pDesc, NumSourceAccelerationStructures, pSourceAccelerationStructureData);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(call_info, object_id, pDesc, NumSourceAccelerationStructures, pSourceAccelerationStructureData);
    }
    Post_Process_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(call_info, object_id, pDesc, NumSourceAccelerationStructures, pSourceAccelerationStructureData);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData,
        D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode)
{
    Pre_Process_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(call_info, object_id, DestAccelerationStructureData, SourceAccelerationStructureData, Mode);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(call_info, object_id, DestAccelerationStructureData, SourceAccelerationStructureData, Mode);
    }
    Post_Process_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(call_info, object_id, DestAccelerationStructureData, SourceAccelerationStructureData, Mode);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_SetPipelineState1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pStateObject)
{
    Pre_Process_ID3D12GraphicsCommandList4_SetPipelineState1(call_info, object_id, pStateObject);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_SetPipelineState1(call_info, object_id, pStateObject);
    }
    Post_Process_ID3D12GraphicsCommandList4_SetPipelineState1(call_info, object_id, pStateObject);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList4_DispatchRays(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_DISPATCH_RAYS_DESC>* pDesc)
{
    Pre_Process_ID3D12GraphicsCommandList4_DispatchRays(call_info, object_id, pDesc);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList4_DispatchRays(call_info, object_id, pDesc);
    }
    Post_Process_ID3D12GraphicsCommandList4_DispatchRays(call_info, object_id, pDesc);
}

void Dx12LayerConsumer::Process_ID3D12ShaderCacheSession_FindValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pKey,
        UINT KeySize,
        PointerDecoder<uint8_t>* pValue,
        PointerDecoder<UINT>* pValueSize)
{
    Pre_Process_ID3D12ShaderCacheSession_FindValue(call_info, object_id, return_value, pKey, KeySize, pValue, pValueSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ShaderCacheSession_FindValue(call_info, object_id, return_value, pKey, KeySize, pValue, pValueSize);
    }
    Post_Process_ID3D12ShaderCacheSession_FindValue(call_info, object_id, return_value, pKey, KeySize, pValue, pValueSize);
}

void Dx12LayerConsumer::Process_ID3D12ShaderCacheSession_StoreValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pKey,
        UINT KeySize,
        PointerDecoder<uint8_t>* pValue,
        UINT ValueSize)
{
    Pre_Process_ID3D12ShaderCacheSession_StoreValue(call_info, object_id, return_value, pKey, KeySize, pValue, ValueSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ShaderCacheSession_StoreValue(call_info, object_id, return_value, pKey, KeySize, pValue, ValueSize);
    }
    Post_Process_ID3D12ShaderCacheSession_StoreValue(call_info, object_id, return_value, pKey, KeySize, pValue, ValueSize);
}

void Dx12LayerConsumer::Process_ID3D12ShaderCacheSession_SetDeleteOnDestroy(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12ShaderCacheSession_SetDeleteOnDestroy(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ShaderCacheSession_SetDeleteOnDestroy(call_info, object_id);
    }
    Post_Process_ID3D12ShaderCacheSession_SetDeleteOnDestroy(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12ShaderCacheSession_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_SHADER_CACHE_SESSION_DESC return_value)
{
    Pre_Process_ID3D12ShaderCacheSession_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12ShaderCacheSession_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12ShaderCacheSession_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12Device9_CreateShaderCacheSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_SHADER_CACHE_SESSION_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvSession)
{
    Pre_Process_ID3D12Device9_CreateShaderCacheSession(call_info, object_id, return_value, pDesc, riid, ppvSession);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device9_CreateShaderCacheSession(call_info, object_id, return_value, pDesc, riid, ppvSession);
    }
    Post_Process_ID3D12Device9_CreateShaderCacheSession(call_info, object_id, return_value, pDesc, riid, ppvSession);
}

void Dx12LayerConsumer::Process_ID3D12Device9_ShaderCacheControl(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_SHADER_CACHE_KIND_FLAGS Kinds,
        D3D12_SHADER_CACHE_CONTROL_FLAGS Control)
{
    Pre_Process_ID3D12Device9_ShaderCacheControl(call_info, object_id, return_value, Kinds, Control);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device9_ShaderCacheControl(call_info, object_id, return_value, Kinds, Control);
    }
    Post_Process_ID3D12Device9_ShaderCacheControl(call_info, object_id, return_value, Kinds, Control);
}

void Dx12LayerConsumer::Process_ID3D12Device9_CreateCommandQueue1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMMAND_QUEUE_DESC>* pDesc,
        Decoded_GUID CreatorID,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandQueue)
{
    Pre_Process_ID3D12Device9_CreateCommandQueue1(call_info, object_id, return_value, pDesc, CreatorID, riid, ppCommandQueue);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device9_CreateCommandQueue1(call_info, object_id, return_value, pDesc, CreatorID, riid, ppCommandQueue);
    }
    Post_Process_ID3D12Device9_CreateCommandQueue1(call_info, object_id, return_value, pDesc, CreatorID, riid, ppCommandQueue);
}

void Dx12LayerConsumer::Process_ID3D12Device10_CreateCommittedResource3(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_BARRIER_LAYOUT InitialLayout,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        UINT32 NumCastableFormats,
        PointerDecoder<DXGI_FORMAT>* pCastableFormats,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device10_CreateCommittedResource3(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialLayout, pOptimizedClearValue, pProtectedSession, NumCastableFormats, pCastableFormats, riidResource, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device10_CreateCommittedResource3(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialLayout, pOptimizedClearValue, pProtectedSession, NumCastableFormats, pCastableFormats, riidResource, ppvResource);
    }
    Post_Process_ID3D12Device10_CreateCommittedResource3(call_info, object_id, return_value, pHeapProperties, HeapFlags, pDesc, InitialLayout, pOptimizedClearValue, pProtectedSession, NumCastableFormats, pCastableFormats, riidResource, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device10_CreatePlacedResource2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pHeap,
        UINT64 HeapOffset,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_BARRIER_LAYOUT InitialLayout,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        UINT32 NumCastableFormats,
        PointerDecoder<DXGI_FORMAT>* pCastableFormats,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device10_CreatePlacedResource2(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialLayout, pOptimizedClearValue, NumCastableFormats, pCastableFormats, riid, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device10_CreatePlacedResource2(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialLayout, pOptimizedClearValue, NumCastableFormats, pCastableFormats, riid, ppvResource);
    }
    Post_Process_ID3D12Device10_CreatePlacedResource2(call_info, object_id, return_value, pHeap, HeapOffset, pDesc, InitialLayout, pOptimizedClearValue, NumCastableFormats, pCastableFormats, riid, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device10_CreateReservedResource2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_BARRIER_LAYOUT InitialLayout,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        UINT32 NumCastableFormats,
        PointerDecoder<DXGI_FORMAT>* pCastableFormats,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource)
{
    Pre_Process_ID3D12Device10_CreateReservedResource2(call_info, object_id, return_value, pDesc, InitialLayout, pOptimizedClearValue, pProtectedSession, NumCastableFormats, pCastableFormats, riid, ppvResource);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device10_CreateReservedResource2(call_info, object_id, return_value, pDesc, InitialLayout, pOptimizedClearValue, pProtectedSession, NumCastableFormats, pCastableFormats, riid, ppvResource);
    }
    Post_Process_ID3D12Device10_CreateReservedResource2(call_info, object_id, return_value, pDesc, InitialLayout, pOptimizedClearValue, pProtectedSession, NumCastableFormats, pCastableFormats, riid, ppvResource);
}

void Dx12LayerConsumer::Process_ID3D12Device11_CreateSampler2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_SAMPLER_DESC2>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    Pre_Process_ID3D12Device11_CreateSampler2(call_info, object_id, pDesc, DestDescriptor);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Device11_CreateSampler2(call_info, object_id, pDesc, DestDescriptor);
    }
    Post_Process_ID3D12Device11_CreateSampler2(call_info, object_id, pDesc, DestDescriptor);
}

void Dx12LayerConsumer::Process_ID3D12VirtualizationGuestDevice_ShareWithHost(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pObject,
        PointerDecoder<uint64_t, void*>* pHandle)
{
    Pre_Process_ID3D12VirtualizationGuestDevice_ShareWithHost(call_info, object_id, return_value, pObject, pHandle);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12VirtualizationGuestDevice_ShareWithHost(call_info, object_id, return_value, pObject, pHandle);
    }
    Post_Process_ID3D12VirtualizationGuestDevice_ShareWithHost(call_info, object_id, return_value, pObject, pHandle);
}

void Dx12LayerConsumer::Process_ID3D12VirtualizationGuestDevice_CreateFenceFd(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 FenceValue,
        PointerDecoder<int>* pFenceFd)
{
    Pre_Process_ID3D12VirtualizationGuestDevice_CreateFenceFd(call_info, object_id, return_value, pFence, FenceValue, pFenceFd);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12VirtualizationGuestDevice_CreateFenceFd(call_info, object_id, return_value, pFence, FenceValue, pFenceFd);
    }
    Post_Process_ID3D12VirtualizationGuestDevice_CreateFenceFd(call_info, object_id, return_value, pFence, FenceValue, pFenceFd);
}

void Dx12LayerConsumer::Process_ID3D12Tools_EnableShaderInstrumentation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL bEnable)
{
    Pre_Process_ID3D12Tools_EnableShaderInstrumentation(call_info, object_id, bEnable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Tools_EnableShaderInstrumentation(call_info, object_id, bEnable);
    }
    Post_Process_ID3D12Tools_EnableShaderInstrumentation(call_info, object_id, bEnable);
}

void Dx12LayerConsumer::Process_ID3D12Tools_ShaderInstrumentationEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_ID3D12Tools_ShaderInstrumentationEnabled(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Tools_ShaderInstrumentationEnabled(call_info, object_id, return_value);
    }
    Post_Process_ID3D12Tools_ShaderInstrumentationEnabled(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12SDKConfiguration_SetSDKVersion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SDKVersion,
        StringDecoder* SDKPath)
{
    Pre_Process_ID3D12SDKConfiguration_SetSDKVersion(call_info, object_id, return_value, SDKVersion, SDKPath);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SDKConfiguration_SetSDKVersion(call_info, object_id, return_value, SDKVersion, SDKPath);
    }
    Post_Process_ID3D12SDKConfiguration_SetSDKVersion(call_info, object_id, return_value, SDKVersion, SDKPath);
}

void Dx12LayerConsumer::Process_ID3D12SDKConfiguration1_CreateDeviceFactory(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SDKVersion,
        StringDecoder* SDKPath,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvFactory)
{
    Pre_Process_ID3D12SDKConfiguration1_CreateDeviceFactory(call_info, object_id, return_value, SDKVersion, SDKPath, riid, ppvFactory);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SDKConfiguration1_CreateDeviceFactory(call_info, object_id, return_value, SDKVersion, SDKPath, riid, ppvFactory);
    }
    Post_Process_ID3D12SDKConfiguration1_CreateDeviceFactory(call_info, object_id, return_value, SDKVersion, SDKPath, riid, ppvFactory);
}

void Dx12LayerConsumer::Process_ID3D12SDKConfiguration1_FreeUnusedSDKs(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12SDKConfiguration1_FreeUnusedSDKs(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SDKConfiguration1_FreeUnusedSDKs(call_info, object_id);
    }
    Post_Process_ID3D12SDKConfiguration1_FreeUnusedSDKs(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_InitializeFromGlobalState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12DeviceFactory_InitializeFromGlobalState(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_InitializeFromGlobalState(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DeviceFactory_InitializeFromGlobalState(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_ApplyToGlobalState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12DeviceFactory_ApplyToGlobalState(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_ApplyToGlobalState(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DeviceFactory_ApplyToGlobalState(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_SetFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEVICE_FACTORY_FLAGS flags)
{
    Pre_Process_ID3D12DeviceFactory_SetFlags(call_info, object_id, return_value, flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_SetFlags(call_info, object_id, return_value, flags);
    }
    Post_Process_ID3D12DeviceFactory_SetFlags(call_info, object_id, return_value, flags);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_GetFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DEVICE_FACTORY_FLAGS return_value)
{
    Pre_Process_ID3D12DeviceFactory_GetFlags(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_GetFlags(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DeviceFactory_GetFlags(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_GetConfigurationInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID clsid,
        Decoded_GUID iid,
        HandlePointerDecoder<void*>* ppv)
{
    Pre_Process_ID3D12DeviceFactory_GetConfigurationInterface(call_info, object_id, return_value, clsid, iid, ppv);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_GetConfigurationInterface(call_info, object_id, return_value, clsid, iid, ppv);
    }
    Post_Process_ID3D12DeviceFactory_GetConfigurationInterface(call_info, object_id, return_value, clsid, iid, ppv);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_EnableExperimentalFeatures(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumFeatures,
        StructPointerDecoder<Decoded_GUID>* pIIDs,
        PointerDecoder<uint8_t>* pConfigurationStructs,
        PointerDecoder<UINT>* pConfigurationStructSizes)
{
    Pre_Process_ID3D12DeviceFactory_EnableExperimentalFeatures(call_info, object_id, return_value, NumFeatures, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_EnableExperimentalFeatures(call_info, object_id, return_value, NumFeatures, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
    }
    Post_Process_ID3D12DeviceFactory_EnableExperimentalFeatures(call_info, object_id, return_value, NumFeatures, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
}

void Dx12LayerConsumer::Process_ID3D12DeviceFactory_CreateDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId adapter,
        D3D_FEATURE_LEVEL FeatureLevel,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDevice)
{
    Pre_Process_ID3D12DeviceFactory_CreateDevice(call_info, object_id, return_value, adapter, FeatureLevel, riid, ppvDevice);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceFactory_CreateDevice(call_info, object_id, return_value, adapter, FeatureLevel, riid, ppvDevice);
    }
    Post_Process_ID3D12DeviceFactory_CreateDevice(call_info, object_id, return_value, adapter, FeatureLevel, riid, ppvDevice);
}

void Dx12LayerConsumer::Process_ID3D12DeviceConfiguration_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_DEVICE_CONFIGURATION_DESC return_value)
{
    Pre_Process_ID3D12DeviceConfiguration_GetDesc(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceConfiguration_GetDesc(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DeviceConfiguration_GetDesc(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DeviceConfiguration_GetEnabledExperimentalFeatures(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pGuids,
        UINT NumGuids)
{
    Pre_Process_ID3D12DeviceConfiguration_GetEnabledExperimentalFeatures(call_info, object_id, return_value, pGuids, NumGuids);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceConfiguration_GetEnabledExperimentalFeatures(call_info, object_id, return_value, pGuids, NumGuids);
    }
    Post_Process_ID3D12DeviceConfiguration_GetEnabledExperimentalFeatures(call_info, object_id, return_value, pGuids, NumGuids);
}

void Dx12LayerConsumer::Process_ID3D12DeviceConfiguration_SerializeVersionedRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* pDesc,
        HandlePointerDecoder<ID3D10Blob*>* ppResult,
        HandlePointerDecoder<ID3D10Blob*>* ppError)
{
    Pre_Process_ID3D12DeviceConfiguration_SerializeVersionedRootSignature(call_info, object_id, return_value, pDesc, ppResult, ppError);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceConfiguration_SerializeVersionedRootSignature(call_info, object_id, return_value, pDesc, ppResult, ppError);
    }
    Post_Process_ID3D12DeviceConfiguration_SerializeVersionedRootSignature(call_info, object_id, return_value, pDesc, ppResult, ppError);
}

void Dx12LayerConsumer::Process_ID3D12DeviceConfiguration_CreateVersionedRootSignatureDeserializer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pBlob,
        SIZE_T Size,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDeserializer)
{
    Pre_Process_ID3D12DeviceConfiguration_CreateVersionedRootSignatureDeserializer(call_info, object_id, return_value, pBlob, Size, riid, ppvDeserializer);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DeviceConfiguration_CreateVersionedRootSignatureDeserializer(call_info, object_id, return_value, pBlob, Size, riid, ppvDeserializer);
    }
    Post_Process_ID3D12DeviceConfiguration_CreateVersionedRootSignatureDeserializer(call_info, object_id, return_value, pBlob, Size, riid, ppvDeserializer);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList5_RSSetShadingRate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_SHADING_RATE baseShadingRate,
        PointerDecoder<D3D12_SHADING_RATE_COMBINER>* combiners)
{
    Pre_Process_ID3D12GraphicsCommandList5_RSSetShadingRate(call_info, object_id, baseShadingRate, combiners);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList5_RSSetShadingRate(call_info, object_id, baseShadingRate, combiners);
    }
    Post_Process_ID3D12GraphicsCommandList5_RSSetShadingRate(call_info, object_id, baseShadingRate, combiners);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList5_RSSetShadingRateImage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId shadingRateImage)
{
    Pre_Process_ID3D12GraphicsCommandList5_RSSetShadingRateImage(call_info, object_id, shadingRateImage);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList5_RSSetShadingRateImage(call_info, object_id, shadingRateImage);
    }
    Post_Process_ID3D12GraphicsCommandList5_RSSetShadingRateImage(call_info, object_id, shadingRateImage);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList6_DispatchMesh(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT ThreadGroupCountX,
        UINT ThreadGroupCountY,
        UINT ThreadGroupCountZ)
{
    Pre_Process_ID3D12GraphicsCommandList6_DispatchMesh(call_info, object_id, ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList6_DispatchMesh(call_info, object_id, ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
    }
    Post_Process_ID3D12GraphicsCommandList6_DispatchMesh(call_info, object_id, ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList7_Barrier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT32 NumBarrierGroups,
        StructPointerDecoder<Decoded_D3D12_BARRIER_GROUP>* pBarrierGroups)
{
    Pre_Process_ID3D12GraphicsCommandList7_Barrier(call_info, object_id, NumBarrierGroups, pBarrierGroups);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList7_Barrier(call_info, object_id, NumBarrierGroups, pBarrierGroups);
    }
    Post_Process_ID3D12GraphicsCommandList7_Barrier(call_info, object_id, NumBarrierGroups, pBarrierGroups);
}

void Dx12LayerConsumer::Process_ID3D12GraphicsCommandList8_OMSetFrontAndBackStencilRef(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT FrontStencilRef,
        UINT BackStencilRef)
{
    Pre_Process_ID3D12GraphicsCommandList8_OMSetFrontAndBackStencilRef(call_info, object_id, FrontStencilRef, BackStencilRef);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12GraphicsCommandList8_OMSetFrontAndBackStencilRef(call_info, object_id, FrontStencilRef, BackStencilRef);
    }
    Post_Process_ID3D12GraphicsCommandList8_OMSetFrontAndBackStencilRef(call_info, object_id, FrontStencilRef, BackStencilRef);
}

/*
** This part is generated from d3dcommon.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_ID3D10Blob_GetBufferPointer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        uint64_t return_value)
{
    Pre_Process_ID3D10Blob_GetBufferPointer(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D10Blob_GetBufferPointer(call_info, object_id, return_value);
    }
    Post_Process_ID3D10Blob_GetBufferPointer(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D10Blob_GetBufferSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        SIZE_T return_value)
{
    Pre_Process_ID3D10Blob_GetBufferSize(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D10Blob_GetBufferSize(call_info, object_id, return_value);
    }
    Post_Process_ID3D10Blob_GetBufferSize(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3DDestructionNotifier_RegisterDestructionCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t callbackFn,
        uint64_t pData,
        PointerDecoder<UINT>* pCallbackID)
{
    Pre_Process_ID3DDestructionNotifier_RegisterDestructionCallback(call_info, object_id, return_value, callbackFn, pData, pCallbackID);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3DDestructionNotifier_RegisterDestructionCallback(call_info, object_id, return_value, callbackFn, pData, pCallbackID);
    }
    Post_Process_ID3DDestructionNotifier_RegisterDestructionCallback(call_info, object_id, return_value, callbackFn, pData, pCallbackID);
}

void Dx12LayerConsumer::Process_ID3DDestructionNotifier_UnregisterDestructionCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT callbackID)
{
    Pre_Process_ID3DDestructionNotifier_UnregisterDestructionCallback(call_info, object_id, return_value, callbackID);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3DDestructionNotifier_UnregisterDestructionCallback(call_info, object_id, return_value, callbackID);
    }
    Post_Process_ID3DDestructionNotifier_UnregisterDestructionCallback(call_info, object_id, return_value, callbackID);
}

/*
** This part is generated from d3d12sdklayers.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_ID3D12Debug_EnableDebugLayer(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12Debug_EnableDebugLayer(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug_EnableDebugLayer(call_info, object_id);
    }
    Post_Process_ID3D12Debug_EnableDebugLayer(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12Debug1_EnableDebugLayer(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12Debug1_EnableDebugLayer(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug1_EnableDebugLayer(call_info, object_id);
    }
    Post_Process_ID3D12Debug1_EnableDebugLayer(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12Debug1_SetEnableGPUBasedValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable)
{
    Pre_Process_ID3D12Debug1_SetEnableGPUBasedValidation(call_info, object_id, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug1_SetEnableGPUBasedValidation(call_info, object_id, Enable);
    }
    Post_Process_ID3D12Debug1_SetEnableGPUBasedValidation(call_info, object_id, Enable);
}

void Dx12LayerConsumer::Process_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable)
{
    Pre_Process_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(call_info, object_id, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(call_info, object_id, Enable);
    }
    Post_Process_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(call_info, object_id, Enable);
}

void Dx12LayerConsumer::Process_ID3D12Debug2_SetGPUBasedValidationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_BASED_VALIDATION_FLAGS Flags)
{
    Pre_Process_ID3D12Debug2_SetGPUBasedValidationFlags(call_info, object_id, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug2_SetGPUBasedValidationFlags(call_info, object_id, Flags);
    }
    Post_Process_ID3D12Debug2_SetGPUBasedValidationFlags(call_info, object_id, Flags);
}

void Dx12LayerConsumer::Process_ID3D12Debug3_SetEnableGPUBasedValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable)
{
    Pre_Process_ID3D12Debug3_SetEnableGPUBasedValidation(call_info, object_id, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug3_SetEnableGPUBasedValidation(call_info, object_id, Enable);
    }
    Post_Process_ID3D12Debug3_SetEnableGPUBasedValidation(call_info, object_id, Enable);
}

void Dx12LayerConsumer::Process_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable)
{
    Pre_Process_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(call_info, object_id, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(call_info, object_id, Enable);
    }
    Post_Process_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(call_info, object_id, Enable);
}

void Dx12LayerConsumer::Process_ID3D12Debug3_SetGPUBasedValidationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_BASED_VALIDATION_FLAGS Flags)
{
    Pre_Process_ID3D12Debug3_SetGPUBasedValidationFlags(call_info, object_id, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug3_SetGPUBasedValidationFlags(call_info, object_id, Flags);
    }
    Post_Process_ID3D12Debug3_SetGPUBasedValidationFlags(call_info, object_id, Flags);
}

void Dx12LayerConsumer::Process_ID3D12Debug4_DisableDebugLayer(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12Debug4_DisableDebugLayer(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug4_DisableDebugLayer(call_info, object_id);
    }
    Post_Process_ID3D12Debug4_DisableDebugLayer(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12Debug5_SetEnableAutoName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable)
{
    Pre_Process_ID3D12Debug5_SetEnableAutoName(call_info, object_id, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug5_SetEnableAutoName(call_info, object_id, Enable);
    }
    Post_Process_ID3D12Debug5_SetEnableAutoName(call_info, object_id, Enable);
}

void Dx12LayerConsumer::Process_ID3D12Debug6_SetForceLegacyBarrierValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable)
{
    Pre_Process_ID3D12Debug6_SetForceLegacyBarrierValidation(call_info, object_id, Enable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12Debug6_SetForceLegacyBarrierValidation(call_info, object_id, Enable);
    }
    Post_Process_ID3D12Debug6_SetForceLegacyBarrierValidation(call_info, object_id, Enable);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice1_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugDevice1_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice1_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugDevice1_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice1_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugDevice1_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice1_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugDevice1_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice1_ReportLiveDeviceObjects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_RLDO_FLAGS Flags)
{
    Pre_Process_ID3D12DebugDevice1_ReportLiveDeviceObjects(call_info, object_id, return_value, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice1_ReportLiveDeviceObjects(call_info, object_id, return_value, Flags);
    }
    Post_Process_ID3D12DebugDevice1_ReportLiveDeviceObjects(call_info, object_id, return_value, Flags);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice_SetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_FEATURE Mask)
{
    Pre_Process_ID3D12DebugDevice_SetFeatureMask(call_info, object_id, return_value, Mask);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice_SetFeatureMask(call_info, object_id, return_value, Mask);
    }
    Post_Process_ID3D12DebugDevice_SetFeatureMask(call_info, object_id, return_value, Mask);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice_GetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DEBUG_FEATURE return_value)
{
    Pre_Process_ID3D12DebugDevice_GetFeatureMask(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice_GetFeatureMask(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DebugDevice_GetFeatureMask(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice_ReportLiveDeviceObjects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_RLDO_FLAGS Flags)
{
    Pre_Process_ID3D12DebugDevice_ReportLiveDeviceObjects(call_info, object_id, return_value, Flags);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice_ReportLiveDeviceObjects(call_info, object_id, return_value, Flags);
    }
    Post_Process_ID3D12DebugDevice_ReportLiveDeviceObjects(call_info, object_id, return_value, Flags);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice2_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugDevice2_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice2_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugDevice2_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugDevice2_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugDevice2_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugDevice2_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugDevice2_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandQueue_AssertResourceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        format::HandleId pResource,
        UINT Subresource,
        UINT State)
{
    Pre_Process_ID3D12DebugCommandQueue_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandQueue_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
    }
    Post_Process_ID3D12DebugCommandQueue_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandQueue1_AssertResourceAccess(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_ACCESS Access)
{
    Pre_Process_ID3D12DebugCommandQueue1_AssertResourceAccess(call_info, object_id, pResource, Subresource, Access);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandQueue1_AssertResourceAccess(call_info, object_id, pResource, Subresource, Access);
    }
    Post_Process_ID3D12DebugCommandQueue1_AssertResourceAccess(call_info, object_id, pResource, Subresource, Access);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandQueue1_AssertTextureLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_LAYOUT Layout)
{
    Pre_Process_ID3D12DebugCommandQueue1_AssertTextureLayout(call_info, object_id, pResource, Subresource, Layout);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandQueue1_AssertTextureLayout(call_info, object_id, pResource, Subresource, Layout);
    }
    Post_Process_ID3D12DebugCommandQueue1_AssertTextureLayout(call_info, object_id, pResource, Subresource, Layout);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList1_AssertResourceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        format::HandleId pResource,
        UINT Subresource,
        UINT State)
{
    Pre_Process_ID3D12DebugCommandList1_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList1_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
    }
    Post_Process_ID3D12DebugCommandList1_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList1_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugCommandList1_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList1_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugCommandList1_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList1_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugCommandList1_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList1_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugCommandList1_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList_AssertResourceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        format::HandleId pResource,
        UINT Subresource,
        UINT State)
{
    Pre_Process_ID3D12DebugCommandList_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
    }
    Post_Process_ID3D12DebugCommandList_AssertResourceState(call_info, object_id, return_value, pResource, Subresource, State);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList_SetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_FEATURE Mask)
{
    Pre_Process_ID3D12DebugCommandList_SetFeatureMask(call_info, object_id, return_value, Mask);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList_SetFeatureMask(call_info, object_id, return_value, Mask);
    }
    Post_Process_ID3D12DebugCommandList_SetFeatureMask(call_info, object_id, return_value, Mask);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList_GetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DEBUG_FEATURE return_value)
{
    Pre_Process_ID3D12DebugCommandList_GetFeatureMask(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList_GetFeatureMask(call_info, object_id, return_value);
    }
    Post_Process_ID3D12DebugCommandList_GetFeatureMask(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList2_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugCommandList2_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList2_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugCommandList2_SetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList2_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize)
{
    Pre_Process_ID3D12DebugCommandList2_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList2_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
    }
    Post_Process_ID3D12DebugCommandList2_GetDebugParameter(call_info, object_id, return_value, Type, pData, DataSize);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList3_AssertResourceAccess(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_ACCESS Access)
{
    Pre_Process_ID3D12DebugCommandList3_AssertResourceAccess(call_info, object_id, pResource, Subresource, Access);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList3_AssertResourceAccess(call_info, object_id, pResource, Subresource, Access);
    }
    Post_Process_ID3D12DebugCommandList3_AssertResourceAccess(call_info, object_id, pResource, Subresource, Access);
}

void Dx12LayerConsumer::Process_ID3D12DebugCommandList3_AssertTextureLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_LAYOUT Layout)
{
    Pre_Process_ID3D12DebugCommandList3_AssertTextureLayout(call_info, object_id, pResource, Subresource, Layout);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12DebugCommandList3_AssertTextureLayout(call_info, object_id, pResource, Subresource, Layout);
    }
    Post_Process_ID3D12DebugCommandList3_AssertTextureLayout(call_info, object_id, pResource, Subresource, Layout);
}

void Dx12LayerConsumer::Process_ID3D12SharingContract_Present(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        uint64_t window)
{
    Pre_Process_ID3D12SharingContract_Present(call_info, object_id, pResource, Subresource, window);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SharingContract_Present(call_info, object_id, pResource, Subresource, window);
    }
    Post_Process_ID3D12SharingContract_Present(call_info, object_id, pResource, Subresource, window);
}

void Dx12LayerConsumer::Process_ID3D12SharingContract_SharedFenceSignal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pFence,
        UINT64 FenceValue)
{
    Pre_Process_ID3D12SharingContract_SharedFenceSignal(call_info, object_id, pFence, FenceValue);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SharingContract_SharedFenceSignal(call_info, object_id, pFence, FenceValue);
    }
    Post_Process_ID3D12SharingContract_SharedFenceSignal(call_info, object_id, pFence, FenceValue);
}

void Dx12LayerConsumer::Process_ID3D12SharingContract_BeginCapturableWork(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_GUID guid)
{
    Pre_Process_ID3D12SharingContract_BeginCapturableWork(call_info, object_id, guid);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SharingContract_BeginCapturableWork(call_info, object_id, guid);
    }
    Post_Process_ID3D12SharingContract_BeginCapturableWork(call_info, object_id, guid);
}

void Dx12LayerConsumer::Process_ID3D12SharingContract_EndCapturableWork(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_GUID guid)
{
    Pre_Process_ID3D12SharingContract_EndCapturableWork(call_info, object_id, guid);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12SharingContract_EndCapturableWork(call_info, object_id, guid);
    }
    Post_Process_ID3D12SharingContract_EndCapturableWork(call_info, object_id, guid);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_SetMessageCountLimit(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 MessageCountLimit)
{
    Pre_Process_ID3D12InfoQueue_SetMessageCountLimit(call_info, object_id, return_value, MessageCountLimit);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_SetMessageCountLimit(call_info, object_id, return_value, MessageCountLimit);
    }
    Post_Process_ID3D12InfoQueue_SetMessageCountLimit(call_info, object_id, return_value, MessageCountLimit);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_ClearStoredMessages(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12InfoQueue_ClearStoredMessages(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_ClearStoredMessages(call_info, object_id);
    }
    Post_Process_ID3D12InfoQueue_ClearStoredMessages(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetMessage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 MessageIndex,
        StructPointerDecoder<Decoded_D3D12_MESSAGE>* pMessage,
        PointerDecoder<SIZE_T>* pMessageByteLength)
{
    Pre_Process_ID3D12InfoQueue_GetMessage(call_info, object_id, return_value, MessageIndex, pMessage, pMessageByteLength);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetMessage(call_info, object_id, return_value, MessageIndex, pMessage, pMessageByteLength);
    }
    Post_Process_ID3D12InfoQueue_GetMessage(call_info, object_id, return_value, MessageIndex, pMessage, pMessageByteLength);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetNumStoredMessages(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12InfoQueue_GetNumStoredMessages(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetNumStoredMessages(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetNumStoredMessages(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetMessageCountLimit(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value)
{
    Pre_Process_ID3D12InfoQueue_GetMessageCountLimit(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetMessageCountLimit(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetMessageCountLimit(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_AddStorageFilterEntries(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter)
{
    Pre_Process_ID3D12InfoQueue_AddStorageFilterEntries(call_info, object_id, return_value, pFilter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_AddStorageFilterEntries(call_info, object_id, return_value, pFilter);
    }
    Post_Process_ID3D12InfoQueue_AddStorageFilterEntries(call_info, object_id, return_value, pFilter);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter,
        PointerDecoder<SIZE_T>* pFilterByteLength)
{
    Pre_Process_ID3D12InfoQueue_GetStorageFilter(call_info, object_id, return_value, pFilter, pFilterByteLength);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetStorageFilter(call_info, object_id, return_value, pFilter, pFilterByteLength);
    }
    Post_Process_ID3D12InfoQueue_GetStorageFilter(call_info, object_id, return_value, pFilter, pFilterByteLength);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_ClearStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12InfoQueue_ClearStorageFilter(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_ClearStorageFilter(call_info, object_id);
    }
    Post_Process_ID3D12InfoQueue_ClearStorageFilter(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PushEmptyStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12InfoQueue_PushEmptyStorageFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PushEmptyStorageFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_PushEmptyStorageFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PushCopyOfStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12InfoQueue_PushCopyOfStorageFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PushCopyOfStorageFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_PushCopyOfStorageFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PushStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter)
{
    Pre_Process_ID3D12InfoQueue_PushStorageFilter(call_info, object_id, return_value, pFilter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PushStorageFilter(call_info, object_id, return_value, pFilter);
    }
    Post_Process_ID3D12InfoQueue_PushStorageFilter(call_info, object_id, return_value, pFilter);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PopStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12InfoQueue_PopStorageFilter(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PopStorageFilter(call_info, object_id);
    }
    Post_Process_ID3D12InfoQueue_PopStorageFilter(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetStorageFilterStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value)
{
    Pre_Process_ID3D12InfoQueue_GetStorageFilterStackSize(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetStorageFilterStackSize(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetStorageFilterStackSize(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_AddRetrievalFilterEntries(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter)
{
    Pre_Process_ID3D12InfoQueue_AddRetrievalFilterEntries(call_info, object_id, return_value, pFilter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_AddRetrievalFilterEntries(call_info, object_id, return_value, pFilter);
    }
    Post_Process_ID3D12InfoQueue_AddRetrievalFilterEntries(call_info, object_id, return_value, pFilter);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter,
        PointerDecoder<SIZE_T>* pFilterByteLength)
{
    Pre_Process_ID3D12InfoQueue_GetRetrievalFilter(call_info, object_id, return_value, pFilter, pFilterByteLength);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetRetrievalFilter(call_info, object_id, return_value, pFilter, pFilterByteLength);
    }
    Post_Process_ID3D12InfoQueue_GetRetrievalFilter(call_info, object_id, return_value, pFilter, pFilterByteLength);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_ClearRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12InfoQueue_ClearRetrievalFilter(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_ClearRetrievalFilter(call_info, object_id);
    }
    Post_Process_ID3D12InfoQueue_ClearRetrievalFilter(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PushEmptyRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12InfoQueue_PushEmptyRetrievalFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PushEmptyRetrievalFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_PushEmptyRetrievalFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PushCopyOfRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value)
{
    Pre_Process_ID3D12InfoQueue_PushCopyOfRetrievalFilter(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PushCopyOfRetrievalFilter(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_PushCopyOfRetrievalFilter(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PushRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter)
{
    Pre_Process_ID3D12InfoQueue_PushRetrievalFilter(call_info, object_id, return_value, pFilter);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PushRetrievalFilter(call_info, object_id, return_value, pFilter);
    }
    Post_Process_ID3D12InfoQueue_PushRetrievalFilter(call_info, object_id, return_value, pFilter);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_PopRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id)
{
    Pre_Process_ID3D12InfoQueue_PopRetrievalFilter(call_info, object_id);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_PopRetrievalFilter(call_info, object_id);
    }
    Post_Process_ID3D12InfoQueue_PopRetrievalFilter(call_info, object_id);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetRetrievalFilterStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value)
{
    Pre_Process_ID3D12InfoQueue_GetRetrievalFilterStackSize(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetRetrievalFilterStackSize(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetRetrievalFilterStackSize(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_AddMessage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_CATEGORY Category,
        D3D12_MESSAGE_SEVERITY Severity,
        D3D12_MESSAGE_ID ID,
        StringDecoder* pDescription)
{
    Pre_Process_ID3D12InfoQueue_AddMessage(call_info, object_id, return_value, Category, Severity, ID, pDescription);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_AddMessage(call_info, object_id, return_value, Category, Severity, ID, pDescription);
    }
    Post_Process_ID3D12InfoQueue_AddMessage(call_info, object_id, return_value, Category, Severity, ID, pDescription);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_AddApplicationMessage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_SEVERITY Severity,
        StringDecoder* pDescription)
{
    Pre_Process_ID3D12InfoQueue_AddApplicationMessage(call_info, object_id, return_value, Severity, pDescription);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_AddApplicationMessage(call_info, object_id, return_value, Severity, pDescription);
    }
    Post_Process_ID3D12InfoQueue_AddApplicationMessage(call_info, object_id, return_value, Severity, pDescription);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_SetBreakOnCategory(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_CATEGORY Category,
        BOOL bEnable)
{
    Pre_Process_ID3D12InfoQueue_SetBreakOnCategory(call_info, object_id, return_value, Category, bEnable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_SetBreakOnCategory(call_info, object_id, return_value, Category, bEnable);
    }
    Post_Process_ID3D12InfoQueue_SetBreakOnCategory(call_info, object_id, return_value, Category, bEnable);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_SetBreakOnSeverity(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_SEVERITY Severity,
        BOOL bEnable)
{
    Pre_Process_ID3D12InfoQueue_SetBreakOnSeverity(call_info, object_id, return_value, Severity, bEnable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_SetBreakOnSeverity(call_info, object_id, return_value, Severity, bEnable);
    }
    Post_Process_ID3D12InfoQueue_SetBreakOnSeverity(call_info, object_id, return_value, Severity, bEnable);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_SetBreakOnID(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_ID ID,
        BOOL bEnable)
{
    Pre_Process_ID3D12InfoQueue_SetBreakOnID(call_info, object_id, return_value, ID, bEnable);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_SetBreakOnID(call_info, object_id, return_value, ID, bEnable);
    }
    Post_Process_ID3D12InfoQueue_SetBreakOnID(call_info, object_id, return_value, ID, bEnable);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetBreakOnCategory(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        D3D12_MESSAGE_CATEGORY Category)
{
    Pre_Process_ID3D12InfoQueue_GetBreakOnCategory(call_info, object_id, return_value, Category);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetBreakOnCategory(call_info, object_id, return_value, Category);
    }
    Post_Process_ID3D12InfoQueue_GetBreakOnCategory(call_info, object_id, return_value, Category);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetBreakOnSeverity(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        D3D12_MESSAGE_SEVERITY Severity)
{
    Pre_Process_ID3D12InfoQueue_GetBreakOnSeverity(call_info, object_id, return_value, Severity);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetBreakOnSeverity(call_info, object_id, return_value, Severity);
    }
    Post_Process_ID3D12InfoQueue_GetBreakOnSeverity(call_info, object_id, return_value, Severity);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetBreakOnID(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        D3D12_MESSAGE_ID ID)
{
    Pre_Process_ID3D12InfoQueue_GetBreakOnID(call_info, object_id, return_value, ID);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetBreakOnID(call_info, object_id, return_value, ID);
    }
    Post_Process_ID3D12InfoQueue_GetBreakOnID(call_info, object_id, return_value, ID);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_SetMuteDebugOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL bMute)
{
    Pre_Process_ID3D12InfoQueue_SetMuteDebugOutput(call_info, object_id, bMute);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_SetMuteDebugOutput(call_info, object_id, bMute);
    }
    Post_Process_ID3D12InfoQueue_SetMuteDebugOutput(call_info, object_id, bMute);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue_GetMuteDebugOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value)
{
    Pre_Process_ID3D12InfoQueue_GetMuteDebugOutput(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue_GetMuteDebugOutput(call_info, object_id, return_value);
    }
    Post_Process_ID3D12InfoQueue_GetMuteDebugOutput(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue1_RegisterMessageCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t CallbackFunc,
        D3D12_MESSAGE_CALLBACK_FLAGS CallbackFilterFlags,
        uint64_t pContext,
        PointerDecoder<DWORD>* pCallbackCookie)
{
    Pre_Process_ID3D12InfoQueue1_RegisterMessageCallback(call_info, object_id, return_value, CallbackFunc, CallbackFilterFlags, pContext, pCallbackCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue1_RegisterMessageCallback(call_info, object_id, return_value, CallbackFunc, CallbackFilterFlags, pContext, pCallbackCookie);
    }
    Post_Process_ID3D12InfoQueue1_RegisterMessageCallback(call_info, object_id, return_value, CallbackFunc, CallbackFilterFlags, pContext, pCallbackCookie);
}

void Dx12LayerConsumer::Process_ID3D12InfoQueue1_UnregisterMessageCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DWORD CallbackCookie)
{
    Pre_Process_ID3D12InfoQueue1_UnregisterMessageCallback(call_info, object_id, return_value, CallbackCookie);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_ID3D12InfoQueue1_UnregisterMessageCallback(call_info, object_id, return_value, CallbackCookie);
    }
    Post_Process_ID3D12InfoQueue1_UnregisterMessageCallback(call_info, object_id, return_value, CallbackCookie);
}

/*
** This part is generated from Unknwnbase.h in Windows SDK: 10.0.20348.0
**
*/
void Dx12LayerConsumer::Process_IUnknown_QueryInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvObject)
{
    Pre_Process_IUnknown_QueryInterface(call_info, object_id, return_value, riid, ppvObject);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IUnknown_QueryInterface(call_info, object_id, return_value, riid, ppvObject);
    }
    Post_Process_IUnknown_QueryInterface(call_info, object_id, return_value, riid, ppvObject);
}

void Dx12LayerConsumer::Process_IUnknown_AddRef(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        ULONG return_value)
{
    Pre_Process_IUnknown_AddRef(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IUnknown_AddRef(call_info, object_id, return_value);
    }
    Post_Process_IUnknown_AddRef(call_info, object_id, return_value);
}

void Dx12LayerConsumer::Process_IUnknown_Release(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        ULONG return_value)
{
    Pre_Process_IUnknown_Release(call_info, object_id, return_value);
    if (ShouldCallNextLayer()) {
        GetNextLayer()->Process_IUnknown_Release(call_info, object_id, return_value);
    }
    Post_Process_IUnknown_Release(call_info, object_id, return_value);
}



GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
