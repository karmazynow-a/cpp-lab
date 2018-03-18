cmake_minimum_required (VERSION 3.0.0)
project (rtv)

add_executable(rtv Main.cpp TelewizorLCD.cpp Rzutnik.cpp)
add_compile_options( -Wall -g)


