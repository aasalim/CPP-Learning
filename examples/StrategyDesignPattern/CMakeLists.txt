cmake_minimum_required(VERSION 3.5)

# Project Name 
project(StrategyDesignPattern CXX)

# Language Standard
set(CMAKE_C_STANDARD 99)

# Project include folders
include_directories(${PROJECT_NAME} include )

# Libraries
# add_library(LibraryName Library.h Library.c)

# Project main program
add_executable(${PROJECT_NAME} 
                src/main.cpp
                src/Ducks/Duck.cpp
                src/Ducks/MallardDuck.cpp
                src/Ducks/RubberDuck.cpp

                src/Behaviors/Fly/FlyNoWay.cpp
                src/Behaviors/Fly/FlyWithWings.cpp
                src/Behaviors/Fly/FlyWithRockets.cpp

                src/Behaviors/Quack/Quack.cpp
                src/Behaviors/Quack/Squeak.cpp
                src/Behaviors/Quack/MuteQuack.cpp)