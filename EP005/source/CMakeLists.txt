cmake_minimum_required(VERSION 3.12)

set(This TestProject)

project(${This} LANGUAGES C CXX)

file(GLOB_RECURSE SOURCE_FILE src/*.cpp src/src2/*.cpp)

add_executable(${This}  main.cpp ${SOURCE_FILE})

target_include_directories(${This}  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/include/include2) 
