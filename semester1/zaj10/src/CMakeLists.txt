cmake_minimum_required (VERSION 3.0.0)
project (ltest)

add_executable(ltest ltest.cpp List.cpp)
add_compile_options( -Wall -g)
