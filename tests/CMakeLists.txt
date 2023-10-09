cmake_minimum_required(VERSION 3.5)

# Project Test Name
project(Tests)

# Setup for GoogleTest
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


message(STATUS "Fetching googletest")

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG v1.14.0
  GIT_SHALLOW TRUE
  GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(googletest)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# SOURCES
add_executable(${PROJECT_NAME} Test.cpp)
target_link_libraries(${PROJECT_NAME} gtest_main)
add_compile_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
# Finish Setup
enable_testing()
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
