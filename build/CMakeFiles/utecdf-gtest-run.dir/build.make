# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/aocsa/miniconda3/envs/blazingsql-env/bin/cmake

# The command to remove a file.
RM = /home/aocsa/miniconda3/envs/blazingsql-env/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aocsa/CLionProjects/utecdf_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aocsa/CLionProjects/utecdf_cpp/build

# Utility rule file for utecdf-gtest-run.

# Include the progress variables for this target.
include CMakeFiles/utecdf-gtest-run.dir/progress.make

CMakeFiles/utecdf-gtest-run:
	./utecdf-gtest

utecdf-gtest-run: CMakeFiles/utecdf-gtest-run
utecdf-gtest-run: CMakeFiles/utecdf-gtest-run.dir/build.make

.PHONY : utecdf-gtest-run

# Rule to build all files generated by this target.
CMakeFiles/utecdf-gtest-run.dir/build: utecdf-gtest-run

.PHONY : CMakeFiles/utecdf-gtest-run.dir/build

CMakeFiles/utecdf-gtest-run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/utecdf-gtest-run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/utecdf-gtest-run.dir/clean

CMakeFiles/utecdf-gtest-run.dir/depend:
	cd /home/aocsa/CLionProjects/utecdf_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aocsa/CLionProjects/utecdf_cpp /home/aocsa/CLionProjects/utecdf_cpp /home/aocsa/CLionProjects/utecdf_cpp/build /home/aocsa/CLionProjects/utecdf_cpp/build /home/aocsa/CLionProjects/utecdf_cpp/build/CMakeFiles/utecdf-gtest-run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/utecdf-gtest-run.dir/depend

