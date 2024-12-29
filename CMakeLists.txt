cmake_minimum_required(VERSION 3.29)
project(Playground)

set(CMAKE_CXX_STANDARD 23)

add_executable(main main.cpp)
add_executable(test test.cpp)
add_executable(csvparse20 csvparse20.cpp)
add_executable(csvparse23 csvparse23.cpp)
add_executable(csvparseold csvparseold.cpp)
