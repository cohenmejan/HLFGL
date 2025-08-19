cmake_minimum_required(VERSION 3.30)
project(HLFGL)

set(CMAKE_CXX_STANDARD 23)

add_library(HLFGL INTERFACE)

target_include_directories(HLFGL INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include)