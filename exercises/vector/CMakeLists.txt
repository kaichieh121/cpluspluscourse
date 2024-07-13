# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( vector LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( myLib "vector.hpp" "vector.cpp" )
set_target_properties( myLib PROPERTIES OUTPUT_NAME "vector" )

# Set up the executable.
add_executable( vector "main.cpp" )
target_link_libraries( vector PRIVATE myLib )
