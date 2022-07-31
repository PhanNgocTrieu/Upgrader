# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/trieupn/Documents/_git/Upgrader/openGL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/trieupn/Documents/_git/Upgrader/openGL/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/example.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/example.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/example.dir/flags.make

examples/CMakeFiles/example.dir/main.cpp.o: examples/CMakeFiles/example.dir/flags.make
examples/CMakeFiles/example.dir/main.cpp.o: ../examples/main.cpp
examples/CMakeFiles/example.dir/main.cpp.o: examples/CMakeFiles/example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trieupn/Documents/_git/Upgrader/openGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/example.dir/main.cpp.o"
	cd /home/trieupn/Documents/_git/Upgrader/openGL/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/example.dir/main.cpp.o -MF CMakeFiles/example.dir/main.cpp.o.d -o CMakeFiles/example.dir/main.cpp.o -c /home/trieupn/Documents/_git/Upgrader/openGL/examples/main.cpp

examples/CMakeFiles/example.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/main.cpp.i"
	cd /home/trieupn/Documents/_git/Upgrader/openGL/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/trieupn/Documents/_git/Upgrader/openGL/examples/main.cpp > CMakeFiles/example.dir/main.cpp.i

examples/CMakeFiles/example.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/main.cpp.s"
	cd /home/trieupn/Documents/_git/Upgrader/openGL/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/trieupn/Documents/_git/Upgrader/openGL/examples/main.cpp -o CMakeFiles/example.dir/main.cpp.s

# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/main.cpp.o"

# External object files for target example
example_EXTERNAL_OBJECTS =

examples/example: examples/CMakeFiles/example.dir/main.cpp.o
examples/example: examples/CMakeFiles/example.dir/build.make
examples/example: liblibOpenGL.a
examples/example: /usr/lib/x86_64-linux-gnu/libGL.so
examples/example: liblibOpenGL.a
examples/example: /usr/lib/x86_64-linux-gnu/libGL.so
examples/example: /usr/lib/x86_64-linux-gnu/libglfw.so.3.3
examples/example: /usr/lib/libboost_log.so.1.79.0
examples/example: /usr/lib/libboost_chrono.so.1.79.0
examples/example: /usr/lib/libboost_filesystem.so.1.79.0
examples/example: /usr/lib/libboost_atomic.so.1.79.0
examples/example: /usr/lib/libboost_regex.so.1.79.0
examples/example: /usr/lib/libboost_thread.so.1.79.0
examples/example: /usr/lib/libboost_program_options.so.1.79.0
examples/example: /usr/lib/x86_64-linux-gnu/libGL.so
examples/example: /usr/lib/x86_64-linux-gnu/libGLU.so
examples/example: examples/CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trieupn/Documents/_git/Upgrader/openGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example"
	cd /home/trieupn/Documents/_git/Upgrader/openGL/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/example.dir/build: examples/example
.PHONY : examples/CMakeFiles/example.dir/build

examples/CMakeFiles/example.dir/clean:
	cd /home/trieupn/Documents/_git/Upgrader/openGL/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/example.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/example.dir/clean

examples/CMakeFiles/example.dir/depend:
	cd /home/trieupn/Documents/_git/Upgrader/openGL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trieupn/Documents/_git/Upgrader/openGL /home/trieupn/Documents/_git/Upgrader/openGL/examples /home/trieupn/Documents/_git/Upgrader/openGL/build /home/trieupn/Documents/_git/Upgrader/openGL/build/examples /home/trieupn/Documents/_git/Upgrader/openGL/build/examples/CMakeFiles/example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/example.dir/depend
