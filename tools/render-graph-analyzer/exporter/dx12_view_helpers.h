#ifndef DX12_VIEW_HELPERS_H
#define DX12_VIEW_HELPERS_H

#include <cstdint>
#include <d3d12.h>

#include "external/rps/include/rps/rps.h"

struct ViewDescFingerPrint
{
    uint32_t data[8] = {};

    bool operator==(const ViewDescFingerPrint& rhs) const { return memcmp(data, rhs.data, sizeof(data)) == 0; }
};

static ViewDescFingerPrint GetFingerPrint(const D3D12_RENDER_TARGET_VIEW_DESC& desc)
{
    ViewDescFingerPrint fp;

    fp.data[0] = desc.Format;
    fp.data[1] = desc.ViewDimension;
    switch (desc.ViewDimension)
    {
        case D3D12_RTV_DIMENSION_BUFFER:
            fp.data[2] = UINT(desc.Buffer.FirstElement & UINT32_MAX);
            fp.data[3] = UINT(desc.Buffer.FirstElement >> 32);
            fp.data[4] = desc.Buffer.NumElements;
            break;
        case D3D12_RTV_DIMENSION_TEXTURE1D:
            fp.data[2] = desc.Texture1D.MipSlice;
            break;
        case D3D12_RTV_DIMENSION_TEXTURE1DARRAY:
            fp.data[2] = desc.Texture1DArray.MipSlice;
            fp.data[3] = desc.Texture1DArray.FirstArraySlice;
            fp.data[4] = desc.Texture1DArray.ArraySize;
            break;
        case D3D12_RTV_DIMENSION_TEXTURE2D:
            fp.data[2] = desc.Texture2D.MipSlice;
            fp.data[3] = desc.Texture2D.PlaneSlice;
            break;
        case D3D12_RTV_DIMENSION_TEXTURE2DARRAY:
            fp.data[2] = desc.Texture2DArray.MipSlice;
            fp.data[3] = desc.Texture2DArray.FirstArraySlice;
            fp.data[4] = desc.Texture2DArray.ArraySize;
            fp.data[5] = desc.Texture2DArray.PlaneSlice;
            break;
        case D3D12_RTV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY:
            fp.data[2] = desc.Texture2DMSArray.FirstArraySlice;
            fp.data[3] = desc.Texture2DMSArray.ArraySize;
            break;
        case D3D12_RTV_DIMENSION_TEXTURE3D:
            fp.data[2] = desc.Texture3D.MipSlice;
            fp.data[3] = desc.Texture3D.FirstWSlice;
            fp.data[4] = desc.Texture3D.WSize;
            break;
        default:
            break;
    }
    return fp;
}

static ViewDescFingerPrint GetFingerPrint(const D3D12_DEPTH_STENCIL_VIEW_DESC& desc)
{
    ViewDescFingerPrint fp;
    fp.data[0] = desc.Format;
    fp.data[1] = desc.ViewDimension;
    fp.data[2] = desc.Flags;

    switch (desc.ViewDimension)
    {
        case D3D12_DSV_DIMENSION_TEXTURE1D:
            fp.data[3] = desc.Texture1D.MipSlice;
            break;
        case D3D12_DSV_DIMENSION_TEXTURE1DARRAY:
            fp.data[3] = desc.Texture1DArray.MipSlice;
            fp.data[4] = desc.Texture1DArray.FirstArraySlice;
            fp.data[5] = desc.Texture1DArray.ArraySize;
            break;
        case D3D12_DSV_DIMENSION_TEXTURE2D:
            fp.data[3] = desc.Texture2D.MipSlice;
            break;
        case D3D12_DSV_DIMENSION_TEXTURE2DARRAY:
            fp.data[3] = desc.Texture2DArray.MipSlice;
            fp.data[4] = desc.Texture2DArray.FirstArraySlice;
            fp.data[5] = desc.Texture2DArray.ArraySize;
            break;
        case D3D12_DSV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY:
            fp.data[3] = desc.Texture2DMSArray.FirstArraySlice;
            fp.data[4] = desc.Texture2DMSArray.ArraySize;
            break;
        default:
            break;
    }
    return fp;
}

