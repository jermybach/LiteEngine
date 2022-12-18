cmake_minimum_required(VERSION 3.16)
project(LiteEngine VERSION 0.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

include(CMakeOptions.txt)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
set(EXE_NAME ${PROJECT_NAME}d)
else()
set(EXE_NAME ${PROJECT_NAME})
endif()

add_subdirectory(src)
add_subdirectory(thirdparty)
