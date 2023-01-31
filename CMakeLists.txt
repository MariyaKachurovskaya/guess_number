cmake_minimum_required(VERSION 3.23)

project(guess_number1)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB check_value.cpp high_scores.cpp)

add_library(check_value STATIC ${SOURCE_LIB})
add_library(high_scores STATIC ${SOURCE_LIB})

add_executable(guess_number1 ${SOURCE_EXE})

target_link_libraries(guess_number1 check_value high_scores)