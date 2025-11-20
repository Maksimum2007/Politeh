cmake_minimum_required(VERSION 4.0)
project(dub C)

set(CMAKE_C_STANDARD 11)

add_executable(dub main.c
        func_dub.c)
