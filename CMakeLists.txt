cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0135 NEW)

include(FetchContent)

project(testing LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# https://google.github.io/googletest/quickstart-cmake.html
FetchContent_Declare(
	googletest URL https://github.com/google/googletest/archive/f8d7d77c06936315286eb55f8de22cd23c188571.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tester
	Source/joystick.cpp
	Source/tester.cpp
)
target_link_libraries(tester GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tester)