cmake_minimum_required(VERSION 3.5)

# Project Name 
project(ProjectName C)

# Language Standard
set(CMAKE_C_STANDARD 99)

# Project include folders
include_directories(${PROJECT_NAME} include)

# Libraries
# add_library(LibraryName Library.h Library.c)

# Project main program
add_executable(${PROJECT_NAME} src/main.c)

# Link libraries to project
# target_link_libraries(${PROJECT_NAME} LibraryName)
enable_testing()
# Add the tests folder
add_subdirectory(tests)