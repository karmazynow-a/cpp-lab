cmake_minimum_required (VERSION 3.0.0)
project (bib)

add_executable(bib Main.cpp Page.cpp Book.cpp Catalog.cpp)
add_compile_options( -Wall -g)


