################################################################################
#
# (c) 2020 Copyright, Real-Time Innovations, Inc. (RTI)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
################################################################################

# Generated from rti_connext_dds_cmake_module/cmake/rti_connext_dds_cmake_module-extras.cmake.in

set(RTI_BUILD_HELPER    ${rti_connext_dds_cmake_module_DIR}/rti_build_helper.cmake
    CACHE INTERNAL "Script providing CMake helper functions for RTI packages")

# Load build helper
include(${RTI_BUILD_HELPER})

rti_init_env()

set(RTIME_FOUND             false
    CACHE INTERNAL
    "Whether RTI Connext DDS Micro was detected at build time")

set(CONNEXTDDS_FOUND        false
    CACHE INTERNAL
    "Whether RTI Connext DDS Professional was detected at build time")

if(RTIME_FOUND)
    set(RTIMEHOME               ""
        CACHE INTERNAL "Installation directory for RTI Connext DDS Micro")

    set(RTIME_TARGET_NAME       ""
        CACHE INTERNAL
          "Architecture target for RTI Connext DDS Micro")

    set(RTIME_VERSION           ""
        CACHE INTERNAL "Version of RTI Connext DDS Micro")

    set(RTIME_COMPONENTS        
        CACHE INTERNAL "Extra RTI Connext DDS Micro components to load")
endif()

if(CONNEXTDDS_FOUND)
    set(CONNEXTDDS_DIR          ""
        CACHE INTERNAL
          "Installation directory for RTI Connext DDS Professional")

    set(CONNEXTDDS_ARCH         ""
        CACHE INTERNAL "Architecture target for RTI Connext DDS Professional")

    set(CONNEXTDDS_VERSION      ""
        CACHE INTERNAL "Version for RTI Connext DDS Professional")

    set(CONNEXTDDS_COMPONENTS   
        CACHE INTERNAL "Extra RTI Connext DDS Professional components to load")
endif()

message(STATUS "Loaded RTI Connext DDS environment:")
message(STATUS "- RTI Connext DDS Professional:")
message(STATUS "  - Found: ${CONNEXTDDS_FOUND}")
message(STATUS "  - Version: ${CONNEXTDDS_VERSION}")
message(STATUS "  - Directory: ${CONNEXTDDS_DIR}")
message(STATUS "  - Architecture: ${CONNEXTDDS_ARCH}")
message(STATUS "- RTI Connext DDS Micro:")
message(STATUS "  - Found: ${RTIME_FOUND}")
message(STATUS "  - Version: ${RTIME_VERSION}")
message(STATUS "  - Directory: ${RTIMEHOME}")
message(STATUS "  - Architecture: ${RTIME_TARGET_NAME}")
