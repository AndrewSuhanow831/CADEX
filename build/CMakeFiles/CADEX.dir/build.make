# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Dev\C++\CADEX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Dev\C++\CADEX\build

# Include any dependencies generated for this target.
include CMakeFiles/CADEX.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CADEX.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CADEX.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CADEX.dir/flags.make

CMakeFiles/CADEX.dir/main.cpp.obj: CMakeFiles/CADEX.dir/flags.make
CMakeFiles/CADEX.dir/main.cpp.obj: F:/Dev/C++/CADEX/main.cpp
CMakeFiles/CADEX.dir/main.cpp.obj: CMakeFiles/CADEX.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Dev\C++\CADEX\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CADEX.dir/main.cpp.obj"
	C:\mingw-18.0\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CADEX.dir/main.cpp.obj -MF CMakeFiles\CADEX.dir\main.cpp.obj.d -o CMakeFiles\CADEX.dir\main.cpp.obj -c F:\Dev\C++\CADEX\main.cpp

CMakeFiles/CADEX.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CADEX.dir/main.cpp.i"
	C:\mingw-18.0\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Dev\C++\CADEX\main.cpp > CMakeFiles\CADEX.dir\main.cpp.i

CMakeFiles/CADEX.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CADEX.dir/main.cpp.s"
	C:\mingw-18.0\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Dev\C++\CADEX\main.cpp -o CMakeFiles\CADEX.dir\main.cpp.s

CMakeFiles/CADEX.dir/curve.cpp.obj: CMakeFiles/CADEX.dir/flags.make
CMakeFiles/CADEX.dir/curve.cpp.obj: F:/Dev/C++/CADEX/curve.cpp
CMakeFiles/CADEX.dir/curve.cpp.obj: CMakeFiles/CADEX.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Dev\C++\CADEX\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CADEX.dir/curve.cpp.obj"
	C:\mingw-18.0\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CADEX.dir/curve.cpp.obj -MF CMakeFiles\CADEX.dir\curve.cpp.obj.d -o CMakeFiles\CADEX.dir\curve.cpp.obj -c F:\Dev\C++\CADEX\curve.cpp

CMakeFiles/CADEX.dir/curve.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CADEX.dir/curve.cpp.i"
	C:\mingw-18.0\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Dev\C++\CADEX\curve.cpp > CMakeFiles\CADEX.dir\curve.cpp.i

CMakeFiles/CADEX.dir/curve.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CADEX.dir/curve.cpp.s"
	C:\mingw-18.0\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Dev\C++\CADEX\curve.cpp -o CMakeFiles\CADEX.dir\curve.cpp.s

# Object files for target CADEX
CADEX_OBJECTS = \
"CMakeFiles/CADEX.dir/main.cpp.obj" \
"CMakeFiles/CADEX.dir/curve.cpp.obj"

# External object files for target CADEX
CADEX_EXTERNAL_OBJECTS =

CADEX.exe: CMakeFiles/CADEX.dir/main.cpp.obj
CADEX.exe: CMakeFiles/CADEX.dir/curve.cpp.obj
CADEX.exe: CMakeFiles/CADEX.dir/build.make
CADEX.exe: CMakeFiles/CADEX.dir/linklibs.rsp
CADEX.exe: CMakeFiles/CADEX.dir/objects1.rsp
CADEX.exe: CMakeFiles/CADEX.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Dev\C++\CADEX\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CADEX.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CADEX.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CADEX.dir/build: CADEX.exe
.PHONY : CMakeFiles/CADEX.dir/build

CMakeFiles/CADEX.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CADEX.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CADEX.dir/clean

CMakeFiles/CADEX.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Dev\C++\CADEX F:\Dev\C++\CADEX F:\Dev\C++\CADEX\build F:\Dev\C++\CADEX\build F:\Dev\C++\CADEX\build\CMakeFiles\CADEX.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CADEX.dir/depend

