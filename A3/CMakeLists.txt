# After modifying this file, make sure you reload the CMake Project (right-click CMakeLists.txt and click Reload CMake Project.)
cmake_minimum_required(VERSION 3.8)
project(A3)

set(CMAKE_CXX_STANDARD 11)

# Do not modify these flags other than changing -ggdb to -O2 and back.
# Debugging build:
set(CMAKE_CXX_FLAGS "-ggdb -std=c++11 -Wall -Werror=uninitialized -Werror=maybe-uninitialized -Winit-self -Wredundant-decls -Werror=return-type")
# Optimization build:
# set(CMAKE_CXX_FLAGS "-O2 -std=c++11 -Wall -Werror=uninitialized -Werror=maybe-uninitialized -Winit-self -Wredundant-decls")

add_library(a3-written-obj OBJECT code/a3-written.cpp)
add_library(main-written-obj OBJECT code/main-written.cpp)
add_executable(a3-written $<TARGET_OBJECTS:main-written-obj> $<TARGET_OBJECTS:a3-written-obj>)


# Compile your class code into object code.
add_library(sNode-obj OBJECT code/sNode.hpp)
# Compile the main code into object code to avoid rebuilding every
# time you update your class code.
add_library(sNodeStack-obj OBJECT code/sNodeStack.hpp)
add_library(sNodeQueue-obj OBJECT code/sNodeQueue.hpp)

# Build an executable using the main function and the object code for your class.
add_executable(a3 code/main.cpp $<TARGET_OBJECTS:sNodeStack-obj> $<TARGET_OBJECTS:sNodeQueue-obj> code/a3-written.cpp)
add_dependencies(a3 sNode-obj)
