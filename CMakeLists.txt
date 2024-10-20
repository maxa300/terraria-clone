# Silences CMake policy CMP0053 warnings
cmake_policy(SET CMP0053 NEW)

# Minimum CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(terraria-clone)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Set the path where Raylib is located
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "${CMAKE_SOURCE_DIR}/lib/raylib")

# Add Raylib
find_package(raylib REQUIRED)

# Include source files
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link Raylib to the project
target_link_libraries(${PROJECT_NAME} raylib)
