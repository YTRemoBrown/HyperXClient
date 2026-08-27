cmake_minimum_required(VERSION 3.22.1)

project("HyperXClient")

add_library(
    HyperXClient
    SHARED

    native-lib.cpp

    core/Client.cpp
)

target_include_directories(
    HyperXClient
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