static ViewDescFingerPrint GetFingerPrint(const D3D12_SHADER_RESOURCE_VIEW_DESC& desc)
{
    ViewDescFingerPrint fp;
    fp.data[0] = desc.Format;
    fp.data[1] = desc.ViewDimension;
    fp.data[2] = desc.Shader4ComponentMapping;
    switch (desc.ViewDimension)
    {
        case D3D12_SRV_DIMENSION_BUFFER:
            fp.data[3] = UINT(desc.Buffer.FirstElement & UINT32_MAX);
            fp.data[4] = UINT(desc.Buffer.FirstElement >> 32);
            fp.data[5] = desc.Buffer.NumElements;
            fp.data[6] = desc.Buffer.StructureByteStride;
            fp.data[7] = desc.Buffer.Flags;
            break;
        case D3D12_SRV_DIMENSION_TEXTURE1D:
            fp.data[3] = desc.Texture1D.MostDetailedMip;
            fp.data[4] = desc.Texture1D.MipLevels;
            memcpy(&fp.data[5], &desc.Texture1D.ResourceMinLODClamp, sizeof(UINT));
            break;
        case D3D12_SRV_DIMENSION_TEXTURE1DARRAY:
            fp.data[3] = desc.Texture1DArray.MostDetailedMip;
            fp.data[4] = desc.Texture1DArray.MipLevels;
            fp.data[5] = desc.Texture1DArray.FirstArraySlice;
            fp.data[6] = desc.Texture1DArray.ArraySize;
            memcpy(&fp.data[7], &desc.Texture1DArray.ResourceMinLODClamp, sizeof(UINT));
            break;
        case D3D12_SRV_DIMENSION_TEXTURE2D:
            fp.data[3] = desc.Texture2D.MostDetailedMip;
            fp.data[4] = desc.Texture2D.MipLevels;
            fp.data[5] = desc.Texture2D.PlaneSlice;
            memcpy(&fp.data[6], &desc.Texture2D.ResourceMinLODClamp, sizeof(UINT));
            break;
        case D3D12_SRV_DIMENSION_TEXTURE2DARRAY:
            fp.data[3] = UINT(desc.Texture2DArray.MostDetailedMip) | (UINT(desc.Texture2DArray.MipLevels) << 16);
            fp.data[4] = desc.Texture2DArray.FirstArraySlice;
            fp.data[5] = desc.Texture2DArray.ArraySize;
            fp.data[6] = desc.Texture2DArray.PlaneSlice;
            memcpy(&fp.data[7], &desc.Texture2DArray.ResourceMinLODClamp, sizeof(UINT));
            break;
        case D3D12_SRV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY:
            fp.data[3] = desc.Texture2DMSArray.FirstArraySlice;
            fp.data[4] = desc.Texture2DMSArray.ArraySize;
            break;
        case D3D12_SRV_DIMENSION_TEXTURE3D:
            fp.data[3] = desc.Texture3D.MostDetailedMip;
            fp.data[4] = desc.Texture3D.MipLevels;
            memcpy(&fp.data[5], &desc.Texture3D.ResourceMinLODClamp, sizeof(UINT));
            break;
        case D3D12_SRV_DIMENSION_TEXTURECUBE:
            fp.data[3] = desc.TextureCube.MostDetailedMip;
            fp.data[4] = desc.TextureCube.MipLevels;
            memcpy(&fp.data[5], &desc.TextureCube.ResourceMinLODClamp, sizeof(UINT));

            break;
        case D3D12_SRV_DIMENSION_TEXTURECUBEARRAY:
            fp.data[3] = desc.TextureCubeArray.MostDetailedMip;
            fp.data[4] = desc.TextureCubeArray.MipLevels;
            fp.data[5] = desc.TextureCubeArray.First2DArrayFace;
            fp.data[6] = desc.TextureCubeArray.NumCubes;
            memcpy(&fp.data[7], &desc.TextureCubeArray.ResourceMinLODClamp, sizeof(UINT));
            break;
        case D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE:
            fp.data[3] = UINT(desc.RaytracingAccelerationStructure.Location & UINT32_MAX);
            fp.data[4] = UINT(desc.RaytracingAccelerationStructure.Location >> 32);
            break;
        default:
            break;
    }

    return fp;
}

