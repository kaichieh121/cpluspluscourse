# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( struct_exercise LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( struct_exerciseLib "struct_exercise.hpp" "struct_exercise.cpp" )
set_target_properties( struct_exerciseLib PROPERTIES OUTPUT_NAME "struct_exercise" )

# Set up the executable.
add_executable( struct_exercise "main.cpp" )
target_link_libraries( struct_exercise PRIVATE struct_exerciseLib )
