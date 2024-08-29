cmake_minimum_required(VERSION 3.24)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.cpp")
include_directories(include)

add_executable(${PROJECT_NAME} ${SOURCES})