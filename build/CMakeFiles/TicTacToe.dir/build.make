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
CMAKE_SOURCE_DIR = /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build

# Include any dependencies generated for this target.
include CMakeFiles/TicTacToe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TicTacToe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TicTacToe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TicTacToe.dir/flags.make

CMakeFiles/TicTacToe.dir/src/main.cpp.o: CMakeFiles/TicTacToe.dir/flags.make
CMakeFiles/TicTacToe.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/TicTacToe.dir/src/main.cpp.o: CMakeFiles/TicTacToe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TicTacToe.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TicTacToe.dir/src/main.cpp.o -MF CMakeFiles/TicTacToe.dir/src/main.cpp.o.d -o CMakeFiles/TicTacToe.dir/src/main.cpp.o -c /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/src/main.cpp

CMakeFiles/TicTacToe.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TicTacToe.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/src/main.cpp > CMakeFiles/TicTacToe.dir/src/main.cpp.i

CMakeFiles/TicTacToe.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TicTacToe.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/src/main.cpp -o CMakeFiles/TicTacToe.dir/src/main.cpp.s

CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o: CMakeFiles/TicTacToe.dir/flags.make
CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o: ../src/game_structure/board.cpp
CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o: CMakeFiles/TicTacToe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o -MF CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o.d -o CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o -c /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/src/game_structure/board.cpp

CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/src/game_structure/board.cpp > CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.i

CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/src/game_structure/board.cpp -o CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.s

# Object files for target TicTacToe
TicTacToe_OBJECTS = \
"CMakeFiles/TicTacToe.dir/src/main.cpp.o" \
"CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o"

# External object files for target TicTacToe
TicTacToe_EXTERNAL_OBJECTS =

TicTacToe: CMakeFiles/TicTacToe.dir/src/main.cpp.o
TicTacToe: CMakeFiles/TicTacToe.dir/src/game_structure/board.cpp.o
TicTacToe: CMakeFiles/TicTacToe.dir/build.make
TicTacToe: CMakeFiles/TicTacToe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TicTacToe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TicTacToe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TicTacToe.dir/build: TicTacToe
.PHONY : CMakeFiles/TicTacToe.dir/build

CMakeFiles/TicTacToe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TicTacToe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TicTacToe.dir/clean

CMakeFiles/TicTacToe.dir/depend:
	cd /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build /home/tgeorg/Git_Repos/ThanasisGeorg/Cpp/Tic-Tac-Toe/build/CMakeFiles/TicTacToe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TicTacToe.dir/depend
