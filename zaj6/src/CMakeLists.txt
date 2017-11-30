cmake_minimum_required (VERSION 3.0.0)
project (mtest)
#nazwa pliku wykonywalnego

add_executable(mtest mtest.cpp Vector.cpp Matrix.cpp)
#nazwa pliku wyk, potem nazwy zrodel
add_compile_options( -Wall -g)


