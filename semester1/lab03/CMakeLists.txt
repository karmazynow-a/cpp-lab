

cmake_minimum_required (VERSION 3.0.0)
project( stest )

add_executable( stest stest.cpp strop.cpp )
add_compile_options( -Wall -g )

enable_testing()
add_executable( test_next test_next.cpp strop.cpp )
add_test( next  test_next  )

