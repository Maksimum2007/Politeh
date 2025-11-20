cmake_minimum_required(VERSION 4.0)
project(Laba_5 C)

set(CMAKE_C_STANDARD 11)

add_executable(Laba_5 dodatok.1.c
        func.c)
target_link_libraries(Laba_5 PRIVATE m)
