###############################################################################
# Copyright (c) 2018-2021 LunarG, Inc.
# Copyright (c) 2020-2022 Advanced Micro Devices, Inc.
# All rights reserved
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.
#
# Author: LunarG Team
# Author: AMD Developer Tools Team
# Description: CMake script for framework util target
###############################################################################

add_executable(gfxrecon-analyzer "")

set(RpsBuildTests OFF)
set(RpsBuildTools OFF)
set(RpsEnableImGui OFF)
set(RpsRootSolutionFolder rps)
add_subdirectory(${CMAKE_SOURCE_DIR}/external/rps ${CMAKE_BINARY_DIR}/external/rps)

target_sources(gfxrecon-analyzer
               PRIVATE
                    ${CMAKE_CURRENT_LIST_DIR}/../tool_settings.h
                    ${CMAKE_CURRENT_LIST_DIR}/replay_settings.h
                    ${CMAKE_CURRENT_LIST_DIR}/desktop_main.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/../platform_debug_helper.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/exporter/dx12_graph_export_consumer.h

)

target_include_directories(gfxrecon-analyzer
                           PUBLIC
                                ${CMAKE_BINARY_DIR}
                                ${CMAKE_SOURCE_DIR}/external/rps/include
                                ${CMAKE_SOURCE_DIR}/external/rps/src)

target_link_libraries(gfxrecon-analyzer
                          gfxrecon_application
                          gfxrecon_decode
                          gfxrecon_graphics
                          gfxrecon_format
                          gfxrecon_util
                          platform_specific
                          $<$<BOOL:${D3D12_SUPPORT}>:d3d12.lib>
                          $<$<BOOL:${D3D12_SUPPORT}>:dxgi.lib>)

if (MSVC)
    # Force inclusion of "gfxrecon_disable_popup_result" variable in linking.
    # On 32-bit windows, MSVC prefixes symbols with "_" but on 64-bit windows it doesn't.
    if(NOT CMAKE_CL_64)
      target_link_options(gfxrecon-analyzer PUBLIC "LINKER:/Include:_gfxrecon_disable_popup_result")
    else()
      target_link_options(gfxrecon-analyzer PUBLIC "LINKER:/Include:gfxrecon_disable_popup_result")
    endif()
endif()

# A multithreaded Vulkan driver loaded through dlopen() mechanism
# won't work if libstdc++ has started in a single-threaded mode.
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)
target_link_libraries(gfxrecon-analyzer Threads::Threads rps_core)

common_build_directives(gfxrecon-analyzer)

include(${CMAKE_SOURCE_DIR}/cmake/AgilitySDK.cmake)

install(TARGETS gfxrecon-analyzer RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
