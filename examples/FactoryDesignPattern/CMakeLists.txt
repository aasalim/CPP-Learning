cmake_minimum_required(VERSION 3.5)

# Project Name 
project(FactoryDesignPattern CXX)

# Language Standard
set(CMAKE_C_STANDARD 99)

# Project include folders
include_directories(${PROJECT_NAME} include )

# Libraries
# add_library(LibraryName Library.h Library.c)

# Project main program
add_executable(${PROJECT_NAME} 
                src/main.cpp
                src/RectangleShape.cpp 
                src/CircleShape.cpp
                src/ShapeFactory.cpp)