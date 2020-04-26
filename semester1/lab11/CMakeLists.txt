cmake_minimum_required (VERSION 3.0.0)
project (vtest)

add_executable(vtest vtest.cpp FVec.cpp)
add_compile_options( -Wall -g)


