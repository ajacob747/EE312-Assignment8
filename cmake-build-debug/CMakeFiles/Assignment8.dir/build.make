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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sudeepnarala/CLionProjects/EE312-Assignment8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment8.dir/flags.make

CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.o: CMakeFiles/Assignment8.dir/flags.make
CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.o: ../plagiarismCatcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.o -c /Users/sudeepnarala/CLionProjects/EE312-Assignment8/plagiarismCatcher.cpp

CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sudeepnarala/CLionProjects/EE312-Assignment8/plagiarismCatcher.cpp > CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.i

CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sudeepnarala/CLionProjects/EE312-Assignment8/plagiarismCatcher.cpp -o CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.s

CMakeFiles/Assignment8.dir/HashTable.cpp.o: CMakeFiles/Assignment8.dir/flags.make
CMakeFiles/Assignment8.dir/HashTable.cpp.o: ../HashTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment8.dir/HashTable.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment8.dir/HashTable.cpp.o -c /Users/sudeepnarala/CLionProjects/EE312-Assignment8/HashTable.cpp

CMakeFiles/Assignment8.dir/HashTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment8.dir/HashTable.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sudeepnarala/CLionProjects/EE312-Assignment8/HashTable.cpp > CMakeFiles/Assignment8.dir/HashTable.cpp.i

CMakeFiles/Assignment8.dir/HashTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment8.dir/HashTable.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sudeepnarala/CLionProjects/EE312-Assignment8/HashTable.cpp -o CMakeFiles/Assignment8.dir/HashTable.cpp.s

# Object files for target Assignment8
Assignment8_OBJECTS = \
"CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.o" \
"CMakeFiles/Assignment8.dir/HashTable.cpp.o"

# External object files for target Assignment8
Assignment8_EXTERNAL_OBJECTS =

Assignment8: CMakeFiles/Assignment8.dir/plagiarismCatcher.cpp.o
Assignment8: CMakeFiles/Assignment8.dir/HashTable.cpp.o
Assignment8: CMakeFiles/Assignment8.dir/build.make
Assignment8: CMakeFiles/Assignment8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment8.dir/build: Assignment8

.PHONY : CMakeFiles/Assignment8.dir/build

CMakeFiles/Assignment8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment8.dir/clean

CMakeFiles/Assignment8.dir/depend:
	cd /Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sudeepnarala/CLionProjects/EE312-Assignment8 /Users/sudeepnarala/CLionProjects/EE312-Assignment8 /Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug /Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug /Users/sudeepnarala/CLionProjects/EE312-Assignment8/cmake-build-debug/CMakeFiles/Assignment8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment8.dir/depend

