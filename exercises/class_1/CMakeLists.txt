# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( class_1 LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( class_1Lib "class_1.hpp" "class_1.cpp" )
set_target_properties( class_1Lib PROPERTIES OUTPUT_NAME "class_1" )

# Set up the executable.
add_executable( class_1 "main.cpp" )
target_link_libraries( class_1 PRIVATE class_1Lib )
