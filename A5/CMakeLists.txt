# After modifying this file, make sure you reload the CMake Project (right-click CMakeLists.txt and click Reload CMake Project.)
cmake_minimum_required(VERSION 3.8)
project(A5)

set(CMAKE_CXX_STANDARD 11)

# Do not modify these flags other than changing -ggdb to -O2 and back.
# Debugging build:
set(CMAKE_CXX_FLAGS "-ggdb -std=c++11 -Wall -Werror=uninitialized -Werror=maybe-uninitialized -Winit-self -Wredundant-decls -Werror=return-type")
# Optimization build:
# set(CMAKE_CXX_FLAGS "-O2 -std=c++11 -Wall -Werror=uninitialized -Werror=maybe-uninitialized -Winit-self -Wredundant-decls")

add_library(movie-ratings-obj OBJECT code/MovieRatings.hpp)
add_executable(a5 code/main.cpp $<TARGET_OBJECTS:movie-ratings-obj> code/MovieRatings.cpp)
