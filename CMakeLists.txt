# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(PowerGridSimulation VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    src/PowerElement.cpp
    src/test_PowerElement.cpp
)

# Include directories (for headers)
include_directories(src)

# Create the executable
add_executable(PowerGridSimulation ${SOURCES})

# Optionally, add testing framework (e.g., Google Test) if desired in the future
# enable_testing()
# add_subdirectory(test) # This would require creating a test directory if using a framework
