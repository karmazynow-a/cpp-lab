cmake_minimum_required (VERSION 3.0.0)
project (stest)

add_executable(stest stest.cpp MyString.cpp)
add_compile_options( -Wall -g)


