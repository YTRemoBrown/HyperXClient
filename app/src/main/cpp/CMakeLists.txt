cmake_minimum_required(VERSION 3.22.1)

project("HyperXClient")

add_library(
    HyperXClient
    SHARED
    native-lib.cpp
)