static ViewDescFingerPrint GetFingerPrint(const D3D12_UNORDERED_ACCESS_VIEW_DESC& desc)
{
    ViewDescFingerPrint fp;
    fp.data[0] = desc.Format;
    fp.data[1] = desc.ViewDimension;
    switch (desc.ViewDimension)
    {
        case D3D12_UAV_DIMENSION_BUFFER:
            fp.data[2] = UINT(desc.Buffer.FirstElement & UINT32_MAX);
            fp.data[3] = UINT(desc.Buffer.FirstElement >> 32);
            fp.data[4] = desc.Buffer.NumElements;
            fp.data[5] = desc.Buffer.StructureByteStride | (UINT(desc.Buffer.Flags) << 31);
            fp.data[6] = UINT(desc.Buffer.CounterOffsetInBytes & UINT32_MAX);
            fp.data[7] = UINT(desc.Buffer.CounterOffsetInBytes >> 32);
            break;
        case D3D12_UAV_DIMENSION_TEXTURE1D:
            fp.data[2] = desc.Texture1D.MipSlice;
            break;
        case D3D12_UAV_DIMENSION_TEXTURE1DARRAY:
            fp.data[2] = desc.Texture1DArray.MipSlice;
            fp.data[3] = desc.Texture1DArray.FirstArraySlice;
            fp.data[4] = desc.Texture1DArray.ArraySize;
            break;
        case D3D12_UAV_DIMENSION_TEXTURE2D:
            fp.data[2] = desc.Texture2D.MipSlice;
            fp.data[3] = desc.Texture2D.PlaneSlice;
            break;
        case D3D12_UAV_DIMENSION_TEXTURE2DARRAY:
            fp.data[2] = desc.Texture2DArray.MipSlice;
            fp.data[3] = desc.Texture2DArray.FirstArraySlice;
            fp.data[4] = desc.Texture2DArray.ArraySize;
            fp.data[5] = desc.Texture2DArray.PlaneSlice;
            break;
        case D3D12_UAV_DIMENSION_TEXTURE3D:
            fp.data[2] = desc.Texture3D.MipSlice;
            fp.data[3] = desc.Texture3D.FirstWSlice;
            fp.data[4] = desc.Texture3D.WSize;
            break;
        default:
            break;
    }
    return fp;
}

static inline bool operator==(const D3D12_RENDER_TARGET_VIEW_DESC& lhs, const D3D12_RENDER_TARGET_VIEW_DESC& rhs)
{
    return GetFingerPrint(lhs) == GetFingerPrint(rhs);
}

static inline bool operator==(const D3D12_DEPTH_STENCIL_VIEW_DESC& lhs, const D3D12_DEPTH_STENCIL_VIEW_DESC& rhs)
{
    return GetFingerPrint(lhs) == GetFingerPrint(rhs);
}

static inline bool operator==(const D3D12_SHADER_RESOURCE_VIEW_DESC& lhs, const D3D12_SHADER_RESOURCE_VIEW_DESC& rhs)
{
    return GetFingerPrint(lhs) == GetFingerPrint(rhs);
}

static inline bool operator==(const D3D12_UNORDERED_ACCESS_VIEW_DESC& lhs, const D3D12_UNORDERED_ACCESS_VIEW_DESC& rhs)
{
    return GetFingerPrint(lhs) == GetFingerPrint(rhs);
}

static inline rps::SubresourceRange GetSubresourceRangeFromViewDesc(const D3D12_RENDER_TARGET_VIEW_DESC& desc)
{
    switch (desc.ViewDimension)
    {
        case D3D12_RTV_DIMENSION_TEXTURE1D:
            return rps::SubresourceRange(desc.Texture1D.MipSlice);
        case D3D12_RTV_DIMENSION_TEXTURE1DARRAY:
            return rps::SubresourceRange(
                desc.Texture1DArray.MipSlice, 1, desc.Texture1DArray.FirstArraySlice, desc.Texture1DArray.ArraySize);
        case D3D12_RTV_DIMENSION_TEXTURE2D:
            return rps::SubresourceRange(desc.Texture2D.MipSlice);
        case D3D12_RTV_DIMENSION_TEXTURE2DARRAY:
            return rps::SubresourceRange(
                desc.Texture2DArray.MipSlice, 1, desc.Texture2DArray.FirstArraySlice, desc.Texture2DArray.ArraySize);
        case D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY:
            return rps::SubresourceRange(0, 1, desc.Texture2DMSArray.FirstArraySlice, desc.Texture2DMSArray.ArraySize);
        case D3D12_RTV_DIMENSION_TEXTURE3D:
            return rps::SubresourceRange(desc.Texture3D.MipSlice);
        case D3D12_RTV_DIMENSION_BUFFER:
        case D3D12_RTV_DIMENSION_TEXTURE2DMS:
        default:
            break;
    }
    return rps::SubresourceRange{};
}

static inline rps::SubresourceRange GetSubresourceRangeFromViewDesc(const D3D12_DEPTH_STENCIL_VIEW_DESC& desc)
{
    switch (desc.ViewDimension)
    {
        case D3D12_DSV_DIMENSION_TEXTURE1D:
            return rps::SubresourceRange(desc.Texture1D.MipSlice);
        case D3D12_DSV_DIMENSION_TEXTURE1DARRAY:
            return rps::SubresourceRange(
                desc.Texture1DArray.MipSlice, 1, desc.Texture1DArray.FirstArraySlice, desc.Texture1DArray.ArraySize);
        case D3D12_DSV_DIMENSION_TEXTURE2D:
            return rps::SubresourceRange(desc.Texture2D.MipSlice);
        case D3D12_DSV_DIMENSION_TEXTURE2DARRAY:
            return rps::SubresourceRange(
                desc.Texture2DArray.MipSlice, 1, desc.Texture2DArray.FirstArraySlice, desc.Texture2DArray.ArraySize);
        case D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY:
            return rps::SubresourceRange(0, 1, desc.Texture2DMSArray.FirstArraySlice, desc.Texture2DMSArray.ArraySize);
        case D3D12_DSV_DIMENSION_TEXTURE2DMS:
        default:
            break;
    }
    return rps::SubresourceRange{};
}

