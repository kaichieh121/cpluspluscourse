# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( bank LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( bankLib "bank.hpp" "bank.cpp" )
set_target_properties( bankLib PROPERTIES OUTPUT_NAME "bank" )

# Set up the executable.
add_executable( bank "main.cpp" )
target_link_libraries( bank PRIVATE bankLib )

#---------below are for testing---------------

cmake_minimum_required(VERSION 3.14)
project(bank)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  testcase
  testcase.cpp
)
target_link_libraries(
  testcase
  GTest::gtest_main
  bankLib 
)

include(GoogleTest)
gtest_discover_tests(testcase)