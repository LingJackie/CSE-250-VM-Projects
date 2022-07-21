# After modifying this file, make sure you reload the CMake Project (right-click CMakeLists.txt and click Reload CMake Project.)
cmake_minimum_required(VERSION 3.8)
project(A4)

set(CMAKE_CXX_STANDARD 11)

# Do not modify these flags other than changing -ggdb to -O2 and back.
# Debugging build:
set(CMAKE_CXX_FLAGS "-ggdb -std=c++11 -Wall -Werror=uninitialized -Werror=maybe-uninitialized -Winit-self -Wredundant-decls -Werror=return-type")
# Optimization build:
# set(CMAKE_CXX_FLAGS "-O2 -std=c++11 -Wall -Werror=uninitialized -Werror=maybe-uninitialized -Winit-self -Wredundant-decls")

add_library(a4-expressions-obj OBJECT code/a4-expressions.hpp)
add_executable(a4-expressions code/main-expressions.cpp $<TARGET_OBJECTS:a4-expressions-obj>)

add_library(a4-balanced-obj OBJECT code/a4-balanced.hpp)
add_executable(a4-balanced code/main-balanced.cpp $<TARGET_OBJECTS:a4-balanced-obj>)

add_library(a4-heap-obj OBJECT code/a4-heap.hpp)
add_executable(a4-heap code/main-heap.cpp $<TARGET_OBJECTS:a4-heap-obj>)
