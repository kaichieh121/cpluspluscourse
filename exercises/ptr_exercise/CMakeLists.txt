# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( ptr_exercise LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( ptr_exerciseLib "ptr_exercise.hpp" "ptr_exercise.cpp" )
set_target_properties( ptr_exerciseLib PROPERTIES OUTPUT_NAME "ptr_exercise" )

# Set up the executable.
add_executable( ptr_exercise "main.cpp" )
target_link_libraries( ptr_exercise PRIVATE ptr_exerciseLib )
