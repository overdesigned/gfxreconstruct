/*
** Copyright (c) 2018-2021 Valve Corporation
** Copyright (c) 2018-2022 LunarG, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "generated_vulkan_struct_decoders_to_string.h"
#include "decode/custom_vulkan_struct_decoders_to_string.h"
#include "decode/custom_vulkan_ascii_consumer.h"
#include "generated_vulkan_struct_to_string.h"
#include "generated_vulkan_enum_to_string.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
template <> std::string ToString<decode::Decoded_VkExtent2D>(const decode::Decoded_VkExtent2D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExtent2D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExtent3D>(const decode::Decoded_VkExtent3D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExtent3D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", toStringFlags, tabCount, tabSize, ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOffset2D>(const decode::Decoded_VkOffset2D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOffset2D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOffset3D>(const decode::Decoded_VkOffset3D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOffset3D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "z", toStringFlags, tabCount, tabSize, ToString(obj.z, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRect2D>(const decode::Decoded_VkRect2D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRect2D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.offset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferMemoryBarrier>(const decode::Decoded_VkBufferMemoryBarrier& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferMemoryBarrier& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDispatchIndirectCommand>(const decode::Decoded_VkDispatchIndirectCommand& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDispatchIndirectCommand& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "z", toStringFlags, tabCount, tabSize, ToString(obj.z, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawIndexedIndirectCommand>(const decode::Decoded_VkDrawIndexedIndirectCommand& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawIndexedIndirectCommand& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "indexCount", toStringFlags, tabCount, tabSize, ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", toStringFlags, tabCount, tabSize, ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstIndex", toStringFlags, tabCount, tabSize, ToString(obj.firstIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexOffset", toStringFlags, tabCount, tabSize, ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", toStringFlags, tabCount, tabSize, ToString(obj.firstInstance, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawIndirectCommand>(const decode::Decoded_VkDrawIndirectCommand& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawIndirectCommand& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "vertexCount", toStringFlags, tabCount, tabSize, ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", toStringFlags, tabCount, tabSize, ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstVertex", toStringFlags, tabCount, tabSize, ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", toStringFlags, tabCount, tabSize, ToString(obj.firstInstance, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresourceRange>(const decode::Decoded_VkImageSubresourceRange& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresourceRange& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseMipLevel", toStringFlags, tabCount, tabSize, ToString(obj.baseMipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "levelCount", toStringFlags, tabCount, tabSize, ToString(obj.levelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", toStringFlags, tabCount, tabSize, ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", toStringFlags, tabCount, tabSize, ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageMemoryBarrier>(const decode::Decoded_VkImageMemoryBarrier& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageMemoryBarrier& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.oldLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "newLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.newLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "subresourceRange", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.subresourceRange), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryBarrier>(const decode::Decoded_VkMemoryBarrier& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryBarrier& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCacheHeaderVersionOne>(const decode::Decoded_VkPipelineCacheHeaderVersionOne& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCacheHeaderVersionOne& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "headerSize", toStringFlags, tabCount, tabSize, ToString(obj.headerSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "headerVersion", toStringFlags, tabCount, tabSize, '"' + ToString(obj.headerVersion, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vendorID", toStringFlags, tabCount, tabSize, ToString(obj.vendorID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceID", toStringFlags, tabCount, tabSize, ToString(obj.deviceID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCacheUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.pipelineCacheUUID) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAllocationCallbacks>(const decode::Decoded_VkAllocationCallbacks& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAllocationCallbacks& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pUserData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pUserData));
            FieldToString(strStrm, false, "pfnAllocation", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnAllocation));
            FieldToString(strStrm, false, "pfnReallocation", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnReallocation));
            FieldToString(strStrm, false, "pfnFree", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnFree));
            FieldToString(strStrm, false, "pfnInternalAllocation", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnInternalAllocation));
            FieldToString(strStrm, false, "pfnInternalFree", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnInternalFree));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkApplicationInfo>(const decode::Decoded_VkApplicationInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkApplicationInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pApplicationName", toStringFlags, tabCount, tabSize, (obj.pApplicationName ? ("\"" + std::string(obj.pApplicationName) + "\"") : "null"));
            FieldToString(strStrm, false, "applicationVersion", toStringFlags, tabCount, tabSize, ToString(obj.applicationVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEngineName", toStringFlags, tabCount, tabSize, (obj.pEngineName ? ("\"" + std::string(obj.pEngineName) + "\"") : "null"));
            FieldToString(strStrm, false, "engineVersion", toStringFlags, tabCount, tabSize, ToString(obj.engineVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "apiVersion", toStringFlags, tabCount, tabSize, ToString(obj.apiVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFormatProperties>(const decode::Decoded_VkFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "linearTilingFeatures", toStringFlags, tabCount, tabSize, ToString(obj.linearTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalTilingFeatures", toStringFlags, tabCount, tabSize, ToString(obj.optimalTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferFeatures", toStringFlags, tabCount, tabSize, ToString(obj.bufferFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageFormatProperties>(const decode::Decoded_VkImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "maxExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMipLevels", toStringFlags, tabCount, tabSize, ToString(obj.maxMipLevels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxArrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.maxArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxResourceSize", toStringFlags, tabCount, tabSize, ToString(obj.maxResourceSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkInstanceCreateInfo>(const decode::Decoded_VkInstanceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkInstanceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pApplicationInfo", toStringFlags, tabCount, tabSize, ((decoded_obj.pApplicationInfo && decoded_obj.pApplicationInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pApplicationInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "enabledLayerCount", toStringFlags, tabCount, tabSize, ToString(obj.enabledLayerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledLayerNames", toStringFlags, tabCount, tabSize, CStrArrayToString(obj.enabledLayerCount, obj.ppEnabledLayerNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledExtensionCount", toStringFlags, tabCount, tabSize, ToString(obj.enabledExtensionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledExtensionNames", toStringFlags, tabCount, tabSize, CStrArrayToString(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryHeap>(const decode::Decoded_VkMemoryHeap& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryHeap& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryType>(const decode::Decoded_VkMemoryType& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryType& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "propertyFlags", toStringFlags, tabCount, tabSize, ToString(obj.propertyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapIndex", toStringFlags, tabCount, tabSize, ToString(obj.heapIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFeatures>(const decode::Decoded_VkPhysicalDeviceFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "robustBufferAccess", toStringFlags, tabCount, tabSize, ToString(obj.robustBufferAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullDrawIndexUint32", toStringFlags, tabCount, tabSize, ToString(obj.fullDrawIndexUint32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCubeArray", toStringFlags, tabCount, tabSize, ToString(obj.imageCubeArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentBlend", toStringFlags, tabCount, tabSize, ToString(obj.independentBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryShader", toStringFlags, tabCount, tabSize, ToString(obj.geometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tessellationShader", toStringFlags, tabCount, tabSize, ToString(obj.tessellationShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleRateShading", toStringFlags, tabCount, tabSize, ToString(obj.sampleRateShading, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dualSrcBlend", toStringFlags, tabCount, tabSize, ToString(obj.dualSrcBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOp", toStringFlags, tabCount, tabSize, ToString(obj.logicOp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiDrawIndirect", toStringFlags, tabCount, tabSize, ToString(obj.multiDrawIndirect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawIndirectFirstInstance", toStringFlags, tabCount, tabSize, ToString(obj.drawIndirectFirstInstance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClamp", toStringFlags, tabCount, tabSize, ToString(obj.depthClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasClamp", toStringFlags, tabCount, tabSize, ToString(obj.depthBiasClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fillModeNonSolid", toStringFlags, tabCount, tabSize, ToString(obj.fillModeNonSolid, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBounds", toStringFlags, tabCount, tabSize, ToString(obj.depthBounds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "wideLines", toStringFlags, tabCount, tabSize, ToString(obj.wideLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "largePoints", toStringFlags, tabCount, tabSize, ToString(obj.largePoints, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alphaToOne", toStringFlags, tabCount, tabSize, ToString(obj.alphaToOne, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiViewport", toStringFlags, tabCount, tabSize, ToString(obj.multiViewport, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerAnisotropy", toStringFlags, tabCount, tabSize, ToString(obj.samplerAnisotropy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionETC2", toStringFlags, tabCount, tabSize, ToString(obj.textureCompressionETC2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_LDR", toStringFlags, tabCount, tabSize, ToString(obj.textureCompressionASTC_LDR, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionBC", toStringFlags, tabCount, tabSize, ToString(obj.textureCompressionBC, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "occlusionQueryPrecise", toStringFlags, tabCount, tabSize, ToString(obj.occlusionQueryPrecise, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatisticsQuery", toStringFlags, tabCount, tabSize, ToString(obj.pipelineStatisticsQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexPipelineStoresAndAtomics", toStringFlags, tabCount, tabSize, ToString(obj.vertexPipelineStoresAndAtomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentStoresAndAtomics", toStringFlags, tabCount, tabSize, ToString(obj.fragmentStoresAndAtomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTessellationAndGeometryPointSize", toStringFlags, tabCount, tabSize, ToString(obj.shaderTessellationAndGeometryPointSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageGatherExtended", toStringFlags, tabCount, tabSize, ToString(obj.shaderImageGatherExtended, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageExtendedFormats", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageExtendedFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageMultisample", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageMultisample, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageReadWithoutFormat", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageReadWithoutFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageWriteWithoutFormat", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageWriteWithoutFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderSampledImageArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderClipDistance", toStringFlags, tabCount, tabSize, ToString(obj.shaderClipDistance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCullDistance", toStringFlags, tabCount, tabSize, ToString(obj.shaderCullDistance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt64", toStringFlags, tabCount, tabSize, ToString(obj.shaderInt64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt16", toStringFlags, tabCount, tabSize, ToString(obj.shaderInt16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderResourceResidency", toStringFlags, tabCount, tabSize, ToString(obj.shaderResourceResidency, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderResourceMinLod", toStringFlags, tabCount, tabSize, ToString(obj.shaderResourceMinLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseBinding", toStringFlags, tabCount, tabSize, ToString(obj.sparseBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyBuffer", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidencyBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyImage2D", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidencyImage2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyImage3D", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidencyImage3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency2Samples", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidency2Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency4Samples", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidency4Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency8Samples", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidency8Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency16Samples", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidency16Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyAliased", toStringFlags, tabCount, tabSize, ToString(obj.sparseResidencyAliased, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variableMultisampleRate", toStringFlags, tabCount, tabSize, ToString(obj.variableMultisampleRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedQueries", toStringFlags, tabCount, tabSize, ToString(obj.inheritedQueries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLimits>(const decode::Decoded_VkPhysicalDeviceLimits& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLimits& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "maxImageDimension1D", toStringFlags, tabCount, tabSize, ToString(obj.maxImageDimension1D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageDimension2D", toStringFlags, tabCount, tabSize, ToString(obj.maxImageDimension2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageDimension3D", toStringFlags, tabCount, tabSize, ToString(obj.maxImageDimension3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageDimensionCube", toStringFlags, tabCount, tabSize, ToString(obj.maxImageDimensionCube, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTexelBufferElements", toStringFlags, tabCount, tabSize, ToString(obj.maxTexelBufferElements, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxUniformBufferRange", toStringFlags, tabCount, tabSize, ToString(obj.maxUniformBufferRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxStorageBufferRange", toStringFlags, tabCount, tabSize, ToString(obj.maxStorageBufferRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPushConstantsSize", toStringFlags, tabCount, tabSize, ToString(obj.maxPushConstantsSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationCount", toStringFlags, tabCount, tabSize, ToString(obj.maxMemoryAllocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSamplerAllocationCount", toStringFlags, tabCount, tabSize, ToString(obj.maxSamplerAllocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageGranularity", toStringFlags, tabCount, tabSize, ToString(obj.bufferImageGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseAddressSpaceSize", toStringFlags, tabCount, tabSize, ToString(obj.sparseAddressSpaceSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBoundDescriptorSets", toStringFlags, tabCount, tabSize, ToString(obj.maxBoundDescriptorSets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUniformBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorStorageBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorSampledImages", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorStorageImages", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageResources", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUniformBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUniformBuffersDynamic", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUniformBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetStorageBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetStorageBuffersDynamic", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetStorageBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSampledImages", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetStorageImages", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputAttributes", toStringFlags, tabCount, tabSize, ToString(obj.maxVertexInputAttributes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputBindings", toStringFlags, tabCount, tabSize, ToString(obj.maxVertexInputBindings, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputAttributeOffset", toStringFlags, tabCount, tabSize, ToString(obj.maxVertexInputAttributeOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputBindingStride", toStringFlags, tabCount, tabSize, ToString(obj.maxVertexInputBindingStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxVertexOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationGenerationLevel", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationGenerationLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationPatchSize", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationPatchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlPerVertexInputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationControlPerVertexInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlPerVertexOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationControlPerVertexOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlPerPatchOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationControlPerPatchOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlTotalOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationControlTotalOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationEvaluationInputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationEvaluationInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationEvaluationOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxTessellationEvaluationOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryShaderInvocations", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryShaderInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryInputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryOutputVertices", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryOutputVertices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryTotalOutputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryTotalOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentInputComponents", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentOutputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentOutputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentDualSrcAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentDualSrcAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentCombinedOutputResources", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentCombinedOutputResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeSharedMemorySize", toStringFlags, tabCount, tabSize, ToString(obj.maxComputeSharedMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkGroupCount", toStringFlags, tabCount, tabSize, ArrayToString(3, obj.maxComputeWorkGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkGroupInvocations", toStringFlags, tabCount, tabSize, ToString(obj.maxComputeWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkGroupSize", toStringFlags, tabCount, tabSize, ArrayToString(3, obj.maxComputeWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subPixelPrecisionBits", toStringFlags, tabCount, tabSize, ToString(obj.subPixelPrecisionBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subTexelPrecisionBits", toStringFlags, tabCount, tabSize, ToString(obj.subTexelPrecisionBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipmapPrecisionBits", toStringFlags, tabCount, tabSize, ToString(obj.mipmapPrecisionBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawIndexedIndexValue", toStringFlags, tabCount, tabSize, ToString(obj.maxDrawIndexedIndexValue, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawIndirectCount", toStringFlags, tabCount, tabSize, ToString(obj.maxDrawIndirectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSamplerLodBias", toStringFlags, tabCount, tabSize, ToString(obj.maxSamplerLodBias, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSamplerAnisotropy", toStringFlags, tabCount, tabSize, ToString(obj.maxSamplerAnisotropy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxViewports", toStringFlags, tabCount, tabSize, ToString(obj.maxViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxViewportDimensions", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.maxViewportDimensions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportBoundsRange", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.viewportBoundsRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportSubPixelBits", toStringFlags, tabCount, tabSize, ToString(obj.viewportSubPixelBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minMemoryMapAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minMemoryMapAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minTexelBufferOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minTexelBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minUniformBufferOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minUniformBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minStorageBufferOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minStorageBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minTexelOffset", toStringFlags, tabCount, tabSize, ToString(obj.minTexelOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTexelOffset", toStringFlags, tabCount, tabSize, ToString(obj.maxTexelOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minTexelGatherOffset", toStringFlags, tabCount, tabSize, ToString(obj.minTexelGatherOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTexelGatherOffset", toStringFlags, tabCount, tabSize, ToString(obj.maxTexelGatherOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minInterpolationOffset", toStringFlags, tabCount, tabSize, ToString(obj.minInterpolationOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInterpolationOffset", toStringFlags, tabCount, tabSize, ToString(obj.maxInterpolationOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subPixelInterpolationOffsetBits", toStringFlags, tabCount, tabSize, ToString(obj.subPixelInterpolationOffsetBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFramebufferWidth", toStringFlags, tabCount, tabSize, ToString(obj.maxFramebufferWidth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFramebufferHeight", toStringFlags, tabCount, tabSize, ToString(obj.maxFramebufferHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFramebufferLayers", toStringFlags, tabCount, tabSize, ToString(obj.maxFramebufferLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferColorSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.framebufferColorSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferDepthSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.framebufferDepthSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferStencilSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.framebufferStencilSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferNoAttachmentsSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.framebufferNoAttachmentsSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxColorAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageColorSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampledImageColorSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageIntegerSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampledImageIntegerSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageDepthSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampledImageDepthSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageStencilSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampledImageStencilSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageImageSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.storageImageSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleMaskWords", toStringFlags, tabCount, tabSize, ToString(obj.maxSampleMaskWords, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampComputeAndGraphics", toStringFlags, tabCount, tabSize, ToString(obj.timestampComputeAndGraphics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampPeriod", toStringFlags, tabCount, tabSize, ToString(obj.timestampPeriod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxClipDistances", toStringFlags, tabCount, tabSize, ToString(obj.maxClipDistances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCullDistances", toStringFlags, tabCount, tabSize, ToString(obj.maxCullDistances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCombinedClipAndCullDistances", toStringFlags, tabCount, tabSize, ToString(obj.maxCombinedClipAndCullDistances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discreteQueuePriorities", toStringFlags, tabCount, tabSize, ToString(obj.discreteQueuePriorities, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointSizeRange", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.pointSizeRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineWidthRange", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.lineWidthRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointSizeGranularity", toStringFlags, tabCount, tabSize, ToString(obj.pointSizeGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineWidthGranularity", toStringFlags, tabCount, tabSize, ToString(obj.lineWidthGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "strictLines", toStringFlags, tabCount, tabSize, ToString(obj.strictLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "standardSampleLocations", toStringFlags, tabCount, tabSize, ToString(obj.standardSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalBufferCopyOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.optimalBufferCopyOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalBufferCopyRowPitchAlignment", toStringFlags, tabCount, tabSize, ToString(obj.optimalBufferCopyRowPitchAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nonCoherentAtomSize", toStringFlags, tabCount, tabSize, ToString(obj.nonCoherentAtomSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSparseProperties>(const decode::Decoded_VkPhysicalDeviceSparseProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSparseProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "residencyStandard2DBlockShape", toStringFlags, tabCount, tabSize, ToString(obj.residencyStandard2DBlockShape, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyStandard2DMultisampleBlockShape", toStringFlags, tabCount, tabSize, ToString(obj.residencyStandard2DMultisampleBlockShape, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyStandard3DBlockShape", toStringFlags, tabCount, tabSize, ToString(obj.residencyStandard3DBlockShape, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyAlignedMipSize", toStringFlags, tabCount, tabSize, ToString(obj.residencyAlignedMipSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyNonResidentStrict", toStringFlags, tabCount, tabSize, ToString(obj.residencyNonResidentStrict, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProperties>(const decode::Decoded_VkPhysicalDeviceProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "apiVersion", toStringFlags, tabCount, tabSize, ToString(obj.apiVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverVersion", toStringFlags, tabCount, tabSize, ToString(obj.driverVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorID", toStringFlags, tabCount, tabSize, ToString(obj.vendorID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceID", toStringFlags, tabCount, tabSize, ToString(obj.deviceID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.deviceType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceName", toStringFlags, tabCount, tabSize, '"' + std::string(obj.deviceName) + '"');
            FieldToString(strStrm, false, "pipelineCacheUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.pipelineCacheUUID) + '"');
            FieldToString(strStrm, false, "limits", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.limits), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.sparseProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyProperties>(const decode::Decoded_VkQueueFamilyProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queueFlags", toStringFlags, tabCount, tabSize, ToString(obj.queueFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCount", toStringFlags, tabCount, tabSize, ToString(obj.queueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampValidBits", toStringFlags, tabCount, tabSize, ToString(obj.timestampValidBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageTransferGranularity", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minImageTransferGranularity), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceQueueCreateInfo>(const decode::Decoded_VkDeviceQueueCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceQueueCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCount", toStringFlags, tabCount, tabSize, ToString(obj.queueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueuePriorities", toStringFlags, tabCount, tabSize, ArrayToString(obj.queueCount, obj.pQueuePriorities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceCreateInfo>(const decode::Decoded_VkDeviceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCreateInfoCount", toStringFlags, tabCount, tabSize, ToString(obj.queueCreateInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueCreateInfos", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pQueueCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledLayerCount", toStringFlags, tabCount, tabSize, ToString(obj.enabledLayerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledLayerNames", toStringFlags, tabCount, tabSize, CStrArrayToString(obj.enabledLayerCount, obj.ppEnabledLayerNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledExtensionCount", toStringFlags, tabCount, tabSize, ToString(obj.enabledExtensionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledExtensionNames", toStringFlags, tabCount, tabSize, CStrArrayToString(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEnabledFeatures", toStringFlags, tabCount, tabSize, ((decoded_obj.pEnabledFeatures && decoded_obj.pEnabledFeatures->GetMetaStructPointer()) ? ToString(*decoded_obj.pEnabledFeatures->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExtensionProperties>(const decode::Decoded_VkExtensionProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExtensionProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "extensionName", toStringFlags, tabCount, tabSize, '"' + std::string(obj.extensionName) + '"');
            FieldToString(strStrm, false, "specVersion", toStringFlags, tabCount, tabSize, ToString(obj.specVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkLayerProperties>(const decode::Decoded_VkLayerProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkLayerProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "layerName", toStringFlags, tabCount, tabSize, '"' + std::string(obj.layerName) + '"');
            FieldToString(strStrm, false, "specVersion", toStringFlags, tabCount, tabSize, ToString(obj.specVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "implementationVersion", toStringFlags, tabCount, tabSize, ToString(obj.implementationVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", toStringFlags, tabCount, tabSize, '"' + std::string(obj.description) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubmitInfo>(const decode::Decoded_VkSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pWaitSemaphores.GetLength(), &decoded_obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitDstStageMask", toStringFlags, tabCount, tabSize, ArrayToString(obj.waitSemaphoreCount, obj.pWaitDstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferCount", toStringFlags, tabCount, tabSize, ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBuffers", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pCommandBuffers.GetLength(), &decoded_obj.pCommandBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphores", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pSignalSemaphores.GetLength(), &decoded_obj.pSignalSemaphores, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMappedMemoryRange>(const decode::Decoded_VkMappedMemoryRange& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMappedMemoryRange& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryAllocateInfo>(const decode::Decoded_VkMemoryAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allocationSize", toStringFlags, tabCount, tabSize, ToString(obj.allocationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeIndex", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryRequirements>(const decode::Decoded_VkMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alignment", toStringFlags, tabCount, tabSize, ToString(obj.alignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseMemoryBind>(const decode::Decoded_VkSparseMemoryBind& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseMemoryBind& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "resourceOffset", toStringFlags, tabCount, tabSize, ToString(obj.resourceOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", toStringFlags, tabCount, tabSize, ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseBufferMemoryBindInfo>(const decode::Decoded_VkSparseBufferMemoryBindInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseBufferMemoryBindInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "bindCount", toStringFlags, tabCount, tabSize, ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageOpaqueMemoryBindInfo>(const decode::Decoded_VkSparseImageOpaqueMemoryBindInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageOpaqueMemoryBindInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "bindCount", toStringFlags, tabCount, tabSize, ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresource>(const decode::Decoded_VkImageSubresource& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresource& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevel", toStringFlags, tabCount, tabSize, ToString(obj.mipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayLayer", toStringFlags, tabCount, tabSize, ToString(obj.arrayLayer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryBind>(const decode::Decoded_VkSparseImageMemoryBind& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryBind& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.subresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.offset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", toStringFlags, tabCount, tabSize, ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryBindInfo>(const decode::Decoded_VkSparseImageMemoryBindInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryBindInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "bindCount", toStringFlags, tabCount, tabSize, ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindSparseInfo>(const decode::Decoded_VkBindSparseInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindSparseInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pWaitSemaphores.GetLength(), &decoded_obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferBindCount", toStringFlags, tabCount, tabSize, ToString(obj.bufferBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferBinds", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pBufferBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOpaqueBindCount", toStringFlags, tabCount, tabSize, ToString(obj.imageOpaqueBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageOpaqueBinds", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pImageOpaqueBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageBindCount", toStringFlags, tabCount, tabSize, ToString(obj.imageBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageBinds", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pImageBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphores", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pSignalSemaphores.GetLength(), &decoded_obj.pSignalSemaphores, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageFormatProperties>(const decode::Decoded_VkSparseImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageGranularity", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageGranularity), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryRequirements>(const decode::Decoded_VkSparseImageMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "formatProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.formatProperties), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailFirstLod", toStringFlags, tabCount, tabSize, ToString(obj.imageMipTailFirstLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailSize", toStringFlags, tabCount, tabSize, ToString(obj.imageMipTailSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailOffset", toStringFlags, tabCount, tabSize, ToString(obj.imageMipTailOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailStride", toStringFlags, tabCount, tabSize, ToString(obj.imageMipTailStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFenceCreateInfo>(const decode::Decoded_VkFenceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFenceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreCreateInfo>(const decode::Decoded_VkSemaphoreCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkEventCreateInfo>(const decode::Decoded_VkEventCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkEventCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueryPoolCreateInfo>(const decode::Decoded_VkQueryPoolCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueryPoolCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryCount", toStringFlags, tabCount, tabSize, ToString(obj.queryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatistics", toStringFlags, tabCount, tabSize, ToString(obj.pipelineStatistics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferCreateInfo>(const decode::Decoded_VkBufferCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferViewCreateInfo>(const decode::Decoded_VkBufferViewCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferViewCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "range", toStringFlags, tabCount, tabSize, ToString(obj.range, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCreateInfo>(const decode::Decoded_VkImageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevels", toStringFlags, tabCount, tabSize, ToString(obj.mipLevels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.arrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", toStringFlags, tabCount, tabSize, '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.initialLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubresourceLayout>(const decode::Decoded_VkSubresourceLayout& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubresourceLayout& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rowPitch", toStringFlags, tabCount, tabSize, ToString(obj.rowPitch, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayPitch", toStringFlags, tabCount, tabSize, ToString(obj.arrayPitch, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthPitch", toStringFlags, tabCount, tabSize, ToString(obj.depthPitch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkComponentMapping>(const decode::Decoded_VkComponentMapping& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkComponentMapping& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "r", toStringFlags, tabCount, tabSize, '"' + ToString(obj.r, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "g", toStringFlags, tabCount, tabSize, '"' + ToString(obj.g, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "b", toStringFlags, tabCount, tabSize, '"' + ToString(obj.b, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "a", toStringFlags, tabCount, tabSize, '"' + ToString(obj.a, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewCreateInfo>(const decode::Decoded_VkImageViewCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "viewType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.viewType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "components", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.components), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subresourceRange", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.subresourceRange), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCacheCreateInfo>(const decode::Decoded_VkPipelineCacheCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCacheCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialDataSize", toStringFlags, tabCount, tabSize, ToString(obj.initialDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInitialData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pInitialData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSpecializationMapEntry>(const decode::Decoded_VkSpecializationMapEntry& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSpecializationMapEntry& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "constantID", toStringFlags, tabCount, tabSize, ToString(obj.constantID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSpecializationInfo>(const decode::Decoded_VkSpecializationInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSpecializationInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "mapEntryCount", toStringFlags, tabCount, tabSize, ToString(obj.mapEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMapEntries", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pMapEntries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", toStringFlags, tabCount, tabSize, ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineShaderStageCreateInfo>(const decode::Decoded_VkPipelineShaderStageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineShaderStageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "module", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.module));
            FieldToString(strStrm, false, "pName", toStringFlags, tabCount, tabSize, (obj.pName ? ("\"" + std::string(obj.pName) + "\"") : "null"));
            FieldToString(strStrm, false, "pSpecializationInfo", toStringFlags, tabCount, tabSize, ((decoded_obj.pSpecializationInfo && decoded_obj.pSpecializationInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pSpecializationInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkComputePipelineCreateInfo>(const decode::Decoded_VkComputePipelineCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkComputePipelineCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.stage), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "basePipelineHandle", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", toStringFlags, tabCount, tabSize, ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputBindingDescription>(const decode::Decoded_VkVertexInputBindingDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputBindingDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputRate", toStringFlags, tabCount, tabSize, '"' + ToString(obj.inputRate, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputAttributeDescription>(const decode::Decoded_VkVertexInputAttributeDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputAttributeDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "location", toStringFlags, tabCount, tabSize, ToString(obj.location, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineVertexInputStateCreateInfo>(const decode::Decoded_VkPipelineVertexInputStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineVertexInputStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingDescriptionCount", toStringFlags, tabCount, tabSize, ToString(obj.vertexBindingDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDescriptions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pVertexBindingDescriptions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeDescriptionCount", toStringFlags, tabCount, tabSize, ToString(obj.vertexAttributeDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexAttributeDescriptions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pVertexAttributeDescriptions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineInputAssemblyStateCreateInfo>(const decode::Decoded_VkPipelineInputAssemblyStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineInputAssemblyStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "topology", toStringFlags, tabCount, tabSize, '"' + ToString(obj.topology, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "primitiveRestartEnable", toStringFlags, tabCount, tabSize, ToString(obj.primitiveRestartEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineTessellationStateCreateInfo>(const decode::Decoded_VkPipelineTessellationStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineTessellationStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "patchControlPoints", toStringFlags, tabCount, tabSize, ToString(obj.patchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViewport>(const decode::Decoded_VkViewport& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViewport& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDepth", toStringFlags, tabCount, tabSize, ToString(obj.minDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDepth", toStringFlags, tabCount, tabSize, ToString(obj.maxDepth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportStateCreateInfo>(const decode::Decoded_VkPipelineViewportStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", toStringFlags, tabCount, tabSize, ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewports", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scissorCount", toStringFlags, tabCount, tabSize, ToString(obj.scissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pScissors", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationStateCreateInfo>(const decode::Decoded_VkPipelineRasterizationStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClampEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthClampEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizerDiscardEnable", toStringFlags, tabCount, tabSize, ToString(obj.rasterizerDiscardEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "polygonMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.polygonMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "cullMode", toStringFlags, tabCount, tabSize, ToString(obj.cullMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "frontFace", toStringFlags, tabCount, tabSize, '"' + ToString(obj.frontFace, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthBiasEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthBiasEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasConstantFactor", toStringFlags, tabCount, tabSize, ToString(obj.depthBiasConstantFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasClamp", toStringFlags, tabCount, tabSize, ToString(obj.depthBiasClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasSlopeFactor", toStringFlags, tabCount, tabSize, ToString(obj.depthBiasSlopeFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineWidth", toStringFlags, tabCount, tabSize, ToString(obj.lineWidth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkStencilOpState>(const decode::Decoded_VkStencilOpState& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkStencilOpState& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "failOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.failOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "passOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.passOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthFailOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.depthFailOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compareOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.compareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compareMask", toStringFlags, tabCount, tabSize, ToString(obj.compareMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "writeMask", toStringFlags, tabCount, tabSize, ToString(obj.writeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reference", toStringFlags, tabCount, tabSize, ToString(obj.reference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineDepthStencilStateCreateInfo>(const decode::Decoded_VkPipelineDepthStencilStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineDepthStencilStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthTestEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthWriteEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthWriteEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthCompareOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.depthCompareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthBoundsTestEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthBoundsTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilTestEnable", toStringFlags, tabCount, tabSize, ToString(obj.stencilTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "front", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.front), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "back", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.back), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDepthBounds", toStringFlags, tabCount, tabSize, ToString(obj.minDepthBounds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDepthBounds", toStringFlags, tabCount, tabSize, ToString(obj.maxDepthBounds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorBlendAttachmentState>(const decode::Decoded_VkPipelineColorBlendAttachmentState& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorBlendAttachmentState& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "blendEnable", toStringFlags, tabCount, tabSize, ToString(obj.blendEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcColorBlendFactor", toStringFlags, tabCount, tabSize, '"' + ToString(obj.srcColorBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstColorBlendFactor", toStringFlags, tabCount, tabSize, '"' + ToString(obj.dstColorBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorBlendOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.colorBlendOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcAlphaBlendFactor", toStringFlags, tabCount, tabSize, '"' + ToString(obj.srcAlphaBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstAlphaBlendFactor", toStringFlags, tabCount, tabSize, '"' + ToString(obj.dstAlphaBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "alphaBlendOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.alphaBlendOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorWriteMask", toStringFlags, tabCount, tabSize, ToString(obj.colorWriteMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorBlendStateCreateInfo>(const decode::Decoded_VkPipelineColorBlendStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorBlendStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOpEnable", toStringFlags, tabCount, tabSize, ToString(obj.logicOpEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.logicOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "attachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendConstants", toStringFlags, tabCount, tabSize, ArrayToString(4, obj.blendConstants, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineDynamicStateCreateInfo>(const decode::Decoded_VkPipelineDynamicStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineDynamicStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicStateCount", toStringFlags, tabCount, tabSize, ToString(obj.dynamicStateCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDynamicStates", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.dynamicStateCount, obj.pDynamicStates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsPipelineCreateInfo>(const decode::Decoded_VkGraphicsPipelineCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsPipelineCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", toStringFlags, tabCount, tabSize, ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInputState", toStringFlags, tabCount, tabSize, ((decoded_obj.pVertexInputState && decoded_obj.pVertexInputState->GetMetaStructPointer()) ? ToString(*decoded_obj.pVertexInputState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pInputAssemblyState", toStringFlags, tabCount, tabSize, ((decoded_obj.pInputAssemblyState && decoded_obj.pInputAssemblyState->GetMetaStructPointer()) ? ToString(*decoded_obj.pInputAssemblyState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pTessellationState", toStringFlags, tabCount, tabSize, ((decoded_obj.pTessellationState && decoded_obj.pTessellationState->GetMetaStructPointer()) ? ToString(*decoded_obj.pTessellationState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pViewportState", toStringFlags, tabCount, tabSize, ((decoded_obj.pViewportState && decoded_obj.pViewportState->GetMetaStructPointer()) ? ToString(*decoded_obj.pViewportState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pRasterizationState", toStringFlags, tabCount, tabSize, ((decoded_obj.pRasterizationState && decoded_obj.pRasterizationState->GetMetaStructPointer()) ? ToString(*decoded_obj.pRasterizationState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pMultisampleState", toStringFlags, tabCount, tabSize, ((decoded_obj.pMultisampleState && decoded_obj.pMultisampleState->GetMetaStructPointer()) ? ToString(*decoded_obj.pMultisampleState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDepthStencilState", toStringFlags, tabCount, tabSize, ((decoded_obj.pDepthStencilState && decoded_obj.pDepthStencilState->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pColorBlendState", toStringFlags, tabCount, tabSize, ((decoded_obj.pColorBlendState && decoded_obj.pColorBlendState->GetMetaStructPointer()) ? ToString(*decoded_obj.pColorBlendState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDynamicState", toStringFlags, tabCount, tabSize, ((decoded_obj.pDynamicState && decoded_obj.pDynamicState->GetMetaStructPointer()) ? ToString(*decoded_obj.pDynamicState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "layout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "renderPass", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "subpass", toStringFlags, tabCount, tabSize, ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "basePipelineHandle", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", toStringFlags, tabCount, tabSize, ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPushConstantRange>(const decode::Decoded_VkPushConstantRange& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPushConstantRange& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "stageFlags", toStringFlags, tabCount, tabSize, ToString(obj.stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineLayoutCreateInfo>(const decode::Decoded_VkPipelineLayoutCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineLayoutCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "setLayoutCount", toStringFlags, tabCount, tabSize, ToString(obj.setLayoutCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayouts", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pSetLayouts.GetLength(), &decoded_obj.pSetLayouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushConstantRangeCount", toStringFlags, tabCount, tabSize, ToString(obj.pushConstantRangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPushConstantRanges", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pPushConstantRanges, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerCreateInfo>(const decode::Decoded_VkSamplerCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "magFilter", toStringFlags, tabCount, tabSize, '"' + ToString(obj.magFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "minFilter", toStringFlags, tabCount, tabSize, '"' + ToString(obj.minFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "mipmapMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.mipmapMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "addressModeU", toStringFlags, tabCount, tabSize, '"' + ToString(obj.addressModeU, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "addressModeV", toStringFlags, tabCount, tabSize, '"' + ToString(obj.addressModeV, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "addressModeW", toStringFlags, tabCount, tabSize, '"' + ToString(obj.addressModeW, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "mipLodBias", toStringFlags, tabCount, tabSize, ToString(obj.mipLodBias, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anisotropyEnable", toStringFlags, tabCount, tabSize, ToString(obj.anisotropyEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxAnisotropy", toStringFlags, tabCount, tabSize, ToString(obj.maxAnisotropy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compareEnable", toStringFlags, tabCount, tabSize, ToString(obj.compareEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compareOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.compareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "minLod", toStringFlags, tabCount, tabSize, ToString(obj.minLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxLod", toStringFlags, tabCount, tabSize, ToString(obj.maxLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColor", toStringFlags, tabCount, tabSize, '"' + ToString(obj.borderColor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "unnormalizedCoordinates", toStringFlags, tabCount, tabSize, ToString(obj.unnormalizedCoordinates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyDescriptorSet>(const decode::Decoded_VkCopyDescriptorSet& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyDescriptorSet& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSet", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcSet));
            FieldToString(strStrm, false, "srcBinding", toStringFlags, tabCount, tabSize, ToString(obj.srcBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcArrayElement", toStringFlags, tabCount, tabSize, ToString(obj.srcArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSet", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstSet));
            FieldToString(strStrm, false, "dstBinding", toStringFlags, tabCount, tabSize, ToString(obj.dstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstArrayElement", toStringFlags, tabCount, tabSize, ToString(obj.dstArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorBufferInfo>(const decode::Decoded_VkDescriptorBufferInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorBufferInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "range", toStringFlags, tabCount, tabSize, ToString(obj.range, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorPoolSize>(const decode::Decoded_VkDescriptorPoolSize& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorPoolSize& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorPoolCreateInfo>(const decode::Decoded_VkDescriptorPoolCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorPoolCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSets", toStringFlags, tabCount, tabSize, ToString(obj.maxSets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "poolSizeCount", toStringFlags, tabCount, tabSize, ToString(obj.poolSizeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPoolSizes", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pPoolSizes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetAllocateInfo>(const decode::Decoded_VkDescriptorSetAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorPool", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.descriptorPool));
            FieldToString(strStrm, false, "descriptorSetCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayouts", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pSetLayouts.GetLength(), &decoded_obj.pSetLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutBinding>(const decode::Decoded_VkDescriptorSetLayoutBinding& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutBinding& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageFlags", toStringFlags, tabCount, tabSize, ToString(obj.stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImmutableSamplers", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pImmutableSamplers.GetLength(), &decoded_obj.pImmutableSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutCreateInfo>(const decode::Decoded_VkDescriptorSetLayoutCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", toStringFlags, tabCount, tabSize, ToString(obj.bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindings", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pBindings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentDescription>(const decode::Decoded_VkAttachmentDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilLoadOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilLoadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilStoreOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilStoreOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.initialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "finalLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.finalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentReference>(const decode::Decoded_VkAttachmentReference& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentReference& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "attachment", toStringFlags, tabCount, tabSize, ToString(obj.attachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.layout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferCreateInfo>(const decode::Decoded_VkFramebufferCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "attachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pAttachments.GetLength(), &decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layers", toStringFlags, tabCount, tabSize, ToString(obj.layers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDescription>(const decode::Decoded_VkSubpassDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "inputAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.inputAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInputAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResolveAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pResolveAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthStencilAttachment", toStringFlags, tabCount, tabSize, ((decoded_obj.pDepthStencilAttachment && decoded_obj.pDepthStencilAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "preserveAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.preserveAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPreserveAttachments", toStringFlags, tabCount, tabSize, ArrayToString(obj.preserveAttachmentCount, obj.pPreserveAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDependency>(const decode::Decoded_VkSubpassDependency& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDependency& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubpass", toStringFlags, tabCount, tabSize, ToString(obj.srcSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubpass", toStringFlags, tabCount, tabSize, ToString(obj.dstSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", toStringFlags, tabCount, tabSize, ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", toStringFlags, tabCount, tabSize, ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", toStringFlags, tabCount, tabSize, ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreateInfo>(const decode::Decoded_VkRenderPassCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", toStringFlags, tabCount, tabSize, ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpasses", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pSubpasses, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", toStringFlags, tabCount, tabSize, ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencies", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDependencies, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandPoolCreateInfo>(const decode::Decoded_VkCommandPoolCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandPoolCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferAllocateInfo>(const decode::Decoded_VkCommandBufferAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandPool", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.commandPool));
            FieldToString(strStrm, false, "level", toStringFlags, tabCount, tabSize, '"' + ToString(obj.level, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "commandBufferCount", toStringFlags, tabCount, tabSize, ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceInfo>(const decode::Decoded_VkCommandBufferInheritanceInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "subpass", toStringFlags, tabCount, tabSize, ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.framebuffer));
            FieldToString(strStrm, false, "occlusionQueryEnable", toStringFlags, tabCount, tabSize, ToString(obj.occlusionQueryEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryFlags", toStringFlags, tabCount, tabSize, ToString(obj.queryFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatistics", toStringFlags, tabCount, tabSize, ToString(obj.pipelineStatistics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferBeginInfo>(const decode::Decoded_VkCommandBufferBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInheritanceInfo", toStringFlags, tabCount, tabSize, ((decoded_obj.pInheritanceInfo && decoded_obj.pInheritanceInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pInheritanceInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferCopy>(const decode::Decoded_VkBufferCopy& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferCopy& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcOffset", toStringFlags, tabCount, tabSize, ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", toStringFlags, tabCount, tabSize, ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresourceLayers>(const decode::Decoded_VkImageSubresourceLayers& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresourceLayers& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevel", toStringFlags, tabCount, tabSize, ToString(obj.mipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", toStringFlags, tabCount, tabSize, ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", toStringFlags, tabCount, tabSize, ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferImageCopy>(const decode::Decoded_VkBufferImageCopy& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferImageCopy& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferOffset", toStringFlags, tabCount, tabSize, ToString(obj.bufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferRowLength", toStringFlags, tabCount, tabSize, ToString(obj.bufferRowLength, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageHeight", toStringFlags, tabCount, tabSize, ToString(obj.bufferImageHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkClearDepthStencilValue>(const decode::Decoded_VkClearDepthStencilValue& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkClearDepthStencilValue& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "depth", toStringFlags, tabCount, tabSize, ToString(obj.depth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencil", toStringFlags, tabCount, tabSize, ToString(obj.stencil, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkClearAttachment>(const decode::Decoded_VkClearAttachment& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkClearAttachment& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachment", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "clearValue", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.clearValue), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkClearRect>(const decode::Decoded_VkClearRect& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkClearRect& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "rect", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.rect), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", toStringFlags, tabCount, tabSize, ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", toStringFlags, tabCount, tabSize, ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageBlit>(const decode::Decoded_VkImageBlit& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageBlit& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffsets", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.srcOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffsets", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.dstOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCopy>(const decode::Decoded_VkImageCopy& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCopy& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageResolve>(const decode::Decoded_VkImageResolve& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageResolve& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassBeginInfo>(const decode::Decoded_VkRenderPassBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "framebuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.framebuffer));
            FieldToString(strStrm, false, "renderArea", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.renderArea), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "clearValueCount", toStringFlags, tabCount, tabSize, ToString(obj.clearValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pClearValues", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pClearValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubgroupProperties>(const decode::Decoded_VkPhysicalDeviceSubgroupProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubgroupProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStages", toStringFlags, tabCount, tabSize, ToString(obj.supportedStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedOperations", toStringFlags, tabCount, tabSize, ToString(obj.supportedOperations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadOperationsInAllStages", toStringFlags, tabCount, tabSize, ToString(obj.quadOperationsInAllStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindBufferMemoryInfo>(const decode::Decoded_VkBindBufferMemoryInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindBufferMemoryInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", toStringFlags, tabCount, tabSize, ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImageMemoryInfo>(const decode::Decoded_VkBindImageMemoryInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImageMemoryInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", toStringFlags, tabCount, tabSize, ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevice16BitStorageFeatures>(const decode::Decoded_VkPhysicalDevice16BitStorageFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevice16BitStorageFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer16BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.storageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer16BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.uniformAndStorageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant16", toStringFlags, tabCount, tabSize, ToString(obj.storagePushConstant16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageInputOutput16", toStringFlags, tabCount, tabSize, ToString(obj.storageInputOutput16, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryDedicatedRequirements>(const decode::Decoded_VkMemoryDedicatedRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryDedicatedRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersDedicatedAllocation", toStringFlags, tabCount, tabSize, ToString(obj.prefersDedicatedAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiresDedicatedAllocation", toStringFlags, tabCount, tabSize, ToString(obj.requiresDedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryDedicatedAllocateInfo>(const decode::Decoded_VkMemoryDedicatedAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryDedicatedAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryAllocateFlagsInfo>(const decode::Decoded_VkMemoryAllocateFlagsInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryAllocateFlagsInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupRenderPassBeginInfo>(const decode::Decoded_VkDeviceGroupRenderPassBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupRenderPassBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceRenderAreaCount", toStringFlags, tabCount, tabSize, ToString(obj.deviceRenderAreaCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceRenderAreas", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDeviceRenderAreas, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupCommandBufferBeginInfo>(const decode::Decoded_VkDeviceGroupCommandBufferBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupCommandBufferBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupSubmitInfo>(const decode::Decoded_VkDeviceGroupSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreDeviceIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferCount", toStringFlags, tabCount, tabSize, ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBufferDeviceMasks", toStringFlags, tabCount, tabSize, ArrayToString(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreDeviceIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupBindSparseInfo>(const decode::Decoded_VkDeviceGroupBindSparseInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupBindSparseInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "resourceDeviceIndex", toStringFlags, tabCount, tabSize, ToString(obj.resourceDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryDeviceIndex", toStringFlags, tabCount, tabSize, ToString(obj.memoryDeviceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindBufferMemoryDeviceGroupInfo>(const decode::Decoded_VkBindBufferMemoryDeviceGroupInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindBufferMemoryDeviceGroupInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImageMemoryDeviceGroupInfo>(const decode::Decoded_VkBindImageMemoryDeviceGroupInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImageMemoryDeviceGroupInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "splitInstanceBindRegionCount", toStringFlags, tabCount, tabSize, ToString(obj.splitInstanceBindRegionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSplitInstanceBindRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pSplitInstanceBindRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGroupProperties>(const decode::Decoded_VkPhysicalDeviceGroupProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGroupProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDeviceCount", toStringFlags, tabCount, tabSize, ToString(obj.physicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDevices", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.physicalDevices.GetLength(), &decoded_obj.physicalDevices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsetAllocation", toStringFlags, tabCount, tabSize, ToString(obj.subsetAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupDeviceCreateInfo>(const decode::Decoded_VkDeviceGroupDeviceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupDeviceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDeviceCount", toStringFlags, tabCount, tabSize, ToString(obj.physicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPhysicalDevices", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pPhysicalDevices.GetLength(), &decoded_obj.pPhysicalDevices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferMemoryRequirementsInfo2>(const decode::Decoded_VkBufferMemoryRequirementsInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferMemoryRequirementsInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageMemoryRequirementsInfo2>(const decode::Decoded_VkImageMemoryRequirementsInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageMemoryRequirementsInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSparseMemoryRequirementsInfo2>(const decode::Decoded_VkImageSparseMemoryRequirementsInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSparseMemoryRequirementsInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryRequirements2>(const decode::Decoded_VkMemoryRequirements2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryRequirements2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryRequirements", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.memoryRequirements), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryRequirements2>(const decode::Decoded_VkSparseImageMemoryRequirements2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryRequirements2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryRequirements", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.memoryRequirements), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFeatures2>(const decode::Decoded_VkPhysicalDeviceFeatures2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFeatures2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "features", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.features), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProperties2>(const decode::Decoded_VkPhysicalDeviceProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "properties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.properties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFormatProperties2>(const decode::Decoded_VkFormatProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFormatProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.formatProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageFormatProperties2>(const decode::Decoded_VkImageFormatProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageFormatProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormatProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageFormatProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageFormatInfo2>(const decode::Decoded_VkPhysicalDeviceImageFormatInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageFormatInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", toStringFlags, tabCount, tabSize, '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyProperties2>(const decode::Decoded_VkQueueFamilyProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.queueFamilyProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMemoryProperties2>(const decode::Decoded_VkPhysicalDeviceMemoryProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMemoryProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.memoryProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageFormatProperties2>(const decode::Decoded_VkSparseImageFormatProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageFormatProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "properties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.properties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSparseImageFormatInfo2>(const decode::Decoded_VkPhysicalDeviceSparseImageFormatInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSparseImageFormatInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tiling", toStringFlags, tabCount, tabSize, '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePointClippingProperties>(const decode::Decoded_VkPhysicalDevicePointClippingProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePointClippingProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointClippingBehavior", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pointClippingBehavior, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkInputAttachmentAspectReference>(const decode::Decoded_VkInputAttachmentAspectReference& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkInputAttachmentAspectReference& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpass", toStringFlags, tabCount, tabSize, ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputAttachmentIndex", toStringFlags, tabCount, tabSize, ToString(obj.inputAttachmentIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassInputAttachmentAspectCreateInfo>(const decode::Decoded_VkRenderPassInputAttachmentAspectCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassInputAttachmentAspectCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aspectReferenceCount", toStringFlags, tabCount, tabSize, ToString(obj.aspectReferenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAspectReferences", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pAspectReferences, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewUsageCreateInfo>(const decode::Decoded_VkImageViewUsageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewUsageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineTessellationDomainOriginStateCreateInfo>(const decode::Decoded_VkPipelineTessellationDomainOriginStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineTessellationDomainOriginStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "domainOrigin", toStringFlags, tabCount, tabSize, '"' + ToString(obj.domainOrigin, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassMultiviewCreateInfo>(const decode::Decoded_VkRenderPassMultiviewCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassMultiviewCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", toStringFlags, tabCount, tabSize, ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewMasks", toStringFlags, tabCount, tabSize, ArrayToString(obj.subpassCount, obj.pViewMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", toStringFlags, tabCount, tabSize, ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewOffsets", toStringFlags, tabCount, tabSize, ArrayToString(obj.dependencyCount, obj.pViewOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "correlationMaskCount", toStringFlags, tabCount, tabSize, ToString(obj.correlationMaskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCorrelationMasks", toStringFlags, tabCount, tabSize, ArrayToString(obj.correlationMaskCount, obj.pCorrelationMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiviewFeatures>(const decode::Decoded_VkPhysicalDeviceMultiviewFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiviewFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiview", toStringFlags, tabCount, tabSize, ToString(obj.multiview, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewGeometryShader", toStringFlags, tabCount, tabSize, ToString(obj.multiviewGeometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewTessellationShader", toStringFlags, tabCount, tabSize, ToString(obj.multiviewTessellationShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiviewProperties>(const decode::Decoded_VkPhysicalDeviceMultiviewProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiviewProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewViewCount", toStringFlags, tabCount, tabSize, ToString(obj.maxMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewInstanceIndex", toStringFlags, tabCount, tabSize, ToString(obj.maxMultiviewInstanceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVariablePointersFeatures>(const decode::Decoded_VkPhysicalDeviceVariablePointersFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVariablePointersFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointersStorageBuffer", toStringFlags, tabCount, tabSize, ToString(obj.variablePointersStorageBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointers", toStringFlags, tabCount, tabSize, ToString(obj.variablePointers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProtectedMemoryFeatures>(const decode::Decoded_VkPhysicalDeviceProtectedMemoryFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProtectedMemoryFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedMemory", toStringFlags, tabCount, tabSize, ToString(obj.protectedMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProtectedMemoryProperties>(const decode::Decoded_VkPhysicalDeviceProtectedMemoryProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProtectedMemoryProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedNoFault", toStringFlags, tabCount, tabSize, ToString(obj.protectedNoFault, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceQueueInfo2>(const decode::Decoded_VkDeviceQueueInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceQueueInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueIndex", toStringFlags, tabCount, tabSize, ToString(obj.queueIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkProtectedSubmitInfo>(const decode::Decoded_VkProtectedSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkProtectedSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedSubmit", toStringFlags, tabCount, tabSize, ToString(obj.protectedSubmit, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerYcbcrConversionCreateInfo>(const decode::Decoded_VkSamplerYcbcrConversionCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerYcbcrConversionCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "ycbcrModel", toStringFlags, tabCount, tabSize, '"' + ToString(obj.ycbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "ycbcrRange", toStringFlags, tabCount, tabSize, '"' + ToString(obj.ycbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "components", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.components), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "xChromaOffset", toStringFlags, tabCount, tabSize, '"' + ToString(obj.xChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "yChromaOffset", toStringFlags, tabCount, tabSize, '"' + ToString(obj.yChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "chromaFilter", toStringFlags, tabCount, tabSize, '"' + ToString(obj.chromaFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "forceExplicitReconstruction", toStringFlags, tabCount, tabSize, ToString(obj.forceExplicitReconstruction, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerYcbcrConversionInfo>(const decode::Decoded_VkSamplerYcbcrConversionInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerYcbcrConversionInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conversion", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.conversion));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImagePlaneMemoryInfo>(const decode::Decoded_VkBindImagePlaneMemoryInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImagePlaneMemoryInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeAspect", toStringFlags, tabCount, tabSize, '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImagePlaneMemoryRequirementsInfo>(const decode::Decoded_VkImagePlaneMemoryRequirementsInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImagePlaneMemoryRequirementsInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeAspect", toStringFlags, tabCount, tabSize, '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const decode::Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversion", toStringFlags, tabCount, tabSize, ToString(obj.samplerYcbcrConversion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerYcbcrConversionImageFormatProperties>(const decode::Decoded_VkSamplerYcbcrConversionImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerYcbcrConversionImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinedImageSamplerDescriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.combinedImageSamplerDescriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorUpdateTemplateEntry>(const decode::Decoded_VkDescriptorUpdateTemplateEntry& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorUpdateTemplateEntry& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "dstBinding", toStringFlags, tabCount, tabSize, ToString(obj.dstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstArrayElement", toStringFlags, tabCount, tabSize, ToString(obj.dstArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorUpdateTemplateCreateInfo>(const decode::Decoded_VkDescriptorUpdateTemplateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorUpdateTemplateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorUpdateEntryCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorUpdateEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorUpdateEntries", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDescriptorUpdateEntries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "templateType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.templateType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorSetLayout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.descriptorSetLayout));
            FieldToString(strStrm, false, "pipelineBindPoint", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipelineLayout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.pipelineLayout));
            FieldToString(strStrm, false, "set", toStringFlags, tabCount, tabSize, ToString(obj.set, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryProperties>(const decode::Decoded_VkExternalMemoryProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "externalMemoryFeatures", toStringFlags, tabCount, tabSize, ToString(obj.externalMemoryFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalImageFormatInfo>(const decode::Decoded_VkPhysicalDeviceExternalImageFormatInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalImageFormatInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalImageFormatProperties>(const decode::Decoded_VkExternalImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.externalMemoryProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalBufferInfo>(const decode::Decoded_VkPhysicalDeviceExternalBufferInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalBufferInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalBufferProperties>(const decode::Decoded_VkExternalBufferProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalBufferProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.externalMemoryProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceIDProperties>(const decode::Decoded_VkPhysicalDeviceIDProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceIDProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.deviceUUID) + '"');
            FieldToString(strStrm, false, "driverUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.driverUUID) + '"');
            FieldToString(strStrm, false, "deviceLUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_LUID_SIZE, obj.deviceLUID) + '"');
            FieldToString(strStrm, false, "deviceNodeMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceNodeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceLUIDValid", toStringFlags, tabCount, tabSize, ToString(obj.deviceLUIDValid, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryImageCreateInfo>(const decode::Decoded_VkExternalMemoryImageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryImageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryBufferCreateInfo>(const decode::Decoded_VkExternalMemoryBufferCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryBufferCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryAllocateInfo>(const decode::Decoded_VkExportMemoryAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalFenceInfo>(const decode::Decoded_VkPhysicalDeviceExternalFenceInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalFenceInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalFenceProperties>(const decode::Decoded_VkExternalFenceProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalFenceProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalFenceFeatures", toStringFlags, tabCount, tabSize, ToString(obj.externalFenceFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportFenceCreateInfo>(const decode::Decoded_VkExportFenceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportFenceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportSemaphoreCreateInfo>(const decode::Decoded_VkExportSemaphoreCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportSemaphoreCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalSemaphoreInfo>(const decode::Decoded_VkPhysicalDeviceExternalSemaphoreInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalSemaphoreInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalSemaphoreProperties>(const decode::Decoded_VkExternalSemaphoreProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalSemaphoreProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalSemaphoreFeatures", toStringFlags, tabCount, tabSize, ToString(obj.externalSemaphoreFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMaintenance3Properties>(const decode::Decoded_VkPhysicalDeviceMaintenance3Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMaintenance3Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerSetDescriptors", toStringFlags, tabCount, tabSize, ToString(obj.maxPerSetDescriptors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationSize", toStringFlags, tabCount, tabSize, ToString(obj.maxMemoryAllocationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutSupport>(const decode::Decoded_VkDescriptorSetLayoutSupport& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutSupport& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supported", toStringFlags, tabCount, tabSize, ToString(obj.supported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderDrawParametersFeatures>(const decode::Decoded_VkPhysicalDeviceShaderDrawParametersFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderDrawParametersFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDrawParameters", toStringFlags, tabCount, tabSize, ToString(obj.shaderDrawParameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan11Features>(const decode::Decoded_VkPhysicalDeviceVulkan11Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan11Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer16BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.storageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer16BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.uniformAndStorageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant16", toStringFlags, tabCount, tabSize, ToString(obj.storagePushConstant16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageInputOutput16", toStringFlags, tabCount, tabSize, ToString(obj.storageInputOutput16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiview", toStringFlags, tabCount, tabSize, ToString(obj.multiview, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewGeometryShader", toStringFlags, tabCount, tabSize, ToString(obj.multiviewGeometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewTessellationShader", toStringFlags, tabCount, tabSize, ToString(obj.multiviewTessellationShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointersStorageBuffer", toStringFlags, tabCount, tabSize, ToString(obj.variablePointersStorageBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointers", toStringFlags, tabCount, tabSize, ToString(obj.variablePointers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedMemory", toStringFlags, tabCount, tabSize, ToString(obj.protectedMemory, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversion", toStringFlags, tabCount, tabSize, ToString(obj.samplerYcbcrConversion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDrawParameters", toStringFlags, tabCount, tabSize, ToString(obj.shaderDrawParameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan11Properties>(const decode::Decoded_VkPhysicalDeviceVulkan11Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan11Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.deviceUUID) + '"');
            FieldToString(strStrm, false, "driverUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.driverUUID) + '"');
            FieldToString(strStrm, false, "deviceLUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_LUID_SIZE, obj.deviceLUID) + '"');
            FieldToString(strStrm, false, "deviceNodeMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceNodeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceLUIDValid", toStringFlags, tabCount, tabSize, ToString(obj.deviceLUIDValid, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSupportedStages", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSupportedStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSupportedOperations", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSupportedOperations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupQuadOperationsInAllStages", toStringFlags, tabCount, tabSize, ToString(obj.subgroupQuadOperationsInAllStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointClippingBehavior", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pointClippingBehavior, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "maxMultiviewViewCount", toStringFlags, tabCount, tabSize, ToString(obj.maxMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewInstanceIndex", toStringFlags, tabCount, tabSize, ToString(obj.maxMultiviewInstanceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedNoFault", toStringFlags, tabCount, tabSize, ToString(obj.protectedNoFault, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerSetDescriptors", toStringFlags, tabCount, tabSize, ToString(obj.maxPerSetDescriptors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationSize", toStringFlags, tabCount, tabSize, ToString(obj.maxMemoryAllocationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan12Features>(const decode::Decoded_VkPhysicalDeviceVulkan12Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan12Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerMirrorClampToEdge", toStringFlags, tabCount, tabSize, ToString(obj.samplerMirrorClampToEdge, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawIndirectCount", toStringFlags, tabCount, tabSize, ToString(obj.drawIndirectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer8BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.storageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer8BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.uniformAndStorageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant8", toStringFlags, tabCount, tabSize, ToString(obj.storagePushConstant8, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferInt64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedInt64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt8", toStringFlags, tabCount, tabSize, ToString(obj.shaderInt8, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorIndexing", toStringFlags, tabCount, tabSize, ToString(obj.descriptorIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderInputAttachmentArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderSampledImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderInputAttachmentArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingUniformBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingSampledImageUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingSampledImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageImageUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingStorageImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingStorageBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformTexelBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageTexelBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUpdateUnusedWhilePending", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingUpdateUnusedWhilePending, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingPartiallyBound", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingPartiallyBound, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingVariableDescriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingVariableDescriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "runtimeDescriptorArray", toStringFlags, tabCount, tabSize, ToString(obj.runtimeDescriptorArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerFilterMinmax", toStringFlags, tabCount, tabSize, ToString(obj.samplerFilterMinmax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scalarBlockLayout", toStringFlags, tabCount, tabSize, ToString(obj.scalarBlockLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagelessFramebuffer", toStringFlags, tabCount, tabSize, ToString(obj.imagelessFramebuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformBufferStandardLayout", toStringFlags, tabCount, tabSize, ToString(obj.uniformBufferStandardLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupExtendedTypes", toStringFlags, tabCount, tabSize, ToString(obj.shaderSubgroupExtendedTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateDepthStencilLayouts", toStringFlags, tabCount, tabSize, ToString(obj.separateDepthStencilLayouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hostQueryReset", toStringFlags, tabCount, tabSize, ToString(obj.hostQueryReset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timelineSemaphore", toStringFlags, tabCount, tabSize, ToString(obj.timelineSemaphore, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModel", toStringFlags, tabCount, tabSize, ToString(obj.vulkanMemoryModel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelDeviceScope", toStringFlags, tabCount, tabSize, ToString(obj.vulkanMemoryModelDeviceScope, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelAvailabilityVisibilityChains", toStringFlags, tabCount, tabSize, ToString(obj.vulkanMemoryModelAvailabilityVisibilityChains, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderOutputViewportIndex", toStringFlags, tabCount, tabSize, ToString(obj.shaderOutputViewportIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderOutputLayer", toStringFlags, tabCount, tabSize, ToString(obj.shaderOutputLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupBroadcastDynamicId", toStringFlags, tabCount, tabSize, ToString(obj.subgroupBroadcastDynamicId, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkConformanceVersion>(const decode::Decoded_VkConformanceVersion& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkConformanceVersion& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "major", toStringFlags, tabCount, tabSize, ToString(obj.major, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minor", toStringFlags, tabCount, tabSize, ToString(obj.minor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subminor", toStringFlags, tabCount, tabSize, ToString(obj.subminor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "patch", toStringFlags, tabCount, tabSize, ToString(obj.patch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan12Properties>(const decode::Decoded_VkPhysicalDeviceVulkan12Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan12Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverID", toStringFlags, tabCount, tabSize, '"' + ToString(obj.driverID, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "driverName", toStringFlags, tabCount, tabSize, '"' + std::string(obj.driverName) + '"');
            FieldToString(strStrm, false, "driverInfo", toStringFlags, tabCount, tabSize, '"' + std::string(obj.driverInfo) + '"');
            FieldToString(strStrm, false, "conformanceVersion", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.conformanceVersion), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "denormBehaviorIndependence", toStringFlags, tabCount, tabSize, '"' + ToString(obj.denormBehaviorIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "roundingModeIndependence", toStringFlags, tabCount, tabSize, '"' + ToString(obj.roundingModeIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderSignedZeroInfNanPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderSignedZeroInfNanPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderSignedZeroInfNanPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormFlushToZeroFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormFlushToZeroFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormFlushToZeroFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTEFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTEFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTEFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTZFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTZFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTZFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxUpdateAfterBindDescriptorsInAllPools", toStringFlags, tabCount, tabSize, ToString(obj.maxUpdateAfterBindDescriptorsInAllPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderSampledImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderInputAttachmentArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccessUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.robustBufferAccessUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadDivergentImplicitLod", toStringFlags, tabCount, tabSize, ToString(obj.quadDivergentImplicitLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindUniformBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSampledImages", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageImages", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageUpdateAfterBindResources", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageUpdateAfterBindResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSampledImages", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageImages", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedDepthResolveModes", toStringFlags, tabCount, tabSize, ToString(obj.supportedDepthResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStencilResolveModes", toStringFlags, tabCount, tabSize, ToString(obj.supportedStencilResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolveNone", toStringFlags, tabCount, tabSize, ToString(obj.independentResolveNone, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolve", toStringFlags, tabCount, tabSize, ToString(obj.independentResolve, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxSingleComponentFormats", toStringFlags, tabCount, tabSize, ToString(obj.filterMinmaxSingleComponentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxImageComponentMapping", toStringFlags, tabCount, tabSize, ToString(obj.filterMinmaxImageComponentMapping, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTimelineSemaphoreValueDifference", toStringFlags, tabCount, tabSize, ToString(obj.maxTimelineSemaphoreValueDifference, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferIntegerColorSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.framebufferIntegerColorSampleCounts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageFormatListCreateInfo>(const decode::Decoded_VkImageFormatListCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageFormatListCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewFormatCount", toStringFlags, tabCount, tabSize, ToString(obj.viewFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewFormats", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.viewFormatCount, obj.pViewFormats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentDescription2>(const decode::Decoded_VkAttachmentDescription2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentDescription2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilLoadOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilLoadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilStoreOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilStoreOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.initialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "finalLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.finalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentReference2>(const decode::Decoded_VkAttachmentReference2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentReference2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachment", toStringFlags, tabCount, tabSize, ToString(obj.attachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.layout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "aspectMask", toStringFlags, tabCount, tabSize, ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDescription2>(const decode::Decoded_VkSubpassDescription2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDescription2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "viewMask", toStringFlags, tabCount, tabSize, ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.inputAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInputAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResolveAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pResolveAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthStencilAttachment", toStringFlags, tabCount, tabSize, ((decoded_obj.pDepthStencilAttachment && decoded_obj.pDepthStencilAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "preserveAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.preserveAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPreserveAttachments", toStringFlags, tabCount, tabSize, ArrayToString(obj.preserveAttachmentCount, obj.pPreserveAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDependency2>(const decode::Decoded_VkSubpassDependency2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDependency2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubpass", toStringFlags, tabCount, tabSize, ToString(obj.srcSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubpass", toStringFlags, tabCount, tabSize, ToString(obj.dstSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", toStringFlags, tabCount, tabSize, ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", toStringFlags, tabCount, tabSize, ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", toStringFlags, tabCount, tabSize, ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewOffset", toStringFlags, tabCount, tabSize, ToString(obj.viewOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreateInfo2>(const decode::Decoded_VkRenderPassCreateInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreateInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", toStringFlags, tabCount, tabSize, ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpasses", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pSubpasses, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", toStringFlags, tabCount, tabSize, ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencies", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDependencies, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "correlatedViewMaskCount", toStringFlags, tabCount, tabSize, ToString(obj.correlatedViewMaskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCorrelatedViewMasks", toStringFlags, tabCount, tabSize, ArrayToString(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassBeginInfo>(const decode::Decoded_VkSubpassBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "contents", toStringFlags, tabCount, tabSize, '"' + ToString(obj.contents, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassEndInfo>(const decode::Decoded_VkSubpassEndInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassEndInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevice8BitStorageFeatures>(const decode::Decoded_VkPhysicalDevice8BitStorageFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevice8BitStorageFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer8BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.storageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer8BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.uniformAndStorageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant8", toStringFlags, tabCount, tabSize, ToString(obj.storagePushConstant8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDriverProperties>(const decode::Decoded_VkPhysicalDeviceDriverProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDriverProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverID", toStringFlags, tabCount, tabSize, '"' + ToString(obj.driverID, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "driverName", toStringFlags, tabCount, tabSize, '"' + std::string(obj.driverName) + '"');
            FieldToString(strStrm, false, "driverInfo", toStringFlags, tabCount, tabSize, '"' + std::string(obj.driverInfo) + '"');
            FieldToString(strStrm, false, "conformanceVersion", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.conformanceVersion), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderAtomicInt64Features>(const decode::Decoded_VkPhysicalDeviceShaderAtomicInt64Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderAtomicInt64Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferInt64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedInt64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedInt64Atomics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderFloat16Int8Features>(const decode::Decoded_VkPhysicalDeviceShaderFloat16Int8Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderFloat16Int8Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt8", toStringFlags, tabCount, tabSize, ToString(obj.shaderInt8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFloatControlsProperties>(const decode::Decoded_VkPhysicalDeviceFloatControlsProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFloatControlsProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "denormBehaviorIndependence", toStringFlags, tabCount, tabSize, '"' + ToString(obj.denormBehaviorIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "roundingModeIndependence", toStringFlags, tabCount, tabSize, '"' + ToString(obj.roundingModeIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderSignedZeroInfNanPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderSignedZeroInfNanPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderSignedZeroInfNanPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormFlushToZeroFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormFlushToZeroFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderDenormFlushToZeroFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTEFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTEFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTEFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat16", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTZFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat32", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTZFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat64", toStringFlags, tabCount, tabSize, ToString(obj.shaderRoundingModeRTZFloat64, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfo>(const decode::Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", toStringFlags, tabCount, tabSize, ToString(obj.bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindingFlags", toStringFlags, tabCount, tabSize, ArrayToString(obj.bindingCount, obj.pBindingFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDescriptorIndexingFeatures>(const decode::Decoded_VkPhysicalDeviceDescriptorIndexingFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDescriptorIndexingFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderInputAttachmentArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayDynamicIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderSampledImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderInputAttachmentArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayNonUniformIndexing", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingUniformBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingSampledImageUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingSampledImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageImageUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingStorageImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingStorageBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformTexelBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageTexelBufferUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUpdateUnusedWhilePending", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingUpdateUnusedWhilePending, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingPartiallyBound", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingPartiallyBound, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingVariableDescriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingVariableDescriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "runtimeDescriptorArray", toStringFlags, tabCount, tabSize, ToString(obj.runtimeDescriptorArray, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDescriptorIndexingProperties>(const decode::Decoded_VkPhysicalDeviceDescriptorIndexingProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDescriptorIndexingProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxUpdateAfterBindDescriptorsInAllPools", toStringFlags, tabCount, tabSize, ToString(obj.maxUpdateAfterBindDescriptorsInAllPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderUniformBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderSampledImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderStorageImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexingNative", toStringFlags, tabCount, tabSize, ToString(obj.shaderInputAttachmentArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccessUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.robustBufferAccessUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadDivergentImplicitLod", toStringFlags, tabCount, tabSize, ToString(obj.quadDivergentImplicitLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindUniformBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSampledImages", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageImages", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageUpdateAfterBindResources", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageUpdateAfterBindResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSampledImages", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageImages", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInputAttachments", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfo>(const decode::Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorCounts", toStringFlags, tabCount, tabSize, ArrayToString(obj.descriptorSetCount, obj.pDescriptorCounts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupport>(const decode::Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupport& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVariableDescriptorCount", toStringFlags, tabCount, tabSize, ToString(obj.maxVariableDescriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDescriptionDepthStencilResolve>(const decode::Decoded_VkSubpassDescriptionDepthStencilResolve& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDescriptionDepthStencilResolve& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthResolveMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.depthResolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilResolveMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilResolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pDepthStencilResolveAttachment", toStringFlags, tabCount, tabSize, ((decoded_obj.pDepthStencilResolveAttachment && decoded_obj.pDepthStencilResolveAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilResolveAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthStencilResolveProperties>(const decode::Decoded_VkPhysicalDeviceDepthStencilResolveProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthStencilResolveProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedDepthResolveModes", toStringFlags, tabCount, tabSize, ToString(obj.supportedDepthResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStencilResolveModes", toStringFlags, tabCount, tabSize, ToString(obj.supportedStencilResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolveNone", toStringFlags, tabCount, tabSize, ToString(obj.independentResolveNone, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolve", toStringFlags, tabCount, tabSize, ToString(obj.independentResolve, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceScalarBlockLayoutFeatures>(const decode::Decoded_VkPhysicalDeviceScalarBlockLayoutFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceScalarBlockLayoutFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scalarBlockLayout", toStringFlags, tabCount, tabSize, ToString(obj.scalarBlockLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageStencilUsageCreateInfo>(const decode::Decoded_VkImageStencilUsageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageStencilUsageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilUsage", toStringFlags, tabCount, tabSize, ToString(obj.stencilUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerReductionModeCreateInfo>(const decode::Decoded_VkSamplerReductionModeCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerReductionModeCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reductionMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.reductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSamplerFilterMinmaxProperties>(const decode::Decoded_VkPhysicalDeviceSamplerFilterMinmaxProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxSingleComponentFormats", toStringFlags, tabCount, tabSize, ToString(obj.filterMinmaxSingleComponentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxImageComponentMapping", toStringFlags, tabCount, tabSize, ToString(obj.filterMinmaxImageComponentMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkanMemoryModelFeatures>(const decode::Decoded_VkPhysicalDeviceVulkanMemoryModelFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkanMemoryModelFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModel", toStringFlags, tabCount, tabSize, ToString(obj.vulkanMemoryModel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelDeviceScope", toStringFlags, tabCount, tabSize, ToString(obj.vulkanMemoryModelDeviceScope, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelAvailabilityVisibilityChains", toStringFlags, tabCount, tabSize, ToString(obj.vulkanMemoryModelAvailabilityVisibilityChains, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImagelessFramebufferFeatures>(const decode::Decoded_VkPhysicalDeviceImagelessFramebufferFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImagelessFramebufferFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagelessFramebuffer", toStringFlags, tabCount, tabSize, ToString(obj.imagelessFramebuffer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferAttachmentImageInfo>(const decode::Decoded_VkFramebufferAttachmentImageInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferAttachmentImageInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", toStringFlags, tabCount, tabSize, ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", toStringFlags, tabCount, tabSize, ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewFormatCount", toStringFlags, tabCount, tabSize, ToString(obj.viewFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewFormats", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.viewFormatCount, obj.pViewFormats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferAttachmentsCreateInfo>(const decode::Decoded_VkFramebufferAttachmentsCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferAttachmentsCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentImageInfoCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentImageInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachmentImageInfos", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pAttachmentImageInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassAttachmentBeginInfo>(const decode::Decoded_VkRenderPassAttachmentBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassAttachmentBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pAttachments.GetLength(), &decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const decode::Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformBufferStandardLayout", toStringFlags, tabCount, tabSize, ToString(obj.uniformBufferStandardLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const decode::Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupExtendedTypes", toStringFlags, tabCount, tabSize, ToString(obj.shaderSubgroupExtendedTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const decode::Decoded_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateDepthStencilLayouts", toStringFlags, tabCount, tabSize, ToString(obj.separateDepthStencilLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentReferenceStencilLayout>(const decode::Decoded_VkAttachmentReferenceStencilLayout& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentReferenceStencilLayout& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentDescriptionStencilLayout>(const decode::Decoded_VkAttachmentDescriptionStencilLayout& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentDescriptionStencilLayout& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilInitialLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilInitialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilFinalLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilFinalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceHostQueryResetFeatures>(const decode::Decoded_VkPhysicalDeviceHostQueryResetFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceHostQueryResetFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hostQueryReset", toStringFlags, tabCount, tabSize, ToString(obj.hostQueryReset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTimelineSemaphoreFeatures>(const decode::Decoded_VkPhysicalDeviceTimelineSemaphoreFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTimelineSemaphoreFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timelineSemaphore", toStringFlags, tabCount, tabSize, ToString(obj.timelineSemaphore, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTimelineSemaphoreProperties>(const decode::Decoded_VkPhysicalDeviceTimelineSemaphoreProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTimelineSemaphoreProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTimelineSemaphoreValueDifference", toStringFlags, tabCount, tabSize, ToString(obj.maxTimelineSemaphoreValueDifference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreTypeCreateInfo>(const decode::Decoded_VkSemaphoreTypeCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreTypeCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphoreType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.semaphoreType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialValue", toStringFlags, tabCount, tabSize, ToString(obj.initialValue, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTimelineSemaphoreSubmitInfo>(const decode::Decoded_VkTimelineSemaphoreSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTimelineSemaphoreSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreValueCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreValues", toStringFlags, tabCount, tabSize, ArrayToString(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreValueCount", toStringFlags, tabCount, tabSize, ToString(obj.signalSemaphoreValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreValues", toStringFlags, tabCount, tabSize, ArrayToString(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreWaitInfo>(const decode::Decoded_VkSemaphoreWaitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreWaitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.semaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSemaphores", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pSemaphores.GetLength(), &decoded_obj.pSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pValues", toStringFlags, tabCount, tabSize, ArrayToString(obj.semaphoreCount, obj.pValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreSignalInfo>(const decode::Decoded_VkSemaphoreSignalInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreSignalInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "value", toStringFlags, tabCount, tabSize, ToString(obj.value, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeatures>(const decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBufferDeviceAddressFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferDeviceAddressInfo>(const decode::Decoded_VkBufferDeviceAddressInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferDeviceAddressInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferOpaqueCaptureAddressCreateInfo>(const decode::Decoded_VkBufferOpaqueCaptureAddressCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferOpaqueCaptureAddressCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opaqueCaptureAddress", toStringFlags, tabCount, tabSize, ToString(obj.opaqueCaptureAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryOpaqueCaptureAddressAllocateInfo>(const decode::Decoded_VkMemoryOpaqueCaptureAddressAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryOpaqueCaptureAddressAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opaqueCaptureAddress", toStringFlags, tabCount, tabSize, ToString(obj.opaqueCaptureAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo>(const decode::Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceMemoryOpaqueCaptureAddressInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan13Features>(const decode::Decoded_VkPhysicalDeviceVulkan13Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan13Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess", toStringFlags, tabCount, tabSize, ToString(obj.robustImageAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inlineUniformBlock", toStringFlags, tabCount, tabSize, ToString(obj.inlineUniformBlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingInlineUniformBlockUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCreationCacheControl", toStringFlags, tabCount, tabSize, ToString(obj.pipelineCreationCacheControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateData", toStringFlags, tabCount, tabSize, ToString(obj.privateData, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDemoteToHelperInvocation", toStringFlags, tabCount, tabSize, ToString(obj.shaderDemoteToHelperInvocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTerminateInvocation", toStringFlags, tabCount, tabSize, ToString(obj.shaderTerminateInvocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSizeControl", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSizeControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeFullSubgroups", toStringFlags, tabCount, tabSize, ToString(obj.computeFullSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "synchronization2", toStringFlags, tabCount, tabSize, ToString(obj.synchronization2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_HDR", toStringFlags, tabCount, tabSize, ToString(obj.textureCompressionASTC_HDR, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderZeroInitializeWorkgroupMemory", toStringFlags, tabCount, tabSize, ToString(obj.shaderZeroInitializeWorkgroupMemory, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicRendering", toStringFlags, tabCount, tabSize, ToString(obj.dynamicRendering, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerDotProduct", toStringFlags, tabCount, tabSize, ToString(obj.shaderIntegerDotProduct, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maintenance4", toStringFlags, tabCount, tabSize, ToString(obj.maintenance4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan13Properties>(const decode::Decoded_VkPhysicalDeviceVulkan13Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan13Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSubgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.minSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.maxSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkgroupSubgroups", toStringFlags, tabCount, tabSize, ToString(obj.maxComputeWorkgroupSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSizeStages", toStringFlags, tabCount, tabSize, ToString(obj.requiredSubgroupSizeStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockSize", toStringFlags, tabCount, tabSize, ToString(obj.maxInlineUniformBlockSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformTotalSize", toStringFlags, tabCount, tabSize, ToString(obj.maxInlineUniformTotalSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetAlignmentBytes", toStringFlags, tabCount, tabSize, ToString(obj.storageTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetSingleTexelAlignment", toStringFlags, tabCount, tabSize, ToString(obj.storageTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetAlignmentBytes", toStringFlags, tabCount, tabSize, ToString(obj.uniformTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetSingleTexelAlignment", toStringFlags, tabCount, tabSize, ToString(obj.uniformTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBufferSize", toStringFlags, tabCount, tabSize, ToString(obj.maxBufferSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCreationFeedback>(const decode::Decoded_VkPipelineCreationFeedback& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCreationFeedback& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "duration", toStringFlags, tabCount, tabSize, ToString(obj.duration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCreationFeedbackCreateInfo>(const decode::Decoded_VkPipelineCreationFeedbackCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCreationFeedbackCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineCreationFeedback", toStringFlags, tabCount, tabSize, ((decoded_obj.pPipelineCreationFeedback && decoded_obj.pPipelineCreationFeedback->GetMetaStructPointer()) ? ToString(*decoded_obj.pPipelineCreationFeedback->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pipelineStageCreationFeedbackCount", toStringFlags, tabCount, tabSize, ToString(obj.pipelineStageCreationFeedbackCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineStageCreationFeedbacks", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pPipelineStageCreationFeedbacks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderTerminateInvocationFeatures>(const decode::Decoded_VkPhysicalDeviceShaderTerminateInvocationFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderTerminateInvocationFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTerminateInvocation", toStringFlags, tabCount, tabSize, ToString(obj.shaderTerminateInvocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceToolProperties>(const decode::Decoded_VkPhysicalDeviceToolProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceToolProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, '"' + std::string(obj.name) + '"');
            FieldToString(strStrm, false, "version", toStringFlags, tabCount, tabSize, '"' + std::string(obj.version) + '"');
            FieldToString(strStrm, false, "purposes", toStringFlags, tabCount, tabSize, ToString(obj.purposes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", toStringFlags, tabCount, tabSize, '"' + std::string(obj.description) + '"');
            FieldToString(strStrm, false, "layer", toStringFlags, tabCount, tabSize, '"' + std::string(obj.layer) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(const decode::Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDemoteToHelperInvocation", toStringFlags, tabCount, tabSize, ToString(obj.shaderDemoteToHelperInvocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePrivateDataFeatures>(const decode::Decoded_VkPhysicalDevicePrivateDataFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePrivateDataFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateData", toStringFlags, tabCount, tabSize, ToString(obj.privateData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDevicePrivateDataCreateInfo>(const decode::Decoded_VkDevicePrivateDataCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDevicePrivateDataCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlotRequestCount", toStringFlags, tabCount, tabSize, ToString(obj.privateDataSlotRequestCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPrivateDataSlotCreateInfo>(const decode::Decoded_VkPrivateDataSlotCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPrivateDataSlotCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineCreationCacheControlFeatures>(const decode::Decoded_VkPhysicalDevicePipelineCreationCacheControlFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineCreationCacheControlFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCreationCacheControl", toStringFlags, tabCount, tabSize, ToString(obj.pipelineCreationCacheControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryBarrier2>(const decode::Decoded_VkMemoryBarrier2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryBarrier2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", toStringFlags, tabCount, tabSize, ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", toStringFlags, tabCount, tabSize, ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferMemoryBarrier2>(const decode::Decoded_VkBufferMemoryBarrier2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferMemoryBarrier2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", toStringFlags, tabCount, tabSize, ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", toStringFlags, tabCount, tabSize, ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageMemoryBarrier2>(const decode::Decoded_VkImageMemoryBarrier2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageMemoryBarrier2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", toStringFlags, tabCount, tabSize, ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", toStringFlags, tabCount, tabSize, ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", toStringFlags, tabCount, tabSize, ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.oldLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "newLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.newLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "subresourceRange", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.subresourceRange), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDependencyInfo>(const decode::Decoded_VkDependencyInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDependencyInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", toStringFlags, tabCount, tabSize, ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryBarrierCount", toStringFlags, tabCount, tabSize, ToString(obj.memoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryBarriers", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferMemoryBarrierCount", toStringFlags, tabCount, tabSize, ToString(obj.bufferMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferMemoryBarriers", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pBufferMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMemoryBarrierCount", toStringFlags, tabCount, tabSize, ToString(obj.imageMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageMemoryBarriers", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pImageMemoryBarriers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreSubmitInfo>(const decode::Decoded_VkSemaphoreSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "value", toStringFlags, tabCount, tabSize, ToString(obj.value, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageMask", toStringFlags, tabCount, tabSize, ToString(obj.stageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndex", toStringFlags, tabCount, tabSize, ToString(obj.deviceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferSubmitInfo>(const decode::Decoded_VkCommandBufferSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.commandBuffer));
            FieldToString(strStrm, false, "deviceMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubmitInfo2>(const decode::Decoded_VkSubmitInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubmitInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreInfoCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreInfos", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pWaitSemaphoreInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferInfoCount", toStringFlags, tabCount, tabSize, ToString(obj.commandBufferInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBufferInfos", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pCommandBufferInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreInfoCount", toStringFlags, tabCount, tabSize, ToString(obj.signalSemaphoreInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreInfos", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pSignalSemaphoreInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSynchronization2Features>(const decode::Decoded_VkPhysicalDeviceSynchronization2Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSynchronization2Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "synchronization2", toStringFlags, tabCount, tabSize, ToString(obj.synchronization2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>(const decode::Decoded_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderZeroInitializeWorkgroupMemory", toStringFlags, tabCount, tabSize, ToString(obj.shaderZeroInitializeWorkgroupMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageRobustnessFeatures>(const decode::Decoded_VkPhysicalDeviceImageRobustnessFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageRobustnessFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess", toStringFlags, tabCount, tabSize, ToString(obj.robustImageAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferCopy2>(const decode::Decoded_VkBufferCopy2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferCopy2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", toStringFlags, tabCount, tabSize, ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", toStringFlags, tabCount, tabSize, ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyBufferInfo2>(const decode::Decoded_VkCopyBufferInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyBufferInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcBuffer));
            FieldToString(strStrm, false, "dstBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstBuffer));
            FieldToString(strStrm, false, "regionCount", toStringFlags, tabCount, tabSize, ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCopy2>(const decode::Decoded_VkImageCopy2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCopy2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyImageInfo2>(const decode::Decoded_VkCopyImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", toStringFlags, tabCount, tabSize, ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferImageCopy2>(const decode::Decoded_VkBufferImageCopy2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferImageCopy2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferOffset", toStringFlags, tabCount, tabSize, ToString(obj.bufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferRowLength", toStringFlags, tabCount, tabSize, ToString(obj.bufferRowLength, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageHeight", toStringFlags, tabCount, tabSize, ToString(obj.bufferImageHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyBufferToImageInfo2>(const decode::Decoded_VkCopyBufferToImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyBufferToImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcBuffer));
            FieldToString(strStrm, false, "dstImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", toStringFlags, tabCount, tabSize, ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyImageToBufferInfo2>(const decode::Decoded_VkCopyImageToBufferInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyImageToBufferInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstBuffer));
            FieldToString(strStrm, false, "regionCount", toStringFlags, tabCount, tabSize, ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageBlit2>(const decode::Decoded_VkImageBlit2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageBlit2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffsets", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.srcOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffsets", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.dstOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBlitImageInfo2>(const decode::Decoded_VkBlitImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBlitImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", toStringFlags, tabCount, tabSize, ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filter", toStringFlags, tabCount, tabSize, '"' + ToString(obj.filter, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageResolve2>(const decode::Decoded_VkImageResolve2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageResolve2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkResolveImageInfo2>(const decode::Decoded_VkResolveImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkResolveImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", toStringFlags, tabCount, tabSize, ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubgroupSizeControlFeatures>(const decode::Decoded_VkPhysicalDeviceSubgroupSizeControlFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubgroupSizeControlFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSizeControl", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSizeControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeFullSubgroups", toStringFlags, tabCount, tabSize, ToString(obj.computeFullSubgroups, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubgroupSizeControlProperties>(const decode::Decoded_VkPhysicalDeviceSubgroupSizeControlProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubgroupSizeControlProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSubgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.minSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.maxSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkgroupSubgroups", toStringFlags, tabCount, tabSize, ToString(obj.maxComputeWorkgroupSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSizeStages", toStringFlags, tabCount, tabSize, ToString(obj.requiredSubgroupSizeStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo>(const decode::Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.requiredSubgroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInlineUniformBlockFeatures>(const decode::Decoded_VkPhysicalDeviceInlineUniformBlockFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInlineUniformBlockFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inlineUniformBlock", toStringFlags, tabCount, tabSize, ToString(obj.inlineUniformBlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingInlineUniformBlockUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInlineUniformBlockProperties>(const decode::Decoded_VkPhysicalDeviceInlineUniformBlockProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInlineUniformBlockProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockSize", toStringFlags, tabCount, tabSize, ToString(obj.maxInlineUniformBlockSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInlineUniformBlocks", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWriteDescriptorSetInlineUniformBlock>(const decode::Decoded_VkWriteDescriptorSetInlineUniformBlock& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWriteDescriptorSetInlineUniformBlock& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", toStringFlags, tabCount, tabSize, ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorPoolInlineUniformBlockCreateInfo>(const decode::Decoded_VkDescriptorPoolInlineUniformBlockCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorPoolInlineUniformBlockCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockBindings", toStringFlags, tabCount, tabSize, ToString(obj.maxInlineUniformBlockBindings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(const decode::Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTextureCompressionASTCHDRFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_HDR", toStringFlags, tabCount, tabSize, ToString(obj.textureCompressionASTC_HDR, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingAttachmentInfo>(const decode::Decoded_VkRenderingAttachmentInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingAttachmentInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "imageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "resolveMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.resolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "resolveImageView", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.resolveImageView));
            FieldToString(strStrm, false, "resolveImageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.resolveImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", toStringFlags, tabCount, tabSize, '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clearValue", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.clearValue), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingInfo>(const decode::Decoded_VkRenderingInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderArea", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.renderArea), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", toStringFlags, tabCount, tabSize, ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", toStringFlags, tabCount, tabSize, ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthAttachment", toStringFlags, tabCount, tabSize, ((decoded_obj.pDepthAttachment && decoded_obj.pDepthAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pStencilAttachment", toStringFlags, tabCount, tabSize, ((decoded_obj.pStencilAttachment && decoded_obj.pStencilAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pStencilAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRenderingCreateInfo>(const decode::Decoded_VkPipelineRenderingCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRenderingCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", toStringFlags, tabCount, tabSize, ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentFormats", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthAttachmentFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.depthAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilAttachmentFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDynamicRenderingFeatures>(const decode::Decoded_VkPhysicalDeviceDynamicRenderingFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDynamicRenderingFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicRendering", toStringFlags, tabCount, tabSize, ToString(obj.dynamicRendering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceRenderingInfo>(const decode::Decoded_VkCommandBufferInheritanceRenderingInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceRenderingInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", toStringFlags, tabCount, tabSize, ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentFormats", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthAttachmentFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.depthAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilAttachmentFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stencilAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "rasterizationSamples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductFeatures>(const decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderIntegerDotProductFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerDotProduct", toStringFlags, tabCount, tabSize, ToString(obj.shaderIntegerDotProduct, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductProperties>(const decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderIntegerDotProductProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProduct64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitUnsignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitSignedAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated", toStringFlags, tabCount, tabSize, ToString(obj.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentProperties>(const decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTexelBufferAlignmentProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetAlignmentBytes", toStringFlags, tabCount, tabSize, ToString(obj.storageTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetSingleTexelAlignment", toStringFlags, tabCount, tabSize, ToString(obj.storageTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetAlignmentBytes", toStringFlags, tabCount, tabSize, ToString(obj.uniformTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetSingleTexelAlignment", toStringFlags, tabCount, tabSize, ToString(obj.uniformTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFormatProperties3>(const decode::Decoded_VkFormatProperties3& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFormatProperties3& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "linearTilingFeatures", toStringFlags, tabCount, tabSize, ToString(obj.linearTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalTilingFeatures", toStringFlags, tabCount, tabSize, ToString(obj.optimalTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferFeatures", toStringFlags, tabCount, tabSize, ToString(obj.bufferFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMaintenance4Features>(const decode::Decoded_VkPhysicalDeviceMaintenance4Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMaintenance4Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maintenance4", toStringFlags, tabCount, tabSize, ToString(obj.maintenance4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMaintenance4Properties>(const decode::Decoded_VkPhysicalDeviceMaintenance4Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMaintenance4Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBufferSize", toStringFlags, tabCount, tabSize, ToString(obj.maxBufferSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceBufferMemoryRequirements>(const decode::Decoded_VkDeviceBufferMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceBufferMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfo", toStringFlags, tabCount, tabSize, ((decoded_obj.pCreateInfo && decoded_obj.pCreateInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pCreateInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceImageMemoryRequirements>(const decode::Decoded_VkDeviceImageMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceImageMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfo", toStringFlags, tabCount, tabSize, ((decoded_obj.pCreateInfo && decoded_obj.pCreateInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pCreateInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "planeAspect", toStringFlags, tabCount, tabSize, '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilitiesKHR>(const decode::Decoded_VkSurfaceCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "minImageCount", toStringFlags, tabCount, tabSize, ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageCount", toStringFlags, tabCount, tabSize, ToString(obj.maxImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.currentExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", toStringFlags, tabCount, tabSize, ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentTransform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.currentTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "supportedCompositeAlpha", toStringFlags, tabCount, tabSize, ToString(obj.supportedCompositeAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedUsageFlags", toStringFlags, tabCount, tabSize, ToString(obj.supportedUsageFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFormatKHR>(const decode::Decoded_VkSurfaceFormatKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFormatKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorSpace", toStringFlags, tabCount, tabSize, '"' + ToString(obj.colorSpace, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainCreateInfoKHR>(const decode::Decoded_VkSwapchainCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.surface));
            FieldToString(strStrm, false, "minImageCount", toStringFlags, tabCount, tabSize, ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageColorSpace", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageColorSpace, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageArrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.imageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageUsage", toStringFlags, tabCount, tabSize, ToString(obj.imageUsage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSharingMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageSharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preTransform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.preTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compositeAlpha", toStringFlags, tabCount, tabSize, '"' + ToString(obj.compositeAlpha, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "presentMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.presentMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clipped", toStringFlags, tabCount, tabSize, ToString(obj.clipped, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldSwapchain", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.oldSwapchain));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentInfoKHR>(const decode::Decoded_VkPresentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pWaitSemaphores.GetLength(), &decoded_obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", toStringFlags, tabCount, tabSize, ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchains", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pSwapchains.GetLength(), &decoded_obj.pSwapchains, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.swapchainCount, obj.pImageIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResults", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.swapchainCount, obj.pResults, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSwapchainCreateInfoKHR>(const decode::Decoded_VkImageSwapchainCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSwapchainCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.swapchain));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImageMemorySwapchainInfoKHR>(const decode::Decoded_VkBindImageMemorySwapchainInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImageMemorySwapchainInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.swapchain));
            FieldToString(strStrm, false, "imageIndex", toStringFlags, tabCount, tabSize, ToString(obj.imageIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAcquireNextImageInfoKHR>(const decode::Decoded_VkAcquireNextImageInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAcquireNextImageInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.swapchain));
            FieldToString(strStrm, false, "timeout", toStringFlags, tabCount, tabSize, ToString(obj.timeout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "fence", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "deviceMask", toStringFlags, tabCount, tabSize, ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupPresentCapabilitiesKHR>(const decode::Decoded_VkDeviceGroupPresentCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupPresentCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentMask", toStringFlags, tabCount, tabSize, ArrayToString(VK_MAX_DEVICE_GROUP_SIZE, obj.presentMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "modes", toStringFlags, tabCount, tabSize, ToString(obj.modes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupPresentInfoKHR>(const decode::Decoded_VkDeviceGroupPresentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupPresentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", toStringFlags, tabCount, tabSize, ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceMasks", toStringFlags, tabCount, tabSize, ArrayToString(obj.swapchainCount, obj.pDeviceMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupSwapchainCreateInfoKHR>(const decode::Decoded_VkDeviceGroupSwapchainCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupSwapchainCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "modes", toStringFlags, tabCount, tabSize, ToString(obj.modes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModeParametersKHR>(const decode::Decoded_VkDisplayModeParametersKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModeParametersKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "visibleRegion", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.visibleRegion), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "refreshRate", toStringFlags, tabCount, tabSize, ToString(obj.refreshRate, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModeCreateInfoKHR>(const decode::Decoded_VkDisplayModeCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModeCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "parameters", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.parameters), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModePropertiesKHR>(const decode::Decoded_VkDisplayModePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "displayMode", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.displayMode));
            FieldToString(strStrm, false, "parameters", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.parameters), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneCapabilitiesKHR>(const decode::Decoded_VkDisplayPlaneCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "supportedAlpha", toStringFlags, tabCount, tabSize, ToString(obj.supportedAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSrcPosition", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minSrcPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSrcPosition", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxSrcPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSrcExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minSrcExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSrcExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxSrcExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDstPosition", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minDstPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDstPosition", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxDstPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDstExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minDstExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDstExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxDstExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlanePropertiesKHR>(const decode::Decoded_VkDisplayPlanePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlanePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "currentDisplay", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.currentDisplay));
            FieldToString(strStrm, false, "currentStackIndex", toStringFlags, tabCount, tabSize, ToString(obj.currentStackIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPropertiesKHR>(const decode::Decoded_VkDisplayPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "display", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.display));
            FieldToString(strStrm, false, "displayName", toStringFlags, tabCount, tabSize, (obj.displayName ? ("\"" + std::string(obj.displayName) + "\"") : "null"));
            FieldToString(strStrm, false, "physicalDimensions", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.physicalDimensions), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalResolution", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.physicalResolution), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", toStringFlags, tabCount, tabSize, ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeReorderPossible", toStringFlags, tabCount, tabSize, ToString(obj.planeReorderPossible, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "persistentContent", toStringFlags, tabCount, tabSize, ToString(obj.persistentContent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplaySurfaceCreateInfoKHR>(const decode::Decoded_VkDisplaySurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplaySurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayMode", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.displayMode));
            FieldToString(strStrm, false, "planeIndex", toStringFlags, tabCount, tabSize, ToString(obj.planeIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeStackIndex", toStringFlags, tabCount, tabSize, ToString(obj.planeStackIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "globalAlpha", toStringFlags, tabCount, tabSize, ToString(obj.globalAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alphaMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.alphaMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPresentInfoKHR>(const decode::Decoded_VkDisplayPresentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPresentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcRect", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.srcRect), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstRect", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dstRect), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "persistent", toStringFlags, tabCount, tabSize, ToString(obj.persistent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkXlibSurfaceCreateInfoKHR>(const decode::Decoded_VkXlibSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkXlibSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dpy", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.dpy));
            FieldToString(strStrm, false, "window", toStringFlags, tabCount, tabSize, ToString(obj.window, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkXcbSurfaceCreateInfoKHR>(const decode::Decoded_VkXcbSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkXcbSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "connection", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.connection));
            FieldToString(strStrm, false, "window", toStringFlags, tabCount, tabSize, ToString(obj.window, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWaylandSurfaceCreateInfoKHR>(const decode::Decoded_VkWaylandSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWaylandSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "display", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.display));
            FieldToString(strStrm, false, "surface", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.surface));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidSurfaceCreateInfoKHR>(const decode::Decoded_VkAndroidSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.window));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWin32SurfaceCreateInfoKHR>(const decode::Decoded_VkWin32SurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWin32SurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hinstance", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.hinstance));
            FieldToString(strStrm, false, "hwnd", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.hwnd));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingFragmentShadingRateAttachmentInfoKHR>(const decode::Decoded_VkRenderingFragmentShadingRateAttachmentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingFragmentShadingRateAttachmentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "imageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shadingRateAttachmentTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.shadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingFragmentDensityMapAttachmentInfoEXT>(const decode::Decoded_VkRenderingFragmentDensityMapAttachmentInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingFragmentDensityMapAttachmentInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "imageLayout", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentSampleCountInfoAMD>(const decode::Decoded_VkAttachmentSampleCountInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentSampleCountInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentSamples", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthStencilAttachmentSamples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.depthStencilAttachmentSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultiviewPerViewAttributesInfoNVX>(const decode::Decoded_VkMultiviewPerViewAttributesInfoNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultiviewPerViewAttributesInfoNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewAttributes", toStringFlags, tabCount, tabSize, ToString(obj.perViewAttributes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewAttributesPositionXOnly", toStringFlags, tabCount, tabSize, ToString(obj.perViewAttributesPositionXOnly, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryWin32HandleInfoKHR>(const decode::Decoded_VkImportMemoryWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.handle));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryWin32HandleInfoKHR>(const decode::Decoded_VkExportMemoryWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", toStringFlags, tabCount, tabSize, ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", toStringFlags, tabCount, tabSize, ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryWin32HandlePropertiesKHR>(const decode::Decoded_VkMemoryWin32HandlePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryWin32HandlePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetWin32HandleInfoKHR>(const decode::Decoded_VkMemoryGetWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryFdInfoKHR>(const decode::Decoded_VkImportMemoryFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", toStringFlags, tabCount, tabSize, ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryFdPropertiesKHR>(const decode::Decoded_VkMemoryFdPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryFdPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetFdInfoKHR>(const decode::Decoded_VkMemoryGetFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR>(const decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "acquireCount", toStringFlags, tabCount, tabSize, ToString(obj.acquireCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireSyncs", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pAcquireSyncs.GetLength(), &decoded_obj.pAcquireSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireKeys", toStringFlags, tabCount, tabSize, ArrayToString(obj.acquireCount, obj.pAcquireKeys, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireTimeouts", toStringFlags, tabCount, tabSize, ArrayToString(obj.acquireCount, obj.pAcquireTimeouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "releaseCount", toStringFlags, tabCount, tabSize, ToString(obj.releaseCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseSyncs", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pReleaseSyncs.GetLength(), &decoded_obj.pReleaseSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseKeys", toStringFlags, tabCount, tabSize, ArrayToString(obj.releaseCount, obj.pReleaseKeys, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportSemaphoreWin32HandleInfoKHR>(const decode::Decoded_VkImportSemaphoreWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportSemaphoreWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.handle));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportSemaphoreWin32HandleInfoKHR>(const decode::Decoded_VkExportSemaphoreWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportSemaphoreWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", toStringFlags, tabCount, tabSize, ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", toStringFlags, tabCount, tabSize, ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkD3D12FenceSubmitInfoKHR>(const decode::Decoded_VkD3D12FenceSubmitInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkD3D12FenceSubmitInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreValuesCount", toStringFlags, tabCount, tabSize, ToString(obj.waitSemaphoreValuesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreValues", toStringFlags, tabCount, tabSize, ArrayToString(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreValuesCount", toStringFlags, tabCount, tabSize, ToString(obj.signalSemaphoreValuesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreValues", toStringFlags, tabCount, tabSize, ArrayToString(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreGetWin32HandleInfoKHR>(const decode::Decoded_VkSemaphoreGetWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreGetWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportSemaphoreFdInfoKHR>(const decode::Decoded_VkImportSemaphoreFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportSemaphoreFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", toStringFlags, tabCount, tabSize, ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreGetFdInfoKHR>(const decode::Decoded_VkSemaphoreGetFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreGetFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR>(const decode::Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePushDescriptorPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPushDescriptors", toStringFlags, tabCount, tabSize, ToString(obj.maxPushDescriptors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRectLayerKHR>(const decode::Decoded_VkRectLayerKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRectLayerKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.offset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layer", toStringFlags, tabCount, tabSize, ToString(obj.layer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentRegionKHR>(const decode::Decoded_VkPresentRegionKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentRegionKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "rectangleCount", toStringFlags, tabCount, tabSize, ToString(obj.rectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRectangles", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentRegionsKHR>(const decode::Decoded_VkPresentRegionsKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentRegionsKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", toStringFlags, tabCount, tabSize, ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSharedPresentSurfaceCapabilitiesKHR>(const decode::Decoded_VkSharedPresentSurfaceCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSharedPresentSurfaceCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharedPresentSupportedUsageFlags", toStringFlags, tabCount, tabSize, ToString(obj.sharedPresentSupportedUsageFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportFenceWin32HandleInfoKHR>(const decode::Decoded_VkImportFenceWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportFenceWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.handle));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportFenceWin32HandleInfoKHR>(const decode::Decoded_VkExportFenceWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportFenceWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", toStringFlags, tabCount, tabSize, ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", toStringFlags, tabCount, tabSize, ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFenceGetWin32HandleInfoKHR>(const decode::Decoded_VkFenceGetWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFenceGetWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportFenceFdInfoKHR>(const decode::Decoded_VkImportFenceFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportFenceFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", toStringFlags, tabCount, tabSize, ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFenceGetFdInfoKHR>(const decode::Decoded_VkFenceGetFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFenceGetFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePerformanceQueryFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePerformanceQueryFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCounterQueryPools", toStringFlags, tabCount, tabSize, ToString(obj.performanceCounterQueryPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCounterMultipleQueryPools", toStringFlags, tabCount, tabSize, ToString(obj.performanceCounterMultipleQueryPools, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePerformanceQueryPropertiesKHR>(const decode::Decoded_VkPhysicalDevicePerformanceQueryPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allowCommandBufferQueryCopies", toStringFlags, tabCount, tabSize, ToString(obj.allowCommandBufferQueryCopies, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceCounterKHR>(const decode::Decoded_VkPerformanceCounterKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceCounterKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "unit", toStringFlags, tabCount, tabSize, '"' + ToString(obj.unit, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "scope", toStringFlags, tabCount, tabSize, '"' + ToString(obj.scope, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storage", toStringFlags, tabCount, tabSize, '"' + ToString(obj.storage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "uuid", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.uuid) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceCounterDescriptionKHR>(const decode::Decoded_VkPerformanceCounterDescriptionKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceCounterDescriptionKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, '"' + std::string(obj.name) + '"');
            FieldToString(strStrm, false, "category", toStringFlags, tabCount, tabSize, '"' + std::string(obj.category) + '"');
            FieldToString(strStrm, false, "description", toStringFlags, tabCount, tabSize, '"' + std::string(obj.description) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueryPoolPerformanceCreateInfoKHR>(const decode::Decoded_VkQueryPoolPerformanceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueryPoolPerformanceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.counterIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.counterIndexCount, obj.pCounterIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAcquireProfilingLockInfoKHR>(const decode::Decoded_VkAcquireProfilingLockInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAcquireProfilingLockInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", toStringFlags, tabCount, tabSize, ToString(obj.timeout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceQuerySubmitInfoKHR>(const decode::Decoded_VkPerformanceQuerySubmitInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceQuerySubmitInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterPassIndex", toStringFlags, tabCount, tabSize, ToString(obj.counterPassIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSurfaceInfo2KHR>(const decode::Decoded_VkPhysicalDeviceSurfaceInfo2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSurfaceInfo2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.surface));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilities2KHR>(const decode::Decoded_VkSurfaceCapabilities2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilities2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceCapabilities", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.surfaceCapabilities), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFormat2KHR>(const decode::Decoded_VkSurfaceFormat2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFormat2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceFormat", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.surfaceFormat), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayProperties2KHR>(const decode::Decoded_VkDisplayProperties2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayProperties2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.displayProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneProperties2KHR>(const decode::Decoded_VkDisplayPlaneProperties2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneProperties2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPlaneProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.displayPlaneProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModeProperties2KHR>(const decode::Decoded_VkDisplayModeProperties2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModeProperties2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayModeProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.displayModeProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneInfo2KHR>(const decode::Decoded_VkDisplayPlaneInfo2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneInfo2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.mode));
            FieldToString(strStrm, false, "planeIndex", toStringFlags, tabCount, tabSize, ToString(obj.planeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneCapabilities2KHR>(const decode::Decoded_VkDisplayPlaneCapabilities2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneCapabilities2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "capabilities", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.capabilities), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePortabilitySubsetFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePortabilitySubsetFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePortabilitySubsetFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "constantAlphaColorBlendFactors", toStringFlags, tabCount, tabSize, ToString(obj.constantAlphaColorBlendFactors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "events", toStringFlags, tabCount, tabSize, ToString(obj.events, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewFormatReinterpretation", toStringFlags, tabCount, tabSize, ToString(obj.imageViewFormatReinterpretation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewFormatSwizzle", toStringFlags, tabCount, tabSize, ToString(obj.imageViewFormatSwizzle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView2DOn3DImage", toStringFlags, tabCount, tabSize, ToString(obj.imageView2DOn3DImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampleArrayImage", toStringFlags, tabCount, tabSize, ToString(obj.multisampleArrayImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableComparisonSamplers", toStringFlags, tabCount, tabSize, ToString(obj.mutableComparisonSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointPolygons", toStringFlags, tabCount, tabSize, ToString(obj.pointPolygons, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerMipLodBias", toStringFlags, tabCount, tabSize, ToString(obj.samplerMipLodBias, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateStencilMaskRef", toStringFlags, tabCount, tabSize, ToString(obj.separateStencilMaskRef, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampleRateInterpolationFunctions", toStringFlags, tabCount, tabSize, ToString(obj.shaderSampleRateInterpolationFunctions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tessellationIsolines", toStringFlags, tabCount, tabSize, ToString(obj.tessellationIsolines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tessellationPointMode", toStringFlags, tabCount, tabSize, ToString(obj.tessellationPointMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triangleFans", toStringFlags, tabCount, tabSize, ToString(obj.triangleFans, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeAccessBeyondStride", toStringFlags, tabCount, tabSize, ToString(obj.vertexAttributeAccessBeyondStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePortabilitySubsetPropertiesKHR>(const decode::Decoded_VkPhysicalDevicePortabilitySubsetPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePortabilitySubsetPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minVertexInputBindingStrideAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minVertexInputBindingStrideAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderClockFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceShaderClockFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderClockFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupClock", toStringFlags, tabCount, tabSize, ToString(obj.shaderSubgroupClock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDeviceClock", toStringFlags, tabCount, tabSize, ToString(obj.shaderDeviceClock, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceQueueGlobalPriorityCreateInfoKHR>(const decode::Decoded_VkDeviceQueueGlobalPriorityCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceQueueGlobalPriorityCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalPriority", toStringFlags, tabCount, tabSize, '"' + ToString(obj.globalPriority, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalPriorityQuery", toStringFlags, tabCount, tabSize, ToString(obj.globalPriorityQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyGlobalPriorityPropertiesKHR>(const decode::Decoded_VkQueueFamilyGlobalPriorityPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyGlobalPriorityPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priorityCount", toStringFlags, tabCount, tabSize, ToString(obj.priorityCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priorities", toStringFlags, tabCount, tabSize, ArrayToString(VK_MAX_GLOBAL_PRIORITY_SIZE_KHR, obj.priorities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFragmentShadingRateAttachmentInfoKHR>(const decode::Decoded_VkFragmentShadingRateAttachmentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFragmentShadingRateAttachmentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentShadingRateAttachment", toStringFlags, tabCount, tabSize, ((decoded_obj.pFragmentShadingRateAttachment && decoded_obj.pFragmentShadingRateAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pFragmentShadingRateAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "shadingRateAttachmentTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.shadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineFragmentShadingRateStateCreateInfoKHR>(const decode::Decoded_VkPipelineFragmentShadingRateStateCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineFragmentShadingRateStateCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.fragmentSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinerOps", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineFragmentShadingRate", toStringFlags, tabCount, tabSize, ToString(obj.pipelineFragmentShadingRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRate", toStringFlags, tabCount, tabSize, ToString(obj.primitiveFragmentShadingRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentFragmentShadingRate", toStringFlags, tabCount, tabSize, ToString(obj.attachmentFragmentShadingRate, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRatePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRatePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minFragmentShadingRateAttachmentTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minFragmentShadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateAttachmentTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxFragmentShadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateAttachmentTexelSizeAspectRatio", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentShadingRateAttachmentTexelSizeAspectRatio, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRateWithMultipleViewports", toStringFlags, tabCount, tabSize, ToString(obj.primitiveFragmentShadingRateWithMultipleViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layeredShadingRateAttachments", toStringFlags, tabCount, tabSize, ToString(obj.layeredShadingRateAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateNonTrivialCombinerOps", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateNonTrivialCombinerOps, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxFragmentSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentSizeAspectRatio", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentSizeAspectRatio, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateCoverageSamples", toStringFlags, tabCount, tabSize, ToString(obj.maxFragmentShadingRateCoverageSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateRasterizationSamples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.maxFragmentShadingRateRasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fragmentShadingRateWithShaderDepthStencilWrites", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateWithShaderDepthStencilWrites, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithSampleMask", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateWithSampleMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithShaderSampleMask", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateWithShaderSampleMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithConservativeRasterization", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateWithConservativeRasterization, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithFragmentShaderInterlock", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateWithFragmentShaderInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithCustomSampleLocations", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateWithCustomSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateStrictMultiplyCombiner", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateStrictMultiplyCombiner, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.fragmentSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceProtectedCapabilitiesKHR>(const decode::Decoded_VkSurfaceProtectedCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceProtectedCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportsProtected", toStringFlags, tabCount, tabSize, ToString(obj.supportsProtected, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePresentWaitFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePresentWaitFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePresentWaitFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentWait", toStringFlags, tabCount, tabSize, ToString(obj.presentWait, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineExecutableInfo", toStringFlags, tabCount, tabSize, ToString(obj.pipelineExecutableInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineInfoKHR>(const decode::Decoded_VkPipelineInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipeline", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.pipeline));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineExecutablePropertiesKHR>(const decode::Decoded_VkPipelineExecutablePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineExecutablePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stages", toStringFlags, tabCount, tabSize, ToString(obj.stages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, '"' + std::string(obj.name) + '"');
            FieldToString(strStrm, false, "description", toStringFlags, tabCount, tabSize, '"' + std::string(obj.description) + '"');
            FieldToString(strStrm, false, "subgroupSize", toStringFlags, tabCount, tabSize, ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineExecutableInfoKHR>(const decode::Decoded_VkPipelineExecutableInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineExecutableInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipeline", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.pipeline));
            FieldToString(strStrm, false, "executableIndex", toStringFlags, tabCount, tabSize, ToString(obj.executableIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineExecutableInternalRepresentationKHR>(const decode::Decoded_VkPipelineExecutableInternalRepresentationKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineExecutableInternalRepresentationKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", toStringFlags, tabCount, tabSize, '"' + std::string(obj.name) + '"');
            FieldToString(strStrm, false, "description", toStringFlags, tabCount, tabSize, '"' + std::string(obj.description) + '"');
            FieldToString(strStrm, false, "isText", toStringFlags, tabCount, tabSize, ToString(obj.isText, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", toStringFlags, tabCount, tabSize, ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineLibraryCreateInfoKHR>(const decode::Decoded_VkPipelineLibraryCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineLibraryCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "libraryCount", toStringFlags, tabCount, tabSize, ToString(obj.libraryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLibraries", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pLibraries.GetLength(), &decoded_obj.pLibraries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentIdKHR>(const decode::Decoded_VkPresentIdKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentIdKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", toStringFlags, tabCount, tabSize, ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentIds", toStringFlags, tabCount, tabSize, ArrayToString(obj.swapchainCount, obj.pPresentIds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePresentIdFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePresentIdFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePresentIdFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentId", toStringFlags, tabCount, tabSize, ToString(obj.presentId, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyCheckpointProperties2NV>(const decode::Decoded_VkQueueFamilyCheckpointProperties2NV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyCheckpointProperties2NV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "checkpointExecutionStageMask", toStringFlags, tabCount, tabSize, ToString(obj.checkpointExecutionStageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCheckpointData2NV>(const decode::Decoded_VkCheckpointData2NV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCheckpointData2NV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", toStringFlags, tabCount, tabSize, ToString(obj.stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCheckpointMarker", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pCheckpointMarker));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderBarycentric", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShaderBarycentric, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triStripVertexOrderIndependentOfProvokingVertex", toStringFlags, tabCount, tabSize, ToString(obj.triStripVertexOrderIndependentOfProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupUniformControlFlow", toStringFlags, tabCount, tabSize, ToString(obj.shaderSubgroupUniformControlFlow, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout", toStringFlags, tabCount, tabSize, ToString(obj.workgroupMemoryExplicitLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayoutScalarBlockLayout", toStringFlags, tabCount, tabSize, ToString(obj.workgroupMemoryExplicitLayoutScalarBlockLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout8BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.workgroupMemoryExplicitLayout8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout16BitAccess", toStringFlags, tabCount, tabSize, ToString(obj.workgroupMemoryExplicitLayout16BitAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR>(const decode::Decoded_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMaintenance1", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingMaintenance1, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineTraceRaysIndirect2", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingPipelineTraceRaysIndirect2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTraceRaysIndirectCommand2KHR>(const decode::Decoded_VkTraceRaysIndirectCommand2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTraceRaysIndirectCommand2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "raygenShaderRecordAddress", toStringFlags, tabCount, tabSize, ToString(obj.raygenShaderRecordAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "raygenShaderRecordSize", toStringFlags, tabCount, tabSize, ToString(obj.raygenShaderRecordSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableAddress", toStringFlags, tabCount, tabSize, ToString(obj.missShaderBindingTableAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableSize", toStringFlags, tabCount, tabSize, ToString(obj.missShaderBindingTableSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableStride", toStringFlags, tabCount, tabSize, ToString(obj.missShaderBindingTableStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableAddress", toStringFlags, tabCount, tabSize, ToString(obj.hitShaderBindingTableAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableSize", toStringFlags, tabCount, tabSize, ToString(obj.hitShaderBindingTableSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableStride", toStringFlags, tabCount, tabSize, ToString(obj.hitShaderBindingTableStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableAddress", toStringFlags, tabCount, tabSize, ToString(obj.callableShaderBindingTableAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableSize", toStringFlags, tabCount, tabSize, ToString(obj.callableShaderBindingTableSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableStride", toStringFlags, tabCount, tabSize, ToString(obj.callableShaderBindingTableStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", toStringFlags, tabCount, tabSize, ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugReportCallbackCreateInfoEXT>(const decode::Decoded_VkDebugReportCallbackCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugReportCallbackCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnCallback", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnCallback));
            FieldToString(strStrm, false, "pUserData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationStateRasterizationOrderAMD>(const decode::Decoded_VkPipelineRasterizationStateRasterizationOrderAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationStateRasterizationOrderAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrder", toStringFlags, tabCount, tabSize, '"' + ToString(obj.rasterizationOrder, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugMarkerObjectNameInfoEXT>(const decode::Decoded_VkDebugMarkerObjectNameInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugMarkerObjectNameInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", toStringFlags, tabCount, tabSize, ToString(obj.object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjectName", toStringFlags, tabCount, tabSize, (obj.pObjectName ? ("\"" + std::string(obj.pObjectName) + "\"") : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugMarkerObjectTagInfoEXT>(const decode::Decoded_VkDebugMarkerObjectTagInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugMarkerObjectTagInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", toStringFlags, tabCount, tabSize, ToString(obj.object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagName", toStringFlags, tabCount, tabSize, ToString(obj.tagName, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagSize", toStringFlags, tabCount, tabSize, ToString(obj.tagSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTag", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pTag));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugMarkerMarkerInfoEXT>(const decode::Decoded_VkDebugMarkerMarkerInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugMarkerMarkerInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMarkerName", toStringFlags, tabCount, tabSize, (obj.pMarkerName ? ("\"" + std::string(obj.pMarkerName) + "\"") : "null"));
            FieldToString(strStrm, false, "color", toStringFlags, tabCount, tabSize, ArrayToString(4, obj.color, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDedicatedAllocationImageCreateInfoNV>(const decode::Decoded_VkDedicatedAllocationImageCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDedicatedAllocationImageCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocation", toStringFlags, tabCount, tabSize, ToString(obj.dedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDedicatedAllocationBufferCreateInfoNV>(const decode::Decoded_VkDedicatedAllocationBufferCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDedicatedAllocationBufferCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocation", toStringFlags, tabCount, tabSize, ToString(obj.dedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDedicatedAllocationMemoryAllocateInfoNV>(const decode::Decoded_VkDedicatedAllocationMemoryAllocateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDedicatedAllocationMemoryAllocateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedback", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedback, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryStreams", toStringFlags, tabCount, tabSize, ToString(obj.geometryStreams, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackStreams", toStringFlags, tabCount, tabSize, ToString(obj.maxTransformFeedbackStreams, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBuffers", toStringFlags, tabCount, tabSize, ToString(obj.maxTransformFeedbackBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBufferSize", toStringFlags, tabCount, tabSize, ToString(obj.maxTransformFeedbackBufferSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackStreamDataSize", toStringFlags, tabCount, tabSize, ToString(obj.maxTransformFeedbackStreamDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBufferDataSize", toStringFlags, tabCount, tabSize, ToString(obj.maxTransformFeedbackBufferDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBufferDataStride", toStringFlags, tabCount, tabSize, ToString(obj.maxTransformFeedbackBufferDataStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackQueries", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedbackQueries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackStreamsLinesTriangles", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedbackStreamsLinesTriangles, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackRasterizationStreamSelect", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedbackRasterizationStreamSelect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackDraw", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedbackDraw, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationStateStreamCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationStream", toStringFlags, tabCount, tabSize, ToString(obj.rasterizationStream, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewHandleInfoNVX>(const decode::Decoded_VkImageViewHandleInfoNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewHandleInfoNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "descriptorType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampler", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.sampler));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewAddressPropertiesNVX>(const decode::Decoded_VkImageViewAddressPropertiesNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewAddressPropertiesNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTextureLODGatherFormatPropertiesAMD>(const decode::Decoded_VkTextureLODGatherFormatPropertiesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTextureLODGatherFormatPropertiesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportsTextureGatherLODBiasAMD", toStringFlags, tabCount, tabSize, ToString(obj.supportsTextureGatherLODBiasAMD, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderResourceUsageAMD>(const decode::Decoded_VkShaderResourceUsageAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderResourceUsageAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "numUsedVgprs", toStringFlags, tabCount, tabSize, ToString(obj.numUsedVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numUsedSgprs", toStringFlags, tabCount, tabSize, ToString(obj.numUsedSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ldsSizePerLocalWorkGroup", toStringFlags, tabCount, tabSize, ToString(obj.ldsSizePerLocalWorkGroup, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ldsUsageSizeInBytes", toStringFlags, tabCount, tabSize, ToString(obj.ldsUsageSizeInBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scratchMemUsageInBytes", toStringFlags, tabCount, tabSize, ToString(obj.scratchMemUsageInBytes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderStatisticsInfoAMD>(const decode::Decoded_VkShaderStatisticsInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderStatisticsInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shaderStageMask", toStringFlags, tabCount, tabSize, ToString(obj.shaderStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "resourceUsage", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.resourceUsage), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhysicalVgprs", toStringFlags, tabCount, tabSize, ToString(obj.numPhysicalVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhysicalSgprs", toStringFlags, tabCount, tabSize, ToString(obj.numPhysicalSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numAvailableVgprs", toStringFlags, tabCount, tabSize, ToString(obj.numAvailableVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numAvailableSgprs", toStringFlags, tabCount, tabSize, ToString(obj.numAvailableSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeWorkGroupSize", toStringFlags, tabCount, tabSize, ArrayToString(3, obj.computeWorkGroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>(const decode::Decoded_VkStreamDescriptorSurfaceCreateInfoGGP& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkStreamDescriptorSurfaceCreateInfoGGP& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "streamDescriptor", toStringFlags, tabCount, tabSize, ToString(obj.streamDescriptor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV>(const decode::Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cornerSampledImage", toStringFlags, tabCount, tabSize, ToString(obj.cornerSampledImage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalImageFormatPropertiesNV>(const decode::Decoded_VkExternalImageFormatPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalImageFormatPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "imageFormatProperties", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageFormatProperties), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryFeatures", toStringFlags, tabCount, tabSize, ToString(obj.externalMemoryFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", toStringFlags, tabCount, tabSize, ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryImageCreateInfoNV>(const decode::Decoded_VkExternalMemoryImageCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryImageCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryAllocateInfoNV>(const decode::Decoded_VkExportMemoryAllocateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryAllocateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", toStringFlags, tabCount, tabSize, ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryWin32HandleInfoNV>(const decode::Decoded_VkImportMemoryWin32HandleInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryWin32HandleInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, ToString(obj.handleType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handle", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.handle));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryWin32HandleInfoNV>(const decode::Decoded_VkExportMemoryWin32HandleInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryWin32HandleInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", toStringFlags, tabCount, tabSize, ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", toStringFlags, tabCount, tabSize, ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV>(const decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWin32KeyedMutexAcquireReleaseInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "acquireCount", toStringFlags, tabCount, tabSize, ToString(obj.acquireCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireSyncs", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pAcquireSyncs.GetLength(), &decoded_obj.pAcquireSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireKeys", toStringFlags, tabCount, tabSize, ArrayToString(obj.acquireCount, obj.pAcquireKeys, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireTimeoutMilliseconds", toStringFlags, tabCount, tabSize, ArrayToString(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "releaseCount", toStringFlags, tabCount, tabSize, ToString(obj.releaseCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseSyncs", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pReleaseSyncs.GetLength(), &decoded_obj.pReleaseSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseKeys", toStringFlags, tabCount, tabSize, ArrayToString(obj.releaseCount, obj.pReleaseKeys, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkValidationFlagsEXT>(const decode::Decoded_VkValidationFlagsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkValidationFlagsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disabledValidationCheckCount", toStringFlags, tabCount, tabSize, ToString(obj.disabledValidationCheckCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisabledValidationChecks", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViSurfaceCreateInfoNN>(const decode::Decoded_VkViSurfaceCreateInfoNN& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViSurfaceCreateInfoNN& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.window));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewASTCDecodeModeEXT>(const decode::Decoded_VkImageViewASTCDecodeModeEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewASTCDecodeModeEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "decodeMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.decodeMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "decodeModeSharedExponent", toStringFlags, tabCount, tabSize, ToString(obj.decodeModeSharedExponent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineRobustnessFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePipelineRobustnessFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineRobustnessFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineRobustness", toStringFlags, tabCount, tabSize, ToString(obj.pipelineRobustness, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineRobustnessPropertiesEXT>(const decode::Decoded_VkPhysicalDevicePipelineRobustnessPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineRobustnessPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "defaultRobustnessStorageBuffers", toStringFlags, tabCount, tabSize, '"' + ToString(obj.defaultRobustnessStorageBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessUniformBuffers", toStringFlags, tabCount, tabSize, '"' + ToString(obj.defaultRobustnessUniformBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessVertexInputs", toStringFlags, tabCount, tabSize, '"' + ToString(obj.defaultRobustnessVertexInputs, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessImages", toStringFlags, tabCount, tabSize, '"' + ToString(obj.defaultRobustnessImages, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRobustnessCreateInfoEXT>(const decode::Decoded_VkPipelineRobustnessCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRobustnessCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffers", toStringFlags, tabCount, tabSize, '"' + ToString(obj.storageBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "uniformBuffers", toStringFlags, tabCount, tabSize, '"' + ToString(obj.uniformBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vertexInputs", toStringFlags, tabCount, tabSize, '"' + ToString(obj.vertexInputs, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "images", toStringFlags, tabCount, tabSize, '"' + ToString(obj.images, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkConditionalRenderingBeginInfoEXT>(const decode::Decoded_VkConditionalRenderingBeginInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkConditionalRenderingBeginInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conditionalRendering", toStringFlags, tabCount, tabSize, ToString(obj.conditionalRendering, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedConditionalRendering", toStringFlags, tabCount, tabSize, ToString(obj.inheritedConditionalRendering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const decode::Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conditionalRenderingEnable", toStringFlags, tabCount, tabSize, ToString(obj.conditionalRenderingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViewportWScalingNV>(const decode::Decoded_VkViewportWScalingNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViewportWScalingNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "xcoeff", toStringFlags, tabCount, tabSize, ToString(obj.xcoeff, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycoeff", toStringFlags, tabCount, tabSize, ToString(obj.ycoeff, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportWScalingStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportWScalingStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportWScalingStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportWScalingEnable", toStringFlags, tabCount, tabSize, ToString(obj.viewportWScalingEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", toStringFlags, tabCount, tabSize, ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportWScalings", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pViewportWScalings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilities2EXT>(const decode::Decoded_VkSurfaceCapabilities2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilities2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageCount", toStringFlags, tabCount, tabSize, ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageCount", toStringFlags, tabCount, tabSize, ToString(obj.maxImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.currentExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageExtent", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", toStringFlags, tabCount, tabSize, ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentTransform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.currentTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "supportedCompositeAlpha", toStringFlags, tabCount, tabSize, ToString(obj.supportedCompositeAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedUsageFlags", toStringFlags, tabCount, tabSize, ToString(obj.supportedUsageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedSurfaceCounters", toStringFlags, tabCount, tabSize, ToString(obj.supportedSurfaceCounters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPowerInfoEXT>(const decode::Decoded_VkDisplayPowerInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPowerInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "powerState", toStringFlags, tabCount, tabSize, '"' + ToString(obj.powerState, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceEventInfoEXT>(const decode::Decoded_VkDeviceEventInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceEventInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceEvent", toStringFlags, tabCount, tabSize, '"' + ToString(obj.deviceEvent, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayEventInfoEXT>(const decode::Decoded_VkDisplayEventInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayEventInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayEvent", toStringFlags, tabCount, tabSize, '"' + ToString(obj.displayEvent, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainCounterCreateInfoEXT>(const decode::Decoded_VkSwapchainCounterCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainCounterCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceCounters", toStringFlags, tabCount, tabSize, ToString(obj.surfaceCounters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRefreshCycleDurationGOOGLE>(const decode::Decoded_VkRefreshCycleDurationGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRefreshCycleDurationGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "refreshDuration", toStringFlags, tabCount, tabSize, ToString(obj.refreshDuration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPastPresentationTimingGOOGLE>(const decode::Decoded_VkPastPresentationTimingGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPastPresentationTimingGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "presentID", toStringFlags, tabCount, tabSize, ToString(obj.presentID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "desiredPresentTime", toStringFlags, tabCount, tabSize, ToString(obj.desiredPresentTime, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "actualPresentTime", toStringFlags, tabCount, tabSize, ToString(obj.actualPresentTime, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "earliestPresentTime", toStringFlags, tabCount, tabSize, ToString(obj.earliestPresentTime, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentMargin", toStringFlags, tabCount, tabSize, ToString(obj.presentMargin, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentTimeGOOGLE>(const decode::Decoded_VkPresentTimeGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentTimeGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "presentID", toStringFlags, tabCount, tabSize, ToString(obj.presentID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "desiredPresentTime", toStringFlags, tabCount, tabSize, ToString(obj.desiredPresentTime, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentTimesInfoGOOGLE>(const decode::Decoded_VkPresentTimesInfoGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentTimesInfoGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", toStringFlags, tabCount, tabSize, ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTimes", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pTimes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const decode::Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewPositionAllComponents", toStringFlags, tabCount, tabSize, ToString(obj.perViewPositionAllComponents, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViewportSwizzleNV>(const decode::Decoded_VkViewportSwizzleNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViewportSwizzleNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, '"' + ToString(obj.x, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, '"' + ToString(obj.y, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "z", toStringFlags, tabCount, tabSize, '"' + ToString(obj.z, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "w", toStringFlags, tabCount, tabSize, '"' + ToString(obj.w, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportSwizzleStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportSwizzleStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportSwizzleStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", toStringFlags, tabCount, tabSize, ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportSwizzles", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pViewportSwizzles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const decode::Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDiscardRectangles", toStringFlags, tabCount, tabSize, ToString(obj.maxDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT>(const decode::Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineDiscardRectangleStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discardRectangleMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.discardRectangleMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "discardRectangleCount", toStringFlags, tabCount, tabSize, ToString(obj.discardRectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDiscardRectangles", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveOverestimationSize", toStringFlags, tabCount, tabSize, ToString(obj.primitiveOverestimationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxExtraPrimitiveOverestimationSize", toStringFlags, tabCount, tabSize, ToString(obj.maxExtraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extraPrimitiveOverestimationSizeGranularity", toStringFlags, tabCount, tabSize, ToString(obj.extraPrimitiveOverestimationSizeGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveUnderestimation", toStringFlags, tabCount, tabSize, ToString(obj.primitiveUnderestimation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativePointAndLineRasterization", toStringFlags, tabCount, tabSize, ToString(obj.conservativePointAndLineRasterization, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "degenerateTrianglesRasterized", toStringFlags, tabCount, tabSize, ToString(obj.degenerateTrianglesRasterized, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "degenerateLinesRasterized", toStringFlags, tabCount, tabSize, ToString(obj.degenerateLinesRasterized, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullyCoveredFragmentShaderInputVariable", toStringFlags, tabCount, tabSize, ToString(obj.fullyCoveredFragmentShaderInputVariable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativeRasterizationPostDepthCoverage", toStringFlags, tabCount, tabSize, ToString(obj.conservativeRasterizationPostDepthCoverage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativeRasterizationMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.conservativeRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "extraPrimitiveOverestimationSize", toStringFlags, tabCount, tabSize, ToString(obj.extraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipEnable", toStringFlags, tabCount, tabSize, ToString(obj.depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkXYColorEXT>(const decode::Decoded_VkXYColorEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkXYColorEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkHdrMetadataEXT>(const decode::Decoded_VkHdrMetadataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkHdrMetadataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryRed", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.displayPrimaryRed), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryGreen", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.displayPrimaryGreen), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryBlue", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.displayPrimaryBlue), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "whitePoint", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.whitePoint), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxLuminance", toStringFlags, tabCount, tabSize, ToString(obj.maxLuminance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLuminance", toStringFlags, tabCount, tabSize, ToString(obj.minLuminance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxContentLightLevel", toStringFlags, tabCount, tabSize, ToString(obj.maxContentLightLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFrameAverageLightLevel", toStringFlags, tabCount, tabSize, ToString(obj.maxFrameAverageLightLevel, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIOSSurfaceCreateInfoMVK>(const decode::Decoded_VkIOSSurfaceCreateInfoMVK& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIOSSurfaceCreateInfoMVK& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pView));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMacOSSurfaceCreateInfoMVK>(const decode::Decoded_VkMacOSSurfaceCreateInfoMVK& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMacOSSurfaceCreateInfoMVK& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pView));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsLabelEXT>(const decode::Decoded_VkDebugUtilsLabelEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsLabelEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLabelName", toStringFlags, tabCount, tabSize, (obj.pLabelName ? ("\"" + std::string(obj.pLabelName) + "\"") : "null"));
            FieldToString(strStrm, false, "color", toStringFlags, tabCount, tabSize, ArrayToString(4, obj.color, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsObjectNameInfoEXT>(const decode::Decoded_VkDebugUtilsObjectNameInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsObjectNameInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", toStringFlags, tabCount, tabSize, ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjectName", toStringFlags, tabCount, tabSize, (obj.pObjectName ? ("\"" + std::string(obj.pObjectName) + "\"") : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsMessengerCallbackDataEXT>(const decode::Decoded_VkDebugUtilsMessengerCallbackDataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsMessengerCallbackDataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessageIdName", toStringFlags, tabCount, tabSize, (obj.pMessageIdName ? ("\"" + std::string(obj.pMessageIdName) + "\"") : "null"));
            FieldToString(strStrm, false, "messageIdNumber", toStringFlags, tabCount, tabSize, ToString(obj.messageIdNumber, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessage", toStringFlags, tabCount, tabSize, (obj.pMessage ? ("\"" + std::string(obj.pMessage) + "\"") : "null"));
            FieldToString(strStrm, false, "queueLabelCount", toStringFlags, tabCount, tabSize, ToString(obj.queueLabelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueLabels", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pQueueLabels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cmdBufLabelCount", toStringFlags, tabCount, tabSize, ToString(obj.cmdBufLabelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCmdBufLabels", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pCmdBufLabels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectCount", toStringFlags, tabCount, tabSize, ToString(obj.objectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjects", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pObjects, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsMessengerCreateInfoEXT>(const decode::Decoded_VkDebugUtilsMessengerCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsMessengerCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageSeverity", toStringFlags, tabCount, tabSize, ToString(obj.messageSeverity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageType", toStringFlags, tabCount, tabSize, ToString(obj.messageType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnUserCallback", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnUserCallback));
            FieldToString(strStrm, false, "pUserData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsObjectTagInfoEXT>(const decode::Decoded_VkDebugUtilsObjectTagInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsObjectTagInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", toStringFlags, tabCount, tabSize, ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagName", toStringFlags, tabCount, tabSize, ToString(obj.tagName, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagSize", toStringFlags, tabCount, tabSize, ToString(obj.tagSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTag", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pTag));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferUsageANDROID>(const decode::Decoded_VkAndroidHardwareBufferUsageANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferUsageANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "androidHardwareBufferUsage", toStringFlags, tabCount, tabSize, ToString(obj.androidHardwareBufferUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferPropertiesANDROID>(const decode::Decoded_VkAndroidHardwareBufferPropertiesANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferPropertiesANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allocationSize", toStringFlags, tabCount, tabSize, ToString(obj.allocationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID>(const decode::Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferFormatPropertiesANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "externalFormat", toStringFlags, tabCount, tabSize, ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatFeatures", toStringFlags, tabCount, tabSize, ToString(obj.formatFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversionComponents", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.samplerYcbcrConversionComponents), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "suggestedYcbcrModel", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedYcbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYcbcrRange", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedYcbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedXChromaOffset", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedXChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYChromaOffset", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedYChromaOffset, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportAndroidHardwareBufferInfoANDROID>(const decode::Decoded_VkImportAndroidHardwareBufferInfoANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportAndroidHardwareBufferInfoANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>(const decode::Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalFormatANDROID>(const decode::Decoded_VkExternalFormatANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalFormatANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalFormat", toStringFlags, tabCount, tabSize, ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferFormatProperties2ANDROID>(const decode::Decoded_VkAndroidHardwareBufferFormatProperties2ANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferFormatProperties2ANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "externalFormat", toStringFlags, tabCount, tabSize, ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatFeatures", toStringFlags, tabCount, tabSize, ToString(obj.formatFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversionComponents", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.samplerYcbcrConversionComponents), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "suggestedYcbcrModel", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedYcbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYcbcrRange", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedYcbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedXChromaOffset", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedXChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYChromaOffset", toStringFlags, tabCount, tabSize, '"' + ToString(obj.suggestedYChromaOffset, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSampleLocationEXT>(const decode::Decoded_VkSampleLocationEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSampleLocationEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", toStringFlags, tabCount, tabSize, ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", toStringFlags, tabCount, tabSize, ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSampleLocationsInfoEXT>(const decode::Decoded_VkSampleLocationsInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSampleLocationsInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsPerPixel", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sampleLocationsPerPixel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampleLocationGridSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.sampleLocationGridSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsCount", toStringFlags, tabCount, tabSize, ToString(obj.sampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampleLocations", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentSampleLocationsEXT>(const decode::Decoded_VkAttachmentSampleLocationsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentSampleLocationsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "attachmentIndex", toStringFlags, tabCount, tabSize, ToString(obj.attachmentIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.sampleLocationsInfo), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassSampleLocationsEXT>(const decode::Decoded_VkSubpassSampleLocationsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassSampleLocationsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpassIndex", toStringFlags, tabCount, tabSize, ToString(obj.subpassIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.sampleLocationsInfo), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassSampleLocationsBeginInfoEXT>(const decode::Decoded_VkRenderPassSampleLocationsBeginInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassSampleLocationsBeginInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentInitialSampleLocationsCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentInitialSampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachmentInitialSampleLocations", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pAttachmentInitialSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "postSubpassSampleLocationsCount", toStringFlags, tabCount, tabSize, ToString(obj.postSubpassSampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPostSubpassSampleLocations", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pPostSubpassSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineSampleLocationsStateCreateInfoEXT>(const decode::Decoded_VkPipelineSampleLocationsStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineSampleLocationsStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsEnable", toStringFlags, tabCount, tabSize, ToString(obj.sampleLocationsEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.sampleLocationsInfo), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationSampleCounts", toStringFlags, tabCount, tabSize, ToString(obj.sampleLocationSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleLocationGridSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxSampleLocationGridSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationCoordinateRange", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.sampleLocationCoordinateRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationSubPixelBits", toStringFlags, tabCount, tabSize, ToString(obj.sampleLocationSubPixelBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variableSampleLocations", toStringFlags, tabCount, tabSize, ToString(obj.variableSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultisamplePropertiesEXT>(const decode::Decoded_VkMultisamplePropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultisamplePropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleLocationGridSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxSampleLocationGridSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendCoherentOperations", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendCoherentOperations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendMaxColorAttachments", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendMaxColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendIndependentBlend", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendIndependentBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendNonPremultipliedSrcColor", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendNonPremultipliedSrcColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendNonPremultipliedDstColor", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendNonPremultipliedDstColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendCorrelatedOverlap", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendCorrelatedOverlap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendAllOperations", toStringFlags, tabCount, tabSize, ToString(obj.advancedBlendAllOperations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const decode::Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcPremultiplied", toStringFlags, tabCount, tabSize, ToString(obj.srcPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstPremultiplied", toStringFlags, tabCount, tabSize, ToString(obj.dstPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendOverlap", toStringFlags, tabCount, tabSize, '"' + ToString(obj.blendOverlap, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCoverageToColorStateCreateInfoNV>(const decode::Decoded_VkPipelineCoverageToColorStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCoverageToColorStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageToColorEnable", toStringFlags, tabCount, tabSize, ToString(obj.coverageToColorEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageToColorLocation", toStringFlags, tabCount, tabSize, ToString(obj.coverageToColorLocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCoverageModulationStateCreateInfoNV>(const decode::Decoded_VkPipelineCoverageModulationStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCoverageModulationStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageModulationMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.coverageModulationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "coverageModulationTableEnable", toStringFlags, tabCount, tabSize, ToString(obj.coverageModulationTableEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageModulationTableCount", toStringFlags, tabCount, tabSize, ToString(obj.coverageModulationTableCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCoverageModulationTable", toStringFlags, tabCount, tabSize, ArrayToString(obj.coverageModulationTableCount, obj.pCoverageModulationTable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSMCount", toStringFlags, tabCount, tabSize, ToString(obj.shaderSMCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderWarpsPerSM", toStringFlags, tabCount, tabSize, ToString(obj.shaderWarpsPerSM, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSMBuiltins", toStringFlags, tabCount, tabSize, ToString(obj.shaderSMBuiltins, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierPropertiesEXT>(const decode::Decoded_VkDrmFormatModifierPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "drmFormatModifier", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierTilingFeatures", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierTilingFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierPropertiesListEXT>(const decode::Decoded_VkDrmFormatModifierPropertiesListEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierPropertiesListEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifierProperties", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDrmFormatModifierProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const decode::Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageDrmFormatModifierListCreateInfoEXT>(const decode::Decoded_VkImageDrmFormatModifierListCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageDrmFormatModifierListCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifiers", toStringFlags, tabCount, tabSize, ArrayToString(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT>(const decode::Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPlaneLayouts", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pPlaneLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageDrmFormatModifierPropertiesEXT>(const decode::Decoded_VkImageDrmFormatModifierPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageDrmFormatModifierPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierProperties2EXT>(const decode::Decoded_VkDrmFormatModifierProperties2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierProperties2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "drmFormatModifier", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierTilingFeatures", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierTilingFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierPropertiesList2EXT>(const decode::Decoded_VkDrmFormatModifierPropertiesList2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierPropertiesList2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", toStringFlags, tabCount, tabSize, ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifierProperties", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pDrmFormatModifierProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkValidationCacheCreateInfoEXT>(const decode::Decoded_VkValidationCacheCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkValidationCacheCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialDataSize", toStringFlags, tabCount, tabSize, ToString(obj.initialDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInitialData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pInitialData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderModuleValidationCacheCreateInfoEXT>(const decode::Decoded_VkShaderModuleValidationCacheCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderModuleValidationCacheCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "validationCache", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.validationCache));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShadingRatePaletteNV>(const decode::Decoded_VkShadingRatePaletteNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShadingRatePaletteNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shadingRatePaletteEntryCount", toStringFlags, tabCount, tabSize, ToString(obj.shadingRatePaletteEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePaletteEntries", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateImageEnable", toStringFlags, tabCount, tabSize, ToString(obj.shadingRateImageEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", toStringFlags, tabCount, tabSize, ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePalettes", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pShadingRatePalettes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV>(const decode::Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShadingRateImageFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateImage", toStringFlags, tabCount, tabSize, ToString(obj.shadingRateImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateCoarseSampleOrder", toStringFlags, tabCount, tabSize, ToString(obj.shadingRateCoarseSampleOrder, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV>(const decode::Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShadingRateImagePropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.shadingRateTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRatePaletteSize", toStringFlags, tabCount, tabSize, ToString(obj.shadingRatePaletteSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateMaxCoarseSamples", toStringFlags, tabCount, tabSize, ToString(obj.shadingRateMaxCoarseSamples, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCoarseSampleLocationNV>(const decode::Decoded_VkCoarseSampleLocationNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCoarseSampleLocationNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pixelX", toStringFlags, tabCount, tabSize, ToString(obj.pixelX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pixelY", toStringFlags, tabCount, tabSize, ToString(obj.pixelY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sample", toStringFlags, tabCount, tabSize, ToString(obj.sample, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCoarseSampleOrderCustomNV>(const decode::Decoded_VkCoarseSampleOrderCustomNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCoarseSampleOrderCustomNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shadingRate", toStringFlags, tabCount, tabSize, '"' + ToString(obj.shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampleCount", toStringFlags, tabCount, tabSize, ToString(obj.sampleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationCount", toStringFlags, tabCount, tabSize, ToString(obj.sampleLocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampleLocations", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleOrderType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sampleOrderType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "customSampleOrderCount", toStringFlags, tabCount, tabSize, ToString(obj.customSampleOrderCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCustomSampleOrders", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pCustomSampleOrders, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingShaderGroupCreateInfoNV>(const decode::Decoded_VkRayTracingShaderGroupCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingShaderGroupCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "generalShader", toStringFlags, tabCount, tabSize, ToString(obj.generalShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "closestHitShader", toStringFlags, tabCount, tabSize, ToString(obj.closestHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anyHitShader", toStringFlags, tabCount, tabSize, ToString(obj.anyHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "intersectionShader", toStringFlags, tabCount, tabSize, ToString(obj.intersectionShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingPipelineCreateInfoNV>(const decode::Decoded_VkRayTracingPipelineCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingPipelineCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", toStringFlags, tabCount, tabSize, ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", toStringFlags, tabCount, tabSize, ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRecursionDepth", toStringFlags, tabCount, tabSize, ToString(obj.maxRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "basePipelineHandle", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", toStringFlags, tabCount, tabSize, ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryTrianglesNV>(const decode::Decoded_VkGeometryTrianglesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryTrianglesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexData", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.vertexData));
            FieldToString(strStrm, false, "vertexOffset", toStringFlags, tabCount, tabSize, ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexCount", toStringFlags, tabCount, tabSize, ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", toStringFlags, tabCount, tabSize, ToString(obj.vertexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.vertexFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexData", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.indexData));
            FieldToString(strStrm, false, "indexOffset", toStringFlags, tabCount, tabSize, ToString(obj.indexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexCount", toStringFlags, tabCount, tabSize, ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "transformData", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.transformData));
            FieldToString(strStrm, false, "transformOffset", toStringFlags, tabCount, tabSize, ToString(obj.transformOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryAABBNV>(const decode::Decoded_VkGeometryAABBNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryAABBNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aabbData", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.aabbData));
            FieldToString(strStrm, false, "numAABBs", toStringFlags, tabCount, tabSize, ToString(obj.numAABBs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryDataNV>(const decode::Decoded_VkGeometryDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "triangles", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.triangles), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aabbs", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.aabbs), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryNV>(const decode::Decoded_VkGeometryNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.geometryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "geometry", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.geometry), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureInfoNV>(const decode::Decoded_VkAccelerationStructureInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", toStringFlags, tabCount, tabSize, ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryCount", toStringFlags, tabCount, tabSize, ToString(obj.geometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGeometries", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pGeometries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureCreateInfoNV>(const decode::Decoded_VkAccelerationStructureCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compactedSize", toStringFlags, tabCount, tabSize, ToString(obj.compactedSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "info", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.info), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindAccelerationStructureMemoryInfoNV>(const decode::Decoded_VkBindAccelerationStructureMemoryInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindAccelerationStructureMemoryInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.accelerationStructure));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", toStringFlags, tabCount, tabSize, ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", toStringFlags, tabCount, tabSize, ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", toStringFlags, tabCount, tabSize, ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWriteDescriptorSetAccelerationStructureNV>(const decode::Decoded_VkWriteDescriptorSetAccelerationStructureNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWriteDescriptorSetAccelerationStructureNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCount", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pAccelerationStructures.GetLength(), &decoded_obj.pAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>(const decode::Decoded_VkAccelerationStructureMemoryRequirementsInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureMemoryRequirementsInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "accelerationStructure", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.accelerationStructure));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingPropertiesNV>(const decode::Decoded_VkPhysicalDeviceRayTracingPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleSize", toStringFlags, tabCount, tabSize, ToString(obj.shaderGroupHandleSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRecursionDepth", toStringFlags, tabCount, tabSize, ToString(obj.maxRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxShaderGroupStride", toStringFlags, tabCount, tabSize, ToString(obj.maxShaderGroupStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupBaseAlignment", toStringFlags, tabCount, tabSize, ToString(obj.shaderGroupBaseAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryCount", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstanceCount", toStringFlags, tabCount, tabSize, ToString(obj.maxInstanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTriangleCount", toStringFlags, tabCount, tabSize, ToString(obj.maxTriangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetAccelerationStructures", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAabbPositionsKHR>(const decode::Decoded_VkAabbPositionsKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAabbPositionsKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "minX", toStringFlags, tabCount, tabSize, ToString(obj.minX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minY", toStringFlags, tabCount, tabSize, ToString(obj.minY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minZ", toStringFlags, tabCount, tabSize, ToString(obj.minZ, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxX", toStringFlags, tabCount, tabSize, ToString(obj.maxX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxY", toStringFlags, tabCount, tabSize, ToString(obj.maxY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxZ", toStringFlags, tabCount, tabSize, ToString(obj.maxZ, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureInstanceKHR>(const decode::Decoded_VkAccelerationStructureInstanceKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureInstanceKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transform", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.transform), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", toStringFlags, tabCount, tabSize, ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", toStringFlags, tabCount, tabSize, ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", toStringFlags, tabCount, tabSize, ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const decode::Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "representativeFragmentTest", toStringFlags, tabCount, tabSize, ToString(obj.representativeFragmentTest, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const decode::Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "representativeFragmentTestEnable", toStringFlags, tabCount, tabSize, ToString(obj.representativeFragmentTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT>(const decode::Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.imageViewType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT>(const decode::Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFilterCubicImageViewImageFormatPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCubic", toStringFlags, tabCount, tabSize, ToString(obj.filterCubic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCubicMinmax", toStringFlags, tabCount, tabSize, ToString(obj.filterCubicMinmax, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryHostPointerInfoEXT>(const decode::Decoded_VkImportMemoryHostPointerInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryHostPointerInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pHostPointer", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pHostPointer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryHostPointerPropertiesEXT>(const decode::Decoded_VkMemoryHostPointerPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryHostPointerPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImportedHostPointerAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minImportedHostPointerAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCompilerControlCreateInfoAMD>(const decode::Decoded_VkPipelineCompilerControlCreateInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCompilerControlCreateInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compilerControlFlags", toStringFlags, tabCount, tabSize, ToString(obj.compilerControlFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCalibratedTimestampInfoEXT>(const decode::Decoded_VkCalibratedTimestampInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCalibratedTimestampInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeDomain", toStringFlags, tabCount, tabSize, '"' + ToString(obj.timeDomain, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderCorePropertiesAMD>(const decode::Decoded_VkPhysicalDeviceShaderCorePropertiesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderCorePropertiesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderEngineCount", toStringFlags, tabCount, tabSize, ToString(obj.shaderEngineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderArraysPerEngineCount", toStringFlags, tabCount, tabSize, ToString(obj.shaderArraysPerEngineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeUnitsPerShaderArray", toStringFlags, tabCount, tabSize, ToString(obj.computeUnitsPerShaderArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "simdPerComputeUnit", toStringFlags, tabCount, tabSize, ToString(obj.simdPerComputeUnit, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "wavefrontsPerSimd", toStringFlags, tabCount, tabSize, ToString(obj.wavefrontsPerSimd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "wavefrontSize", toStringFlags, tabCount, tabSize, ToString(obj.wavefrontSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sgprsPerSimd", toStringFlags, tabCount, tabSize, ToString(obj.sgprsPerSimd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSgprAllocation", toStringFlags, tabCount, tabSize, ToString(obj.minSgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSgprAllocation", toStringFlags, tabCount, tabSize, ToString(obj.maxSgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sgprAllocationGranularity", toStringFlags, tabCount, tabSize, ToString(obj.sgprAllocationGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vgprsPerSimd", toStringFlags, tabCount, tabSize, ToString(obj.vgprsPerSimd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minVgprAllocation", toStringFlags, tabCount, tabSize, ToString(obj.minVgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVgprAllocation", toStringFlags, tabCount, tabSize, ToString(obj.maxVgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vgprAllocationGranularity", toStringFlags, tabCount, tabSize, ToString(obj.vgprAllocationGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceMemoryOverallocationCreateInfoAMD>(const decode::Decoded_VkDeviceMemoryOverallocationCreateInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceMemoryOverallocationCreateInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "overallocationBehavior", toStringFlags, tabCount, tabSize, '"' + ToString(obj.overallocationBehavior, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexAttribDivisor", toStringFlags, tabCount, tabSize, ToString(obj.maxVertexAttribDivisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputBindingDivisorDescriptionEXT>(const decode::Decoded_VkVertexInputBindingDivisorDescriptionEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputBindingDivisorDescriptionEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "divisor", toStringFlags, tabCount, tabSize, ToString(obj.divisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT>(const decode::Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingDivisorCount", toStringFlags, tabCount, tabSize, ToString(obj.vertexBindingDivisorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDivisors", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pVertexBindingDivisors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeInstanceRateDivisor", toStringFlags, tabCount, tabSize, ToString(obj.vertexAttributeInstanceRateDivisor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeInstanceRateZeroDivisor", toStringFlags, tabCount, tabSize, ToString(obj.vertexAttributeInstanceRateZeroDivisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentFrameTokenGGP>(const decode::Decoded_VkPresentFrameTokenGGP& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentFrameTokenGGP& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "frameToken", toStringFlags, tabCount, tabSize, ToString(obj.frameToken, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const decode::Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeDerivativeGroupQuads", toStringFlags, tabCount, tabSize, ToString(obj.computeDerivativeGroupQuads, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeDerivativeGroupLinear", toStringFlags, tabCount, tabSize, ToString(obj.computeDerivativeGroupLinear, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMeshShaderFeaturesNV>(const decode::Decoded_VkPhysicalDeviceMeshShaderFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMeshShaderFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "taskShader", toStringFlags, tabCount, tabSize, ToString(obj.taskShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShader", toStringFlags, tabCount, tabSize, ToString(obj.meshShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMeshShaderPropertiesNV>(const decode::Decoded_VkPhysicalDeviceMeshShaderPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMeshShaderPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawMeshTasksCount", toStringFlags, tabCount, tabSize, ToString(obj.maxDrawMeshTasksCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupInvocations", toStringFlags, tabCount, tabSize, ToString(obj.maxTaskWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupSize", toStringFlags, tabCount, tabSize, ArrayToString(3, obj.maxTaskWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskTotalMemorySize", toStringFlags, tabCount, tabSize, ToString(obj.maxTaskTotalMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskOutputCount", toStringFlags, tabCount, tabSize, ToString(obj.maxTaskOutputCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupInvocations", toStringFlags, tabCount, tabSize, ToString(obj.maxMeshWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupSize", toStringFlags, tabCount, tabSize, ArrayToString(3, obj.maxMeshWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshTotalMemorySize", toStringFlags, tabCount, tabSize, ToString(obj.maxMeshTotalMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputVertices", toStringFlags, tabCount, tabSize, ToString(obj.maxMeshOutputVertices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputPrimitives", toStringFlags, tabCount, tabSize, ToString(obj.maxMeshOutputPrimitives, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshMultiviewViewCount", toStringFlags, tabCount, tabSize, ToString(obj.maxMeshMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshOutputPerVertexGranularity", toStringFlags, tabCount, tabSize, ToString(obj.meshOutputPerVertexGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshOutputPerPrimitiveGranularity", toStringFlags, tabCount, tabSize, ToString(obj.meshOutputPerPrimitiveGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawMeshTasksIndirectCommandNV>(const decode::Decoded_VkDrawMeshTasksIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawMeshTasksIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "taskCount", toStringFlags, tabCount, tabSize, ToString(obj.taskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstTask", toStringFlags, tabCount, tabSize, ToString(obj.firstTask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const decode::Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFootprint", toStringFlags, tabCount, tabSize, ToString(obj.imageFootprint, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissorCount", toStringFlags, tabCount, tabSize, ToString(obj.exclusiveScissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExclusiveScissors", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pExclusiveScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV>(const decode::Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissor", toStringFlags, tabCount, tabSize, ToString(obj.exclusiveScissor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyCheckpointPropertiesNV>(const decode::Decoded_VkQueueFamilyCheckpointPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyCheckpointPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "checkpointExecutionStageMask", toStringFlags, tabCount, tabSize, ToString(obj.checkpointExecutionStageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCheckpointDataNV>(const decode::Decoded_VkCheckpointDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCheckpointDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", toStringFlags, tabCount, tabSize, '"' + ToString(obj.stage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pCheckpointMarker", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pCheckpointMarker));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const decode::Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerFunctions2", toStringFlags, tabCount, tabSize, ToString(obj.shaderIntegerFunctions2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkInitializePerformanceApiInfoINTEL>(const decode::Decoded_VkInitializePerformanceApiInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkInitializePerformanceApiInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUserData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueryPoolPerformanceQueryCreateInfoINTEL>(const decode::Decoded_VkQueryPoolPerformanceQueryCreateInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCountersSampling", toStringFlags, tabCount, tabSize, '"' + ToString(obj.performanceCountersSampling, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceMarkerInfoINTEL>(const decode::Decoded_VkPerformanceMarkerInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceMarkerInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", toStringFlags, tabCount, tabSize, ToString(obj.marker, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceStreamMarkerInfoINTEL>(const decode::Decoded_VkPerformanceStreamMarkerInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceStreamMarkerInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", toStringFlags, tabCount, tabSize, ToString(obj.marker, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceOverrideInfoINTEL>(const decode::Decoded_VkPerformanceOverrideInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceOverrideInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "enable", toStringFlags, tabCount, tabSize, ToString(obj.enable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "parameter", toStringFlags, tabCount, tabSize, ToString(obj.parameter, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceConfigurationAcquireInfoINTEL>(const decode::Decoded_VkPerformanceConfigurationAcquireInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceConfigurationAcquireInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT>(const decode::Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciDomain", toStringFlags, tabCount, tabSize, ToString(obj.pciDomain, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciBus", toStringFlags, tabCount, tabSize, ToString(obj.pciBus, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciDevice", toStringFlags, tabCount, tabSize, ToString(obj.pciDevice, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciFunction", toStringFlags, tabCount, tabSize, ToString(obj.pciFunction, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const decode::Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDimmingSupport", toStringFlags, tabCount, tabSize, ToString(obj.localDimmingSupport, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD>(const decode::Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDimmingEnable", toStringFlags, tabCount, tabSize, ToString(obj.localDimmingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>(const decode::Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImagePipeSurfaceCreateInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagePipeHandle", toStringFlags, tabCount, tabSize, ToString(obj.imagePipeHandle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMetalSurfaceCreateInfoEXT>(const decode::Decoded_VkMetalSurfaceCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMetalSurfaceCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLayer", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pLayer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMap", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityMap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapDynamic", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityMapDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapNonSubsampledImages", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityMapNonSubsampledImages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minFragmentDensityTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.minFragmentDensityTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentDensityTexelSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxFragmentDensityTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityInvocations", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityInvocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT>(const decode::Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassFragmentDensityMapCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapAttachment", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.fragmentDensityMapAttachment), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderCoreProperties2AMD>(const decode::Decoded_VkPhysicalDeviceShaderCoreProperties2AMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderCoreProperties2AMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreFeatures", toStringFlags, tabCount, tabSize, ToString(obj.shaderCoreFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "activeComputeUnitCount", toStringFlags, tabCount, tabSize, ToString(obj.activeComputeUnitCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const decode::Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceCoherentMemory", toStringFlags, tabCount, tabSize, ToString(obj.deviceCoherentMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageInt64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderImageInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageInt64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.sparseImageInt64Atomics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapBudget", toStringFlags, tabCount, tabSize, ArrayToString(VK_MAX_MEMORY_HEAPS, obj.heapBudget, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapUsage", toStringFlags, tabCount, tabSize, ArrayToString(VK_MAX_MEMORY_HEAPS, obj.heapUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryPriority", toStringFlags, tabCount, tabSize, ToString(obj.memoryPriority, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryPriorityAllocateInfoEXT>(const decode::Decoded_VkMemoryPriorityAllocateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryPriorityAllocateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priority", toStringFlags, tabCount, tabSize, ToString(obj.priority, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const decode::Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocationImageAliasing", toStringFlags, tabCount, tabSize, ToString(obj.dedicatedAllocationImageAliasing, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", toStringFlags, tabCount, tabSize, ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferDeviceAddressCreateInfoEXT>(const decode::Decoded_VkBufferDeviceAddressCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferDeviceAddressCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkValidationFeaturesEXT>(const decode::Decoded_VkValidationFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkValidationFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledValidationFeatureCount", toStringFlags, tabCount, tabSize, ToString(obj.enabledValidationFeatureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEnabledValidationFeatures", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disabledValidationFeatureCount", toStringFlags, tabCount, tabSize, ToString(obj.disabledValidationFeatureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisabledValidationFeatures", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCooperativeMatrixPropertiesNV>(const decode::Decoded_VkCooperativeMatrixPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCooperativeMatrixPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "MSize", toStringFlags, tabCount, tabSize, ToString(obj.MSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "NSize", toStringFlags, tabCount, tabSize, ToString(obj.NSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "KSize", toStringFlags, tabCount, tabSize, ToString(obj.KSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "AType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.AType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "BType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.BType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "CType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.CType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "DType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.DType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "scope", toStringFlags, tabCount, tabSize, '"' + ToString(obj.scope, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const decode::Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrix", toStringFlags, tabCount, tabSize, ToString(obj.cooperativeMatrix, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrixRobustBufferAccess", toStringFlags, tabCount, tabSize, ToString(obj.cooperativeMatrixRobustBufferAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const decode::Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrixSupportedStages", toStringFlags, tabCount, tabSize, ToString(obj.cooperativeMatrixSupportedStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const decode::Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", toStringFlags, tabCount, tabSize, ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCoverageReductionStateCreateInfoNV>(const decode::Decoded_VkPipelineCoverageReductionStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCoverageReductionStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferMixedSamplesCombinationNV>(const decode::Decoded_VkFramebufferMixedSamplesCombinationNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferMixedSamplesCombinationNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "rasterizationSamples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthStencilSamples", toStringFlags, tabCount, tabSize, ToString(obj.depthStencilSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorSamples", toStringFlags, tabCount, tabSize, ToString(obj.colorSamples, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderSampleInterlock", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShaderSampleInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderPixelInterlock", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShaderPixelInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderShadingRateInterlock", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShaderShadingRateInterlock, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycbcrImageArrays", toStringFlags, tabCount, tabSize, ToString(obj.ycbcrImageArrays, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProvokingVertexFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceProvokingVertexFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProvokingVertexFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexLast", toStringFlags, tabCount, tabSize, ToString(obj.provokingVertexLast, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackPreservesProvokingVertex", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedbackPreservesProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProvokingVertexPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceProvokingVertexPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProvokingVertexPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexModePerPipeline", toStringFlags, tabCount, tabSize, ToString(obj.provokingVertexModePerPipeline, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackPreservesTriangleFanProvokingVertex", toStringFlags, tabCount, tabSize, ToString(obj.transformFeedbackPreservesTriangleFanProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.provokingVertexMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFullScreenExclusiveInfoEXT>(const decode::Decoded_VkSurfaceFullScreenExclusiveInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFullScreenExclusiveInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullScreenExclusive", toStringFlags, tabCount, tabSize, '"' + ToString(obj.fullScreenExclusive, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const decode::Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullScreenExclusiveSupported", toStringFlags, tabCount, tabSize, ToString(obj.fullScreenExclusiveSupported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT>(const decode::Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hmonitor", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.hmonitor));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkHeadlessSurfaceCreateInfoEXT>(const decode::Decoded_VkHeadlessSurfaceCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkHeadlessSurfaceCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rectangularLines", toStringFlags, tabCount, tabSize, ToString(obj.rectangularLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bresenhamLines", toStringFlags, tabCount, tabSize, ToString(obj.bresenhamLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "smoothLines", toStringFlags, tabCount, tabSize, ToString(obj.smoothLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledRectangularLines", toStringFlags, tabCount, tabSize, ToString(obj.stippledRectangularLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledBresenhamLines", toStringFlags, tabCount, tabSize, ToString(obj.stippledBresenhamLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledSmoothLines", toStringFlags, tabCount, tabSize, ToString(obj.stippledSmoothLines, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineSubPixelPrecisionBits", toStringFlags, tabCount, tabSize, ToString(obj.lineSubPixelPrecisionBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationLineStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationLineStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationLineStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineRasterizationMode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.lineRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stippledLineEnable", toStringFlags, tabCount, tabSize, ToString(obj.stippledLineEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStippleFactor", toStringFlags, tabCount, tabSize, ToString(obj.lineStippleFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStipplePattern", toStringFlags, tabCount, tabSize, ToString(obj.lineStipplePattern, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat32Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat32AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat64AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat64AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat32Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat32AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat64Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat64AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat64AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageFloat32Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderImageFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageFloat32AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderImageFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageFloat32Atomics", toStringFlags, tabCount, tabSize, ToString(obj.sparseImageFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageFloat32AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.sparseImageFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexTypeUint8", toStringFlags, tabCount, tabSize, ToString(obj.indexTypeUint8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState", toStringFlags, tabCount, tabSize, ToString(obj.extendedDynamicState, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat16Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat16Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat16AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat16AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat16AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat16AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat32AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat64AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderBufferFloat64AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat16Atomics", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat16Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat16AtomicAdd", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat16AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat16AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat16AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat32AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat64AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderSharedFloat64AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageFloat32AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.shaderImageFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageFloat32AtomicMinMax", toStringFlags, tabCount, tabSize, ToString(obj.sparseImageFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGraphicsShaderGroupCount", toStringFlags, tabCount, tabSize, ToString(obj.maxGraphicsShaderGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectSequenceCount", toStringFlags, tabCount, tabSize, ToString(obj.maxIndirectSequenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsTokenCount", toStringFlags, tabCount, tabSize, ToString(obj.maxIndirectCommandsTokenCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsStreamCount", toStringFlags, tabCount, tabSize, ToString(obj.maxIndirectCommandsStreamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsTokenOffset", toStringFlags, tabCount, tabSize, ToString(obj.maxIndirectCommandsTokenOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsStreamStride", toStringFlags, tabCount, tabSize, ToString(obj.maxIndirectCommandsStreamStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSequencesCountBufferOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minSequencesCountBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSequencesIndexBufferOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minSequencesIndexBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minIndirectCommandsBufferOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minIndirectCommandsBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceGeneratedCommands", toStringFlags, tabCount, tabSize, ToString(obj.deviceGeneratedCommands, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsShaderGroupCreateInfoNV>(const decode::Decoded_VkGraphicsShaderGroupCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsShaderGroupCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", toStringFlags, tabCount, tabSize, ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInputState", toStringFlags, tabCount, tabSize, ((decoded_obj.pVertexInputState && decoded_obj.pVertexInputState->GetMetaStructPointer()) ? ToString(*decoded_obj.pVertexInputState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pTessellationState", toStringFlags, tabCount, tabSize, ((decoded_obj.pTessellationState && decoded_obj.pTessellationState->GetMetaStructPointer()) ? ToString(*decoded_obj.pTessellationState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsPipelineShaderGroupsCreateInfoNV>(const decode::Decoded_VkGraphicsPipelineShaderGroupsCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", toStringFlags, tabCount, tabSize, ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCount", toStringFlags, tabCount, tabSize, ToString(obj.pipelineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pPipelines.GetLength(), &decoded_obj.pPipelines, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindShaderGroupIndirectCommandNV>(const decode::Decoded_VkBindShaderGroupIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindShaderGroupIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "groupIndex", toStringFlags, tabCount, tabSize, ToString(obj.groupIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindIndexBufferIndirectCommandNV>(const decode::Decoded_VkBindIndexBufferIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindIndexBufferIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferAddress", toStringFlags, tabCount, tabSize, ToString(obj.bufferAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindVertexBufferIndirectCommandNV>(const decode::Decoded_VkBindVertexBufferIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindVertexBufferIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferAddress", toStringFlags, tabCount, tabSize, ToString(obj.bufferAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSetStateFlagsIndirectCommandNV>(const decode::Decoded_VkSetStateFlagsIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSetStateFlagsIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "data", toStringFlags, tabCount, tabSize, ToString(obj.data, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIndirectCommandsStreamNV>(const decode::Decoded_VkIndirectCommandsStreamNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIndirectCommandsStreamNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIndirectCommandsLayoutTokenNV>(const decode::Decoded_VkIndirectCommandsLayoutTokenNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIndirectCommandsLayoutTokenNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tokenType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.tokenType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stream", toStringFlags, tabCount, tabSize, ToString(obj.stream, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingUnit", toStringFlags, tabCount, tabSize, ToString(obj.vertexBindingUnit, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexDynamicStride", toStringFlags, tabCount, tabSize, ToString(obj.vertexDynamicStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantPipelineLayout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.pushconstantPipelineLayout));
            FieldToString(strStrm, false, "pushconstantShaderStageFlags", toStringFlags, tabCount, tabSize, ToString(obj.pushconstantShaderStageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantOffset", toStringFlags, tabCount, tabSize, ToString(obj.pushconstantOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantSize", toStringFlags, tabCount, tabSize, ToString(obj.pushconstantSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indirectStateFlags", toStringFlags, tabCount, tabSize, ToString(obj.indirectStateFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexTypeCount", toStringFlags, tabCount, tabSize, ToString(obj.indexTypeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIndexTypes", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.indexTypeCount, obj.pIndexTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIndexTypeValues", toStringFlags, tabCount, tabSize, ArrayToString(obj.indexTypeCount, obj.pIndexTypeValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIndirectCommandsLayoutCreateInfoNV>(const decode::Decoded_VkIndirectCommandsLayoutCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIndirectCommandsLayoutCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tokenCount", toStringFlags, tabCount, tabSize, ToString(obj.tokenCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTokens", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pTokens, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "streamCount", toStringFlags, tabCount, tabSize, ToString(obj.streamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStreamStrides", toStringFlags, tabCount, tabSize, ArrayToString(obj.streamCount, obj.pStreamStrides, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeneratedCommandsInfoNV>(const decode::Decoded_VkGeneratedCommandsInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeneratedCommandsInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.pipeline));
            FieldToString(strStrm, false, "indirectCommandsLayout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.indirectCommandsLayout));
            FieldToString(strStrm, false, "streamCount", toStringFlags, tabCount, tabSize, ToString(obj.streamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStreams", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pStreams, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesCount", toStringFlags, tabCount, tabSize, ToString(obj.sequencesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preprocessBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.preprocessBuffer));
            FieldToString(strStrm, false, "preprocessOffset", toStringFlags, tabCount, tabSize, ToString(obj.preprocessOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preprocessSize", toStringFlags, tabCount, tabSize, ToString(obj.preprocessSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesCountBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.sequencesCountBuffer));
            FieldToString(strStrm, false, "sequencesCountOffset", toStringFlags, tabCount, tabSize, ToString(obj.sequencesCountOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesIndexBuffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.sequencesIndexBuffer));
            FieldToString(strStrm, false, "sequencesIndexOffset", toStringFlags, tabCount, tabSize, ToString(obj.sequencesIndexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV>(const decode::Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeneratedCommandsMemoryRequirementsInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", toStringFlags, tabCount, tabSize, '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.pipeline));
            FieldToString(strStrm, false, "indirectCommandsLayout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.indirectCommandsLayout));
            FieldToString(strStrm, false, "maxSequencesCount", toStringFlags, tabCount, tabSize, ToString(obj.maxSequencesCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInheritedViewportScissorFeaturesNV>(const decode::Decoded_VkPhysicalDeviceInheritedViewportScissorFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInheritedViewportScissorFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedViewportScissor2D", toStringFlags, tabCount, tabSize, ToString(obj.inheritedViewportScissor2D, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceViewportScissorInfoNV>(const decode::Decoded_VkCommandBufferInheritanceViewportScissorInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceViewportScissorInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportScissor2D", toStringFlags, tabCount, tabSize, ToString(obj.viewportScissor2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportDepthCount", toStringFlags, tabCount, tabSize, ToString(obj.viewportDepthCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportDepths", toStringFlags, tabCount, tabSize, ((decoded_obj.pViewportDepths && decoded_obj.pViewportDepths->GetMetaStructPointer()) ? ToString(*decoded_obj.pViewportDepths->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "texelBufferAlignment", toStringFlags, tabCount, tabSize, ToString(obj.texelBufferAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassTransformBeginInfoQCOM>(const decode::Decoded_VkRenderPassTransformBeginInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassTransformBeginInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const decode::Decoded_VkCommandBufferInheritanceRenderPassTransformInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "renderArea", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.renderArea), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMemoryReport", toStringFlags, tabCount, tabSize, ToString(obj.deviceMemoryReport, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceMemoryReportCallbackDataEXT>(const decode::Decoded_VkDeviceMemoryReportCallbackDataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceMemoryReportCallbackDataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "memoryObjectId", toStringFlags, tabCount, tabSize, ToString(obj.memoryObjectId, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", toStringFlags, tabCount, tabSize, ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapIndex", toStringFlags, tabCount, tabSize, ToString(obj.heapIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceDeviceMemoryReportCreateInfoEXT>(const decode::Decoded_VkDeviceDeviceMemoryReportCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceDeviceMemoryReportCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnUserCallback", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.pfnUserCallback));
            FieldToString(strStrm, false, "pUserData", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRobustness2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceRobustness2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRobustness2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccess2", toStringFlags, tabCount, tabSize, ToString(obj.robustBufferAccess2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess2", toStringFlags, tabCount, tabSize, ToString(obj.robustImageAccess2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nullDescriptor", toStringFlags, tabCount, tabSize, ToString(obj.nullDescriptor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRobustness2PropertiesEXT>(const decode::Decoded_VkPhysicalDeviceRobustness2PropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRobustness2PropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustStorageBufferAccessSizeAlignment", toStringFlags, tabCount, tabSize, ToString(obj.robustStorageBufferAccessSizeAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustUniformBufferAccessSizeAlignment", toStringFlags, tabCount, tabSize, ToString(obj.robustUniformBufferAccessSizeAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerCustomBorderColorCreateInfoEXT>(const decode::Decoded_VkSamplerCustomBorderColorCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerCustomBorderColorCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColor", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.customBorderColor), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceCustomBorderColorPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCustomBorderColorSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxCustomBorderColorSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceCustomBorderColorFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColors", toStringFlags, tabCount, tabSize, ToString(obj.customBorderColors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColorWithoutFormat", toStringFlags, tabCount, tabSize, ToString(obj.customBorderColorWithoutFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const decode::Decoded_VkPhysicalDeviceDiagnosticsConfigFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "diagnosticsConfig", toStringFlags, tabCount, tabSize, ToString(obj.diagnosticsConfig, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceDiagnosticsConfigCreateInfoNV>(const decode::Decoded_VkDeviceDiagnosticsConfigCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceDiagnosticsConfigCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibrary", toStringFlags, tabCount, tabSize, ToString(obj.graphicsPipelineLibrary, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibraryFastLinking", toStringFlags, tabCount, tabSize, ToString(obj.graphicsPipelineLibraryFastLinking, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibraryIndependentInterpolationDecoration", toStringFlags, tabCount, tabSize, ToString(obj.graphicsPipelineLibraryIndependentInterpolationDecoration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsPipelineLibraryCreateInfoEXT>(const decode::Decoded_VkGraphicsPipelineLibraryCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsPipelineLibraryCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD>(const decode::Decoded_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderEarlyAndLateFragmentTests", toStringFlags, tabCount, tabSize, ToString(obj.shaderEarlyAndLateFragmentTests, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateEnums", toStringFlags, tabCount, tabSize, ToString(obj.fragmentShadingRateEnums, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supersampleFragmentShadingRates", toStringFlags, tabCount, tabSize, ToString(obj.supersampleFragmentShadingRates, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "noInvocationFragmentShadingRates", toStringFlags, tabCount, tabSize, ToString(obj.noInvocationFragmentShadingRates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateInvocationCount", toStringFlags, tabCount, tabSize, '"' + ToString(obj.maxFragmentShadingRateInvocationCount, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineFragmentShadingRateEnumStateCreateInfoNV>(const decode::Decoded_VkPipelineFragmentShadingRateEnumStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineFragmentShadingRateEnumStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.shadingRateType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shadingRate", toStringFlags, tabCount, tabSize, '"' + ToString(obj.shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "combinerOps", toStringFlags, tabCount, tabSize, ArrayToString(2, obj.combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryMotionTrianglesDataNV>(const decode::Decoded_VkAccelerationStructureGeometryMotionTrianglesDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryMotionTrianglesDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexData", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.vertexData), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureMotionInfoNV>(const decode::Decoded_VkAccelerationStructureMotionInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureMotionInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstances", toStringFlags, tabCount, tabSize, ToString(obj.maxInstances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureMatrixMotionInstanceNV>(const decode::Decoded_VkAccelerationStructureMatrixMotionInstanceNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureMatrixMotionInstanceNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transformT0", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.transformT0), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformT1", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.transformT1), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", toStringFlags, tabCount, tabSize, ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", toStringFlags, tabCount, tabSize, ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", toStringFlags, tabCount, tabSize, ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSRTDataNV>(const decode::Decoded_VkSRTDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSRTDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sx", toStringFlags, tabCount, tabSize, ToString(obj.sx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "a", toStringFlags, tabCount, tabSize, ToString(obj.a, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "b", toStringFlags, tabCount, tabSize, ToString(obj.b, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pvx", toStringFlags, tabCount, tabSize, ToString(obj.pvx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sy", toStringFlags, tabCount, tabSize, ToString(obj.sy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "c", toStringFlags, tabCount, tabSize, ToString(obj.c, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pvy", toStringFlags, tabCount, tabSize, ToString(obj.pvy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sz", toStringFlags, tabCount, tabSize, ToString(obj.sz, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pvz", toStringFlags, tabCount, tabSize, ToString(obj.pvz, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qx", toStringFlags, tabCount, tabSize, ToString(obj.qx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qy", toStringFlags, tabCount, tabSize, ToString(obj.qy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qz", toStringFlags, tabCount, tabSize, ToString(obj.qz, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qw", toStringFlags, tabCount, tabSize, ToString(obj.qw, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tx", toStringFlags, tabCount, tabSize, ToString(obj.tx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ty", toStringFlags, tabCount, tabSize, ToString(obj.ty, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tz", toStringFlags, tabCount, tabSize, ToString(obj.tz, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureSRTMotionInstanceNV>(const decode::Decoded_VkAccelerationStructureSRTMotionInstanceNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureSRTMotionInstanceNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transformT0", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.transformT0), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformT1", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.transformT1), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", toStringFlags, tabCount, tabSize, ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", toStringFlags, tabCount, tabSize, ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", toStringFlags, tabCount, tabSize, ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>(const decode::Decoded_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMotionBlur", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingMotionBlur, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMotionBlurPipelineTraceRaysIndirect", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingMotionBlurPipelineTraceRaysIndirect, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycbcr2plane444Formats", toStringFlags, tabCount, tabSize, ToString(obj.ycbcr2plane444Formats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapDeferred", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityMapDeferred, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsampledLoads", toStringFlags, tabCount, tabSize, ToString(obj.subsampledLoads, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsampledCoarseReconstructionEarlyAccess", toStringFlags, tabCount, tabSize, ToString(obj.subsampledCoarseReconstructionEarlyAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubsampledArrayLayers", toStringFlags, tabCount, tabSize, ToString(obj.maxSubsampledArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSubsampledSamplers", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetSubsampledSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyCommandTransformInfoQCOM>(const decode::Decoded_VkCopyCommandTransformInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyCommandTransformInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", toStringFlags, tabCount, tabSize, '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageCompressionControlFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImageCompressionControlFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageCompressionControlFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionControl", toStringFlags, tabCount, tabSize, ToString(obj.imageCompressionControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCompressionControlEXT>(const decode::Decoded_VkImageCompressionControlEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCompressionControlEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compressionControlPlaneCount", toStringFlags, tabCount, tabSize, ToString(obj.compressionControlPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFixedRateFlags", toStringFlags, tabCount, tabSize, ArrayToString(obj.compressionControlPlaneCount, obj.pFixedRateFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubresourceLayout2EXT>(const decode::Decoded_VkSubresourceLayout2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubresourceLayout2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subresourceLayout", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.subresourceLayout), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresource2EXT>(const decode::Decoded_VkImageSubresource2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresource2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.imageSubresource), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCompressionPropertiesEXT>(const decode::Decoded_VkImageCompressionPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCompressionPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionFlags", toStringFlags, tabCount, tabSize, ToString(obj.imageCompressionFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionFixedRateFlags", toStringFlags, tabCount, tabSize, ToString(obj.imageCompressionFixedRateFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentFeedbackLoopLayout", toStringFlags, tabCount, tabSize, ToString(obj.attachmentFeedbackLoopLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevice4444FormatsFeaturesEXT>(const decode::Decoded_VkPhysicalDevice4444FormatsFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevice4444FormatsFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatA4R4G4B4", toStringFlags, tabCount, tabSize, ToString(obj.formatA4R4G4B4, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatA4B4G4R4", toStringFlags, tabCount, tabSize, ToString(obj.formatA4B4G4R4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM>(const decode::Decoded_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderColorAttachmentAccess", toStringFlags, tabCount, tabSize, ToString(obj.rasterizationOrderColorAttachmentAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderDepthAttachmentAccess", toStringFlags, tabCount, tabSize, ToString(obj.rasterizationOrderDepthAttachmentAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderStencilAttachmentAccess", toStringFlags, tabCount, tabSize, ToString(obj.rasterizationOrderStencilAttachmentAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatRgba10x6WithoutYCbCrSampler", toStringFlags, tabCount, tabSize, ToString(obj.formatRgba10x6WithoutYCbCrSampler, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDirectFBSurfaceCreateInfoEXT>(const decode::Decoded_VkDirectFBSurfaceCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDirectFBSurfaceCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dfb", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.dfb));
            FieldToString(strStrm, false, "surface", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.surface));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE>(const decode::Decoded_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableDescriptorType", toStringFlags, tabCount, tabSize, ToString(obj.mutableDescriptorType, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMutableDescriptorTypeListVALVE>(const decode::Decoded_VkMutableDescriptorTypeListVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMutableDescriptorTypeListVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "descriptorTypeCount", toStringFlags, tabCount, tabSize, ToString(obj.descriptorTypeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorTypes", toStringFlags, tabCount, tabSize, VkEnumArrayToString(obj.descriptorTypeCount, obj.pDescriptorTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMutableDescriptorTypeCreateInfoVALVE>(const decode::Decoded_VkMutableDescriptorTypeCreateInfoVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMutableDescriptorTypeCreateInfoVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableDescriptorTypeListCount", toStringFlags, tabCount, tabSize, ToString(obj.mutableDescriptorTypeListCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMutableDescriptorTypeLists", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pMutableDescriptorTypeLists, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexInputDynamicState", toStringFlags, tabCount, tabSize, ToString(obj.vertexInputDynamicState, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputBindingDescription2EXT>(const decode::Decoded_VkVertexInputBindingDescription2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputBindingDescription2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputRate", toStringFlags, tabCount, tabSize, '"' + ToString(obj.inputRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "divisor", toStringFlags, tabCount, tabSize, ToString(obj.divisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputAttributeDescription2EXT>(const decode::Decoded_VkVertexInputAttributeDescription2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputAttributeDescription2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "location", toStringFlags, tabCount, tabSize, ToString(obj.location, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", toStringFlags, tabCount, tabSize, '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDrmPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceDrmPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDrmPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hasPrimary", toStringFlags, tabCount, tabSize, ToString(obj.hasPrimary, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hasRender", toStringFlags, tabCount, tabSize, ToString(obj.hasRender, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primaryMajor", toStringFlags, tabCount, tabSize, ToString(obj.primaryMajor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primaryMinor", toStringFlags, tabCount, tabSize, ToString(obj.primaryMinor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderMajor", toStringFlags, tabCount, tabSize, ToString(obj.renderMajor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderMinor", toStringFlags, tabCount, tabSize, ToString(obj.renderMinor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthClipControlFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDepthClipControlFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthClipControlFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipControl", toStringFlags, tabCount, tabSize, ToString(obj.depthClipControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportDepthClipControlCreateInfoEXT>(const decode::Decoded_VkPipelineViewportDepthClipControlCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportDepthClipControlCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "negativeOneToOne", toStringFlags, tabCount, tabSize, ToString(obj.negativeOneToOne, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveTopologyListRestart", toStringFlags, tabCount, tabSize, ToString(obj.primitiveTopologyListRestart, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveTopologyPatchListRestart", toStringFlags, tabCount, tabSize, ToString(obj.primitiveTopologyPatchListRestart, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryZirconHandleInfoFUCHSIA>(const decode::Decoded_VkImportMemoryZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", toStringFlags, tabCount, tabSize, ToString(obj.handle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryZirconHandlePropertiesFUCHSIA>(const decode::Decoded_VkMemoryZirconHandlePropertiesFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryZirconHandlePropertiesFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", toStringFlags, tabCount, tabSize, ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetZirconHandleInfoFUCHSIA>(const decode::Decoded_VkMemoryGetZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA>(const decode::Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportSemaphoreZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "zirconHandle", toStringFlags, tabCount, tabSize, ToString(obj.zirconHandle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA>(const decode::Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreGetZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>(const decode::Decoded_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "invocationMask", toStringFlags, tabCount, tabSize, ToString(obj.invocationMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetRemoteAddressInfoNV>(const decode::Decoded_VkMemoryGetRemoteAddressInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetRemoteAddressInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>(const decode::Decoded_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryRDMA", toStringFlags, tabCount, tabSize, ToString(obj.externalMemoryRDMA, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampledRenderToSingleSampled", toStringFlags, tabCount, tabSize, ToString(obj.multisampledRenderToSingleSampled, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassResolvePerformanceQueryEXT>(const decode::Decoded_VkSubpassResolvePerformanceQueryEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassResolvePerformanceQueryEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimal", toStringFlags, tabCount, tabSize, ToString(obj.optimal, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultisampledRenderToSingleSampledInfoEXT>(const decode::Decoded_VkMultisampledRenderToSingleSampledInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultisampledRenderToSingleSampledInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampledRenderToSingleSampledEnable", toStringFlags, tabCount, tabSize, ToString(obj.multisampledRenderToSingleSampledEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationSamples", toStringFlags, tabCount, tabSize, '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2", toStringFlags, tabCount, tabSize, ToString(obj.extendedDynamicState2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2LogicOp", toStringFlags, tabCount, tabSize, ToString(obj.extendedDynamicState2LogicOp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2PatchControlPoints", toStringFlags, tabCount, tabSize, ToString(obj.extendedDynamicState2PatchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkScreenSurfaceCreateInfoQNX>(const decode::Decoded_VkScreenSurfaceCreateInfoQNX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkScreenSurfaceCreateInfoQNX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "context", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.context));
            FieldToString(strStrm, false, "window", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(decoded_obj.window));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceColorWriteEnableFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceColorWriteEnableFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceColorWriteEnableFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorWriteEnable", toStringFlags, tabCount, tabSize, ToString(obj.colorWriteEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorWriteCreateInfoEXT>(const decode::Decoded_VkPipelineColorWriteCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorWriteCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", toStringFlags, tabCount, tabSize, ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorWriteEnables", toStringFlags, tabCount, tabSize, ArrayToString(obj.attachmentCount, obj.pColorWriteEnables, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQuery", toStringFlags, tabCount, tabSize, ToString(obj.primitivesGeneratedQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQueryWithRasterizerDiscard", toStringFlags, tabCount, tabSize, ToString(obj.primitivesGeneratedQueryWithRasterizerDiscard, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQueryWithNonZeroStreams", toStringFlags, tabCount, tabSize, ToString(obj.primitivesGeneratedQueryWithNonZeroStreams, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageViewMinLodFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImageViewMinLodFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageViewMinLodFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLod", toStringFlags, tabCount, tabSize, ToString(obj.minLod, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewMinLodCreateInfoEXT>(const decode::Decoded_VkImageViewMinLodCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewMinLodCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLod", toStringFlags, tabCount, tabSize, ToString(obj.minLod, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiDrawFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMultiDrawFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiDrawFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiDraw", toStringFlags, tabCount, tabSize, ToString(obj.multiDraw, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiDrawPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceMultiDrawPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiDrawPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiDrawCount", toStringFlags, tabCount, tabSize, ToString(obj.maxMultiDrawCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultiDrawInfoEXT>(const decode::Decoded_VkMultiDrawInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultiDrawInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "firstVertex", toStringFlags, tabCount, tabSize, ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexCount", toStringFlags, tabCount, tabSize, ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultiDrawIndexedInfoEXT>(const decode::Decoded_VkMultiDrawIndexedInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultiDrawIndexedInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "firstIndex", toStringFlags, tabCount, tabSize, ToString(obj.firstIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexCount", toStringFlags, tabCount, tabSize, ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexOffset", toStringFlags, tabCount, tabSize, ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image2DViewOf3D", toStringFlags, tabCount, tabSize, ToString(obj.image2DViewOf3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampler2DViewOf3D", toStringFlags, tabCount, tabSize, ToString(obj.sampler2DViewOf3D, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColorSwizzle", toStringFlags, tabCount, tabSize, ToString(obj.borderColorSwizzle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColorSwizzleFromImage", toStringFlags, tabCount, tabSize, ToString(obj.borderColorSwizzleFromImage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerBorderColorComponentMappingCreateInfoEXT>(const decode::Decoded_VkSamplerBorderColorComponentMappingCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerBorderColorComponentMappingCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "components", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.components), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srgb", toStringFlags, tabCount, tabSize, ToString(obj.srgb, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pageableDeviceLocalMemory", toStringFlags, tabCount, tabSize, ToString(obj.pageableDeviceLocalMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE>(const decode::Decoded_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetHostMapping", toStringFlags, tabCount, tabSize, ToString(obj.descriptorSetHostMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetBindingReferenceVALVE>(const decode::Decoded_VkDescriptorSetBindingReferenceVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetBindingReferenceVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetLayout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.descriptorSetLayout));
            FieldToString(strStrm, false, "binding", toStringFlags, tabCount, tabSize, ToString(obj.binding, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE>(const decode::Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutHostMappingInfoVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorOffset", toStringFlags, tabCount, tabSize, ToString(obj.descriptorOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSize", toStringFlags, tabCount, tabSize, ToString(obj.descriptorSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nonSeamlessCubeMap", toStringFlags, tabCount, tabSize, ToString(obj.nonSeamlessCubeMap, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapOffset", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityMapOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityOffsetGranularity", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.fragmentDensityOffsetGranularity), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassFragmentDensityMapOffsetEndInfoQCOM>(const decode::Decoded_VkSubpassFragmentDensityMapOffsetEndInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassFragmentDensityMapOffsetEndInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityOffsetCount", toStringFlags, tabCount, tabSize, ToString(obj.fragmentDensityOffsetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentDensityOffsets", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pFragmentDensityOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLinearColorAttachmentFeaturesNV>(const decode::Decoded_VkPhysicalDeviceLinearColorAttachmentFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLinearColorAttachmentFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "linearColorAttachment", toStringFlags, tabCount, tabSize, ToString(obj.linearColorAttachment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionControlSwapchain", toStringFlags, tabCount, tabSize, ToString(obj.imageCompressionControlSwapchain, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewSampleWeightCreateInfoQCOM>(const decode::Decoded_VkImageViewSampleWeightCreateInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewSampleWeightCreateInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCenter", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.filterCenter), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.filterSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhases", toStringFlags, tabCount, tabSize, ToString(obj.numPhases, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageProcessingFeaturesQCOM>(const decode::Decoded_VkPhysicalDeviceImageProcessingFeaturesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageProcessingFeaturesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureSampleWeighted", toStringFlags, tabCount, tabSize, ToString(obj.textureSampleWeighted, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureBoxFilter", toStringFlags, tabCount, tabSize, ToString(obj.textureBoxFilter, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureBlockMatch", toStringFlags, tabCount, tabSize, ToString(obj.textureBlockMatch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageProcessingPropertiesQCOM>(const decode::Decoded_VkPhysicalDeviceImageProcessingPropertiesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageProcessingPropertiesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWeightFilterPhases", toStringFlags, tabCount, tabSize, ToString(obj.maxWeightFilterPhases, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWeightFilterDimension", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxWeightFilterDimension), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBlockMatchRegion", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxBlockMatchRegion), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBoxFilterBlockSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.maxBoxFilterBlockSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassMergeFeedback", toStringFlags, tabCount, tabSize, ToString(obj.subpassMergeFeedback, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreationControlEXT>(const decode::Decoded_VkRenderPassCreationControlEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreationControlEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disallowMerging", toStringFlags, tabCount, tabSize, ToString(obj.disallowMerging, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreationFeedbackInfoEXT>(const decode::Decoded_VkRenderPassCreationFeedbackInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreationFeedbackInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "postMergeSubpassCount", toStringFlags, tabCount, tabSize, ToString(obj.postMergeSubpassCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreationFeedbackCreateInfoEXT>(const decode::Decoded_VkRenderPassCreationFeedbackCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreationFeedbackCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRenderPassFeedback", toStringFlags, tabCount, tabSize, ((decoded_obj.pRenderPassFeedback && decoded_obj.pRenderPassFeedback->GetMetaStructPointer()) ? ToString(*decoded_obj.pRenderPassFeedback->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassSubpassFeedbackInfoEXT>(const decode::Decoded_VkRenderPassSubpassFeedbackInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassSubpassFeedbackInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpassMergeStatus", toStringFlags, tabCount, tabSize, '"' + ToString(obj.subpassMergeStatus, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "description", toStringFlags, tabCount, tabSize, '"' + std::string(obj.description) + '"');
            FieldToString(strStrm, false, "postMergeIndex", toStringFlags, tabCount, tabSize, ToString(obj.postMergeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassSubpassFeedbackCreateInfoEXT>(const decode::Decoded_VkRenderPassSubpassFeedbackCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassSubpassFeedbackCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassFeedback", toStringFlags, tabCount, tabSize, ((decoded_obj.pSubpassFeedback && decoded_obj.pSubpassFeedback->GetMetaStructPointer()) ? ToString(*decoded_obj.pSubpassFeedback->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderModuleIdentifier", toStringFlags, tabCount, tabSize, ToString(obj.shaderModuleIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderModuleIdentifierAlgorithmUUID", toStringFlags, tabCount, tabSize, '"' + UIDToString(VK_UUID_SIZE, obj.shaderModuleIdentifierAlgorithmUUID) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineShaderStageModuleIdentifierCreateInfoEXT>(const decode::Decoded_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineShaderStageModuleIdentifierCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifierSize", toStringFlags, tabCount, tabSize, ToString(obj.identifierSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIdentifier", toStringFlags, tabCount, tabSize, ArrayToString(obj.identifierSize, obj.pIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderModuleIdentifierEXT>(const decode::Decoded_VkShaderModuleIdentifierEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderModuleIdentifierEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifierSize", toStringFlags, tabCount, tabSize, ToString(obj.identifierSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifier", toStringFlags, tabCount, tabSize, ArrayToString(VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT, obj.identifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTilePropertiesFeaturesQCOM>(const decode::Decoded_VkPhysicalDeviceTilePropertiesFeaturesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTilePropertiesFeaturesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tileProperties", toStringFlags, tabCount, tabSize, ToString(obj.tileProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTilePropertiesQCOM>(const decode::Decoded_VkTilePropertiesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTilePropertiesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tileSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.tileSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "apronSize", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.apronSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "origin", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.origin), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAmigoProfilingFeaturesSEC>(const decode::Decoded_VkPhysicalDeviceAmigoProfilingFeaturesSEC& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAmigoProfilingFeaturesSEC& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "amigoProfiling", toStringFlags, tabCount, tabSize, ToString(obj.amigoProfiling, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAmigoProfilingSubmitInfoSEC>(const decode::Decoded_VkAmigoProfilingSubmitInfoSEC& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAmigoProfilingSubmitInfoSEC& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstDrawTimestamp", toStringFlags, tabCount, tabSize, ToString(obj.firstDrawTimestamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapBufferTimestamp", toStringFlags, tabCount, tabSize, ToString(obj.swapBufferTimestamp, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureBuildRangeInfoKHR>(const decode::Decoded_VkAccelerationStructureBuildRangeInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureBuildRangeInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "primitiveCount", toStringFlags, tabCount, tabSize, ToString(obj.primitiveCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveOffset", toStringFlags, tabCount, tabSize, ToString(obj.primitiveOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstVertex", toStringFlags, tabCount, tabSize, ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformOffset", toStringFlags, tabCount, tabSize, ToString(obj.transformOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryTrianglesDataKHR>(const decode::Decoded_VkAccelerationStructureGeometryTrianglesDataKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryTrianglesDataKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexFormat", toStringFlags, tabCount, tabSize, '"' + ToString(obj.vertexFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vertexData", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.vertexData), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", toStringFlags, tabCount, tabSize, ToString(obj.vertexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertex", toStringFlags, tabCount, tabSize, ToString(obj.maxVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexData", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.indexData), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformData", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.transformData), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryAabbsDataKHR>(const decode::Decoded_VkAccelerationStructureGeometryAabbsDataKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryAabbsDataKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.data), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryInstancesDataKHR>(const decode::Decoded_VkAccelerationStructureGeometryInstancesDataKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryInstancesDataKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayOfPointers", toStringFlags, tabCount, tabSize, ToString(obj.arrayOfPointers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.data), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureCreateInfoKHR>(const decode::Decoded_VkAccelerationStructureCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "createFlags", toStringFlags, tabCount, tabSize, ToString(obj.createFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", toStringFlags, tabCount, tabSize, ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWriteDescriptorSetAccelerationStructureKHR>(const decode::Decoded_VkWriteDescriptorSetAccelerationStructureKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWriteDescriptorSetAccelerationStructureKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCount", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", toStringFlags, tabCount, tabSize, decode::HandlePointerDecoderArrayToString(decoded_obj.pAccelerationStructures.GetLength(), &decoded_obj.pAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAccelerationStructureFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceAccelerationStructureFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAccelerationStructureFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructure, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCaptureReplay", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureIndirectBuild", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureIndirectBuild, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureHostCommands", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureHostCommands, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingAccelerationStructureUpdateAfterBind", toStringFlags, tabCount, tabSize, ToString(obj.descriptorBindingAccelerationStructureUpdateAfterBind, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAccelerationStructurePropertiesKHR>(const decode::Decoded_VkPhysicalDeviceAccelerationStructurePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAccelerationStructurePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryCount", toStringFlags, tabCount, tabSize, ToString(obj.maxGeometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstanceCount", toStringFlags, tabCount, tabSize, ToString(obj.maxInstanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPrimitiveCount", toStringFlags, tabCount, tabSize, ToString(obj.maxPrimitiveCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorAccelerationStructures", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindAccelerationStructures", toStringFlags, tabCount, tabSize, ToString(obj.maxPerStageDescriptorUpdateAfterBindAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetAccelerationStructures", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindAccelerationStructures", toStringFlags, tabCount, tabSize, ToString(obj.maxDescriptorSetUpdateAfterBindAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minAccelerationStructureScratchOffsetAlignment", toStringFlags, tabCount, tabSize, ToString(obj.minAccelerationStructureScratchOffsetAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureDeviceAddressInfoKHR>(const decode::Decoded_VkAccelerationStructureDeviceAddressInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureDeviceAddressInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.accelerationStructure));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyAccelerationStructureToMemoryInfoKHR>(const decode::Decoded_VkCopyAccelerationStructureToMemoryInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyAccelerationStructureToMemoryInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.src));
            FieldToString(strStrm, false, "dst", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.dst), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyMemoryToAccelerationStructureInfoKHR>(const decode::Decoded_VkCopyMemoryToAccelerationStructureInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyMemoryToAccelerationStructureInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", toStringFlags, tabCount, tabSize, ToString(*(decoded_obj.src), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dst", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dst));
            FieldToString(strStrm, false, "mode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyAccelerationStructureInfoKHR>(const decode::Decoded_VkCopyAccelerationStructureInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyAccelerationStructureInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.src));
            FieldToString(strStrm, false, "dst", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.dst));
            FieldToString(strStrm, false, "mode", toStringFlags, tabCount, tabSize, '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureBuildSizesInfoKHR>(const decode::Decoded_VkAccelerationStructureBuildSizesInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureBuildSizesInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureSize", toStringFlags, tabCount, tabSize, ToString(obj.accelerationStructureSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "updateScratchSize", toStringFlags, tabCount, tabSize, ToString(obj.updateScratchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buildScratchSize", toStringFlags, tabCount, tabSize, ToString(obj.buildScratchSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingShaderGroupCreateInfoKHR>(const decode::Decoded_VkRayTracingShaderGroupCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingShaderGroupCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", toStringFlags, tabCount, tabSize, '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "generalShader", toStringFlags, tabCount, tabSize, ToString(obj.generalShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "closestHitShader", toStringFlags, tabCount, tabSize, ToString(obj.closestHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anyHitShader", toStringFlags, tabCount, tabSize, ToString(obj.anyHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "intersectionShader", toStringFlags, tabCount, tabSize, ToString(obj.intersectionShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShaderGroupCaptureReplayHandle", toStringFlags, tabCount, tabSize, decode::DataPointerDecoderToString(&decoded_obj.pShaderGroupCaptureReplayHandle));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingPipelineInterfaceCreateInfoKHR>(const decode::Decoded_VkRayTracingPipelineInterfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingPipelineInterfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayPayloadSize", toStringFlags, tabCount, tabSize, ToString(obj.maxPipelineRayPayloadSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayHitAttributeSize", toStringFlags, tabCount, tabSize, ToString(obj.maxPipelineRayHitAttributeSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingPipelineCreateInfoKHR>(const decode::Decoded_VkRayTracingPipelineCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingPipelineCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", toStringFlags, tabCount, tabSize, ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", toStringFlags, tabCount, tabSize, ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", toStringFlags, tabCount, tabSize, ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", toStringFlags, tabCount, tabSize, PointerDecoderArrayToString(*decoded_obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayRecursionDepth", toStringFlags, tabCount, tabSize, ToString(obj.maxPipelineRayRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLibraryInfo", toStringFlags, tabCount, tabSize, ((decoded_obj.pLibraryInfo && decoded_obj.pLibraryInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pLibraryInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pLibraryInterface", toStringFlags, tabCount, tabSize, ((decoded_obj.pLibraryInterface && decoded_obj.pLibraryInterface->GetMetaStructPointer()) ? ToString(*decoded_obj.pLibraryInterface->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDynamicState", toStringFlags, tabCount, tabSize, ((decoded_obj.pDynamicState && decoded_obj.pDynamicState->GetMetaStructPointer()) ? ToString(*decoded_obj.pDynamicState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "layout", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "basePipelineHandle", toStringFlags, tabCount, tabSize, decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", toStringFlags, tabCount, tabSize, ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceRayTracingPipelineFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingPipelineFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipeline", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingPipeline, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineShaderGroupHandleCaptureReplay", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingPipelineShaderGroupHandleCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineShaderGroupHandleCaptureReplayMixed", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingPipelineShaderGroupHandleCaptureReplayMixed, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineTraceRaysIndirect", toStringFlags, tabCount, tabSize, ToString(obj.rayTracingPipelineTraceRaysIndirect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTraversalPrimitiveCulling", toStringFlags, tabCount, tabSize, ToString(obj.rayTraversalPrimitiveCulling, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingPipelinePropertiesKHR>(const decode::Decoded_VkPhysicalDeviceRayTracingPipelinePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleSize", toStringFlags, tabCount, tabSize, ToString(obj.shaderGroupHandleSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRayRecursionDepth", toStringFlags, tabCount, tabSize, ToString(obj.maxRayRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxShaderGroupStride", toStringFlags, tabCount, tabSize, ToString(obj.maxShaderGroupStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupBaseAlignment", toStringFlags, tabCount, tabSize, ToString(obj.shaderGroupBaseAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleCaptureReplaySize", toStringFlags, tabCount, tabSize, ToString(obj.shaderGroupHandleCaptureReplaySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRayDispatchInvocationCount", toStringFlags, tabCount, tabSize, ToString(obj.maxRayDispatchInvocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleAlignment", toStringFlags, tabCount, tabSize, ToString(obj.shaderGroupHandleAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRayHitAttributeSize", toStringFlags, tabCount, tabSize, ToString(obj.maxRayHitAttributeSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkStridedDeviceAddressRegionKHR>(const decode::Decoded_VkStridedDeviceAddressRegionKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkStridedDeviceAddressRegionKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "deviceAddress", toStringFlags, tabCount, tabSize, ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", toStringFlags, tabCount, tabSize, ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", toStringFlags, tabCount, tabSize, ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTraceRaysIndirectCommandKHR>(const decode::Decoded_VkTraceRaysIndirectCommandKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTraceRaysIndirectCommandKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", toStringFlags, tabCount, tabSize, ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", toStringFlags, tabCount, tabSize, ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", toStringFlags, tabCount, tabSize, ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayQueryFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceRayQueryFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayQueryFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", toStringFlags, tabCount, tabSize, '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", toStringFlags, tabCount, tabSize, PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayQuery", toStringFlags, tabCount, tabSize, ToString(obj.rayQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)
