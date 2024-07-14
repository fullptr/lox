cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}")
set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS}")
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

add_executable(
    lox
    lox.c
    memory.c
    chunk.cpp
    debug.c
    value.c
    vm.c
    compiler.c
    scanner.c
    object.c
    table.cpp
)

target_include_directories(lox PRIVATE .)