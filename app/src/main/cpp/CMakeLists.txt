cmake_minimum_required(VERSION 3.22.1)

project("HyperXClient")

add_library(
    HyperXClient
    SHARED

    native-lib.cpp

    core/Client.cpp
    core/Logger.cpp
    core/EventBus.cpp
    core/HookManager.cpp
    core/ModuleManager.cpp
)

target_include_directories(
    HyperXClient
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

find_library(
    log-lib
    log
)

target_link_libraries(
    HyperXClient
    ${log-lib}
)
