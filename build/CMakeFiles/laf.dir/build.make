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
CMAKE_SOURCE_DIR = /home/anton202/lafore_book_exs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton202/lafore_book_exs/build

# Include any dependencies generated for this target.
include CMakeFiles/laf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/laf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laf.dir/flags.make

CMakeFiles/laf.dir/main.cpp.o: CMakeFiles/laf.dir/flags.make
CMakeFiles/laf.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton202/lafore_book_exs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laf.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/laf.dir/main.cpp.o -c /home/anton202/lafore_book_exs/main.cpp

CMakeFiles/laf.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laf.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton202/lafore_book_exs/main.cpp > CMakeFiles/laf.dir/main.cpp.i

CMakeFiles/laf.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laf.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton202/lafore_book_exs/main.cpp -o CMakeFiles/laf.dir/main.cpp.s

# Object files for target laf
laf_OBJECTS = \
"CMakeFiles/laf.dir/main.cpp.o"

# External object files for target laf
laf_EXTERNAL_OBJECTS =

laf: CMakeFiles/laf.dir/main.cpp.o
laf: CMakeFiles/laf.dir/build.make
laf: CMakeFiles/laf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton202/lafore_book_exs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable laf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/laf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laf.dir/build: laf

.PHONY : CMakeFiles/laf.dir/build

CMakeFiles/laf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/laf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/laf.dir/clean

CMakeFiles/laf.dir/depend:
	cd /home/anton202/lafore_book_exs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton202/lafore_book_exs /home/anton202/lafore_book_exs /home/anton202/lafore_book_exs/build /home/anton202/lafore_book_exs/build /home/anton202/lafore_book_exs/build/CMakeFiles/laf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/laf.dir/depend