static inline rps::SubresourceRange GetSubresourceRangeFromViewDesc(const D3D12_SHADER_RESOURCE_VIEW_DESC& desc)
{
    switch (desc.ViewDimension)
    {
        case D3D12_SRV_DIMENSION_TEXTURE1D:
            return rps::SubresourceRange(desc.Texture1D.MostDetailedMip, desc.Texture1D.MipLevels);
        case D3D12_SRV_DIMENSION_TEXTURE1DARRAY:
            return rps::SubresourceRange(desc.Texture1DArray.MostDetailedMip,
                                         desc.Texture1DArray.MipLevels,
                                         desc.Texture1DArray.FirstArraySlice,
                                         desc.Texture1DArray.ArraySize);
        case D3D12_SRV_DIMENSION_TEXTURE2D:
            return rps::SubresourceRange(desc.Texture2D.MostDetailedMip, desc.Texture2D.MipLevels);
        case D3D12_SRV_DIMENSION_TEXTURE2DARRAY:
            return rps::SubresourceRange(desc.Texture2DArray.MostDetailedMip,
                                         desc.Texture2DArray.MipLevels,
                                         desc.Texture2DArray.FirstArraySlice,
                                         desc.Texture2DArray.ArraySize);
        case D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY:
            return rps::SubresourceRange(0, 1, desc.Texture2DMSArray.FirstArraySlice, desc.Texture2DMSArray.ArraySize);
        case D3D12_SRV_DIMENSION_TEXTURE3D:
            return rps::SubresourceRange(desc.Texture3D.MostDetailedMip, desc.Texture3D.MipLevels);
        case D3D12_SRV_DIMENSION_TEXTURECUBE:
            return rps::SubresourceRange(desc.TextureCube.MostDetailedMip, desc.TextureCube.MipLevels);
        case D3D12_SRV_DIMENSION_TEXTURECUBEARRAY:
            return rps::SubresourceRange(desc.TextureCubeArray.MostDetailedMip,
                                         desc.TextureCubeArray.MipLevels,
                                         desc.TextureCubeArray.First2DArrayFace,
                                         desc.TextureCubeArray.NumCubes * 6);
        case D3D12_SRV_DIMENSION_BUFFER:
        case D3D12_SRV_DIMENSION_TEXTURE2DMS:
        case D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE:
        default:
            break;
    }
    return rps::SubresourceRange{};
}

static inline rps::SubresourceRange GetSubresourceRangeFromViewDesc(const D3D12_UNORDERED_ACCESS_VIEW_DESC& desc)
{
    switch (desc.ViewDimension)
    {
        case D3D12_UAV_DIMENSION_TEXTURE1D:
            return rps::SubresourceRange(desc.Texture1D.MipSlice);
        case D3D12_UAV_DIMENSION_TEXTURE1DARRAY:
            return rps::SubresourceRange(
                desc.Texture1DArray.MipSlice, 1, desc.Texture1DArray.FirstArraySlice, desc.Texture1DArray.ArraySize);
        case D3D12_UAV_DIMENSION_TEXTURE2D:
            return rps::SubresourceRange(desc.Texture2D.MipSlice);
        case D3D12_UAV_DIMENSION_TEXTURE2DARRAY:
            return rps::SubresourceRange(
                desc.Texture2DArray.MipSlice, 1, desc.Texture2DArray.FirstArraySlice, desc.Texture2DArray.ArraySize);
        case D3D12_UAV_DIMENSION_TEXTURE2DMSARRAY:
            return rps::SubresourceRange(0, 1, desc.Texture2DMSArray.FirstArraySlice, desc.Texture2DMSArray.ArraySize);
        case D3D12_UAV_DIMENSION_TEXTURE3D:
            return rps::SubresourceRange(desc.Texture3D.MipSlice);
        case D3D12_UAV_DIMENSION_BUFFER:
        case D3D12_UAV_DIMENSION_TEXTURE2DMS:
        default:
            break;
    }
    return rps::SubresourceRange{};
}

#endif //DX12_VIEW_HELPERS_H
