cmake_minimum_required(VERSION 3.5)

# Project Name 
project(ExamplePinHardware CXX)

# Language Standard
set(CMAKE_C_STANDARD 99)

# Project include folders
include_directories(${PROJECT_NAME} include )

# Libraries
# add_library(LibraryName Library.h Library.c)

# Project main program
add_executable(${PROJECT_NAME} 
                src/main.cpp
                src/GPIOPort.cpp
                # Pin Behaviors
                src/Pin/Behaviors/Direction/OutputDirection.cpp
                src/Pin/Behaviors/Direction/InputDirection.cpp
                # Pin Actions
                src/Pin/Behaviors/Action/ToggleAction.cpp
                src/Pin/Behaviors/Action/SetAction.cpp
                src/Pin/Behaviors/Action/ClearAction.cpp
                src/Pin/Behaviors/Action/ReadAction.cpp
                # Pins
                src/Pin/Pin.cpp
                src/Pin/Digital/DigitalInputPin.cpp
                src/Pin/Digital/DigitalOutputPin.cpp)