# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/andrew/CLion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/andrew/CLion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andrew/Projects/cpp/piscine_cpp/d04/ex00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex00.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex00.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex00.dir/flags.make

CMakeFiles/ex00.dir/main.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex00.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/main.cpp.o -c /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/main.cpp

CMakeFiles/ex00.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/main.cpp > CMakeFiles/ex00.dir/main.cpp.i

CMakeFiles/ex00.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/main.cpp -o CMakeFiles/ex00.dir/main.cpp.s

CMakeFiles/ex00.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ex00.dir/main.cpp.o.requires

CMakeFiles/ex00.dir/main.cpp.o.provides: CMakeFiles/ex00.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex00.dir/build.make CMakeFiles/ex00.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex00.dir/main.cpp.o.provides

CMakeFiles/ex00.dir/main.cpp.o.provides.build: CMakeFiles/ex00.dir/main.cpp.o


CMakeFiles/ex00.dir/FragTrap.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/FragTrap.cpp.o: ../FragTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex00.dir/FragTrap.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/FragTrap.cpp.o -c /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/FragTrap.cpp

CMakeFiles/ex00.dir/FragTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/FragTrap.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/FragTrap.cpp > CMakeFiles/ex00.dir/FragTrap.cpp.i

CMakeFiles/ex00.dir/FragTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/FragTrap.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/FragTrap.cpp -o CMakeFiles/ex00.dir/FragTrap.cpp.s

CMakeFiles/ex00.dir/FragTrap.cpp.o.requires:

.PHONY : CMakeFiles/ex00.dir/FragTrap.cpp.o.requires

CMakeFiles/ex00.dir/FragTrap.cpp.o.provides: CMakeFiles/ex00.dir/FragTrap.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex00.dir/build.make CMakeFiles/ex00.dir/FragTrap.cpp.o.provides.build
.PHONY : CMakeFiles/ex00.dir/FragTrap.cpp.o.provides

CMakeFiles/ex00.dir/FragTrap.cpp.o.provides.build: CMakeFiles/ex00.dir/FragTrap.cpp.o


# Object files for target ex00
ex00_OBJECTS = \
"CMakeFiles/ex00.dir/main.cpp.o" \
"CMakeFiles/ex00.dir/FragTrap.cpp.o"

# External object files for target ex00
ex00_EXTERNAL_OBJECTS =

ex00: CMakeFiles/ex00.dir/main.cpp.o
ex00: CMakeFiles/ex00.dir/FragTrap.cpp.o
ex00: CMakeFiles/ex00.dir/build.make
ex00: CMakeFiles/ex00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex00"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex00.dir/build: ex00

.PHONY : CMakeFiles/ex00.dir/build

CMakeFiles/ex00.dir/requires: CMakeFiles/ex00.dir/main.cpp.o.requires
CMakeFiles/ex00.dir/requires: CMakeFiles/ex00.dir/FragTrap.cpp.o.requires

.PHONY : CMakeFiles/ex00.dir/requires

CMakeFiles/ex00.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex00.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex00.dir/clean

CMakeFiles/ex00.dir/depend:
	cd /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrew/Projects/cpp/piscine_cpp/d04/ex00 /home/andrew/Projects/cpp/piscine_cpp/d04/ex00 /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug /home/andrew/Projects/cpp/piscine_cpp/d04/ex00/cmake-build-debug/CMakeFiles/ex00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex00.dir/depend

