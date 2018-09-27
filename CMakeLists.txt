cmake_minimum_required(VERSION 3.12)
project(clionProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(clionProject main.cpp include/calendar.h src/calendar.cpp)