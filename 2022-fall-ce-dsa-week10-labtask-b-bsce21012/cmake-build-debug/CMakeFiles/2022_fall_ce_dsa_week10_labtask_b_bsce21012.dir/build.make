# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/Lenovo/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Lenovo/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/flags.make

CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.o: CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/flags.make
CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.o -c "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/main.cpp"

CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/main.cpp" > CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.i

CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/main.cpp" -o CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.s

# Object files for target 2022_fall_ce_dsa_week10_labtask_b_bsce21012
2022_fall_ce_dsa_week10_labtask_b_bsce21012_OBJECTS = \
"CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.o"

# External object files for target 2022_fall_ce_dsa_week10_labtask_b_bsce21012
2022_fall_ce_dsa_week10_labtask_b_bsce21012_EXTERNAL_OBJECTS =

2022_fall_ce_dsa_week10_labtask_b_bsce21012.exe: CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/main.cpp.o
2022_fall_ce_dsa_week10_labtask_b_bsce21012.exe: CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/build.make
2022_fall_ce_dsa_week10_labtask_b_bsce21012.exe: CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2022_fall_ce_dsa_week10_labtask_b_bsce21012.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/build: 2022_fall_ce_dsa_week10_labtask_b_bsce21012.exe
.PHONY : CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/build

CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/clean

CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/depend:
	cd "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012" "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012" "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug" "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug" "/cygdrive/f/ITU ALL DATA/SEMESTER 3/DATA STRUCTURE AND ALGORITHMS/LABS/2022-fall-ce-dsa-week10-labtask-b-bsce21012/cmake-build-debug/CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2022_fall_ce_dsa_week10_labtask_b_bsce21012.dir/depend

