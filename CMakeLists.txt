cmake_minimum_required(VERSION 2.8)

project(learncpp)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall --std=c++14")
endif ( CMAKE_COMPILER_IS_GNUCC )
include_directories( include )

file(GLOB SRC
    "*.cpp"
    "*.cc"    
    "*.h"
)
add_executable(${PROJECT_NAME} ${SRC})
