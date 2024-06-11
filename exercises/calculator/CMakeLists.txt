# Set up the project.
cmake_minimum_required( VERSION 3.12 )
project( calculator LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake" )
set(CMAKE_CXX_STANDARD 20)

# Set up the library.
add_library( calculatorLib "calculator.hpp" "calculator.cpp" )
set_target_properties( calculatorLib PROPERTIES OUTPUT_NAME "calculator" )

# Set up the executable.
add_executable( calculator "main.cpp" )
target_link_libraries( calculator PRIVATE calculatorLib )
