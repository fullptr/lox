cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}")
set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS}")
set(CMAKE_C_STANDARD 17)

add_executable(lox
    main.c
    chunk.c
    memory.c
    debug.c
    value.c
    vm.c
    scanner.c
    compiler.c
)

target_include_directories(lox PRIVATE .)