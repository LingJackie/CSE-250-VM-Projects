# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /media/sf_CSE_250_VM_Shared_Folder/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /media/sf_CSE_250_VM_Shared_Folder/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/sf_CSE_250_VM_Shared_Folder/A4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a4-expressions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a4-expressions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a4-expressions.dir/flags.make

CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.o: CMakeFiles/a4-expressions.dir/flags.make
CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.o: ../code/main-expressions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.o -c /media/sf_CSE_250_VM_Shared_Folder/A4/code/main-expressions.cpp

CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_CSE_250_VM_Shared_Folder/A4/code/main-expressions.cpp > CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.i

CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_CSE_250_VM_Shared_Folder/A4/code/main-expressions.cpp -o CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.s

# Object files for target a4-expressions
a4__expressions_OBJECTS = \
"CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.o"

# External object files for target a4-expressions
a4__expressions_EXTERNAL_OBJECTS =

a4-expressions: CMakeFiles/a4-expressions.dir/code/main-expressions.cpp.o
a4-expressions: CMakeFiles/a4-expressions.dir/build.make
a4-expressions: CMakeFiles/a4-expressions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a4-expressions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a4-expressions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a4-expressions.dir/build: a4-expressions

.PHONY : CMakeFiles/a4-expressions.dir/build

CMakeFiles/a4-expressions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a4-expressions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a4-expressions.dir/clean

CMakeFiles/a4-expressions.dir/depend:
	cd /media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_CSE_250_VM_Shared_Folder/A4 /media/sf_CSE_250_VM_Shared_Folder/A4 /media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug /media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug /media/sf_CSE_250_VM_Shared_Folder/A4/cmake-build-debug/CMakeFiles/a4-expressions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a4-expressions.dir/depend

