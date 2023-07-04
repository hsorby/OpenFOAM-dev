

cmake_minimum_required(VERSION 3.18.0)

set(CMAKE_OSX_DEPLOYMENT_TARGET 10.14 CACHE STRING "Minimum OS X deployment version.")

set(PROJECT_NAME OpenFOAM)
set(_PROJECT_VERSION 10.0.0)
set(PROJECT_DEVELOPER_VERSION )
project(${PROJECT_NAME} VERSION ${_PROJECT_VERSION} LANGUAGES CXX)

include(CheckIncludeFileCXX)
check_include_file_cxx("mach-o/dyld.h" HAVE_MACH0_DYLD_H)

set(CMAKE_CXX_STANDARD 17)
add_compile_definitions(WM_LABEL_SIZE=64 WM_DP)
if (HAVE_MACH0_DYLD_H)
  add_compile_definitions(HAVE_MACH0_DYLD_H)
endif()

add_subdirectory(src)

