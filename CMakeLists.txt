cmake_minimum_required(VERSION 3.31)
project(Day2)
set(CMAKE_CXX_STANDARD 11)

# 遍历所有.cpp文件
add_executable(enum Day2/enum.cpp)
add_executable(pi Day2/pi.cpp)
