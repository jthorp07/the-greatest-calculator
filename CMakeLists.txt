# Build root for TheGreatestCalculator
cmake_minimum_required(VERSION 3.31)

project(TheGreatestCalculator
    VERSION 0.0.0
    DESCRIPTION "You've never seen a calculator like this."
    LANGUAGES CXX)

# IDE Support
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Split binaries into different directories for executables,
# shared libraries, and static libraries
#
# Note: Windows DLLs may end up in the executable directory
set(binaryDirectory ${PROJECT_SOURCE_DIR}/out)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${binaryDirectory}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${binaryDirectory}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${binaryDirectory}/shared)

# TODO: When CMake tooling is added, it should be included here
#       so subdirectories also have access

# The various subprojects that produce the final artifacts
# will be added here:
add_subdirectory(TheGreatestCalculator)
