# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( passby LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( passbyLib "passby.hpp" "passby.cpp" )
set_target_properties( passbyLib PROPERTIES OUTPUT_NAME "passby" )

# Set up the executable.
add_executable( passby "main.cpp" )
target_link_libraries( passby PRIVATE passbyLib )
