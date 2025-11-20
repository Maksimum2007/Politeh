cmake_minimum_required(VERSION 3.20)
project(Laba_5_v2 C)

set(CMAKE_C_STANDARD 11)


add_executable(Laba_5_v2 main.c
        func.c
        mouth.c
)

target_link_libraries(Laba_5_v2 PRIVATE m)