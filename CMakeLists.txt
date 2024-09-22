cmake_minimum_required(VERSION 3.14)
set (CMAKE_CXX_COMPILER "C:/TDM-GCC-64/bin/g++.exe")
set (CMAKE_C_COMPILER "C:/TDM-GCC-64/bin/gcc.exe")
project(vega)

add_executable(main main.cpp my_add.cpp)