# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5

# Include any dependencies generated for this target.
include CMakeFiles/functionalities.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functionalities.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functionalities.dir/flags.make

CMakeFiles/functionalities.dir/Functionalities.cpp.o: CMakeFiles/functionalities.dir/flags.make
CMakeFiles/functionalities.dir/Functionalities.cpp.o: Functionalities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functionalities.dir/Functionalities.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/functionalities.dir/Functionalities.cpp.o -c /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5/Functionalities.cpp

CMakeFiles/functionalities.dir/Functionalities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functionalities.dir/Functionalities.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5/Functionalities.cpp > CMakeFiles/functionalities.dir/Functionalities.cpp.i

CMakeFiles/functionalities.dir/Functionalities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functionalities.dir/Functionalities.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5/Functionalities.cpp -o CMakeFiles/functionalities.dir/Functionalities.cpp.s

# Object files for target functionalities
functionalities_OBJECTS = \
"CMakeFiles/functionalities.dir/Functionalities.cpp.o"

# External object files for target functionalities
functionalities_EXTERNAL_OBJECTS =

libfunctionalities.a: CMakeFiles/functionalities.dir/Functionalities.cpp.o
libfunctionalities.a: CMakeFiles/functionalities.dir/build.make
libfunctionalities.a: CMakeFiles/functionalities.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfunctionalities.a"
	$(CMAKE_COMMAND) -P CMakeFiles/functionalities.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functionalities.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functionalities.dir/build: libfunctionalities.a

.PHONY : CMakeFiles/functionalities.dir/build

CMakeFiles/functionalities.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/functionalities.dir/cmake_clean.cmake
.PHONY : CMakeFiles/functionalities.dir/clean

CMakeFiles/functionalities.dir/depend:
	cd /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5 /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5 /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5 /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5 /home/kpit/Desktop/TEST_KATAPULT/21_08/Ques_5/CMakeFiles/functionalities.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functionalities.dir/depend

