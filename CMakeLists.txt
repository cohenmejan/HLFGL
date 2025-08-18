cmake_minimum_required(VERSION 3.30)
project(HLFGL)

set(CMAKE_CXX_STANDARD 23)

add_library(HLFGL STATIC
        src/HLFGL.cpp)

target_include_directories(HLFGL PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include)