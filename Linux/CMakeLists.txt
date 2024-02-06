#Minimum CMake Version
cmake_minimum_required(VERSION 3.10)

#Defines the executable
add_executable(simpleNumberGameLin ../main.cpp)

#Sets compiling options
target_compile_options(simpleNumberGameLin PRIVATE -Wall)
