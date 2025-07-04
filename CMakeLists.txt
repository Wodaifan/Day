cmake_minimum_required(VERSION 3.31)
project(Day2)
set(CMAKE_CXX_STANDARD 11)

# 遍历所有.cpp文件
add_executable(enum Day2/enum.cpp)
add_executable(pi Day2/pi.cpp)
add_executable(haooi Day2/haooi.cpp)
add_executable(pow Day2/pow.cpp)
add_executable(rec1 Day2/rec1.cpp)
add_executable(rec2 Day2/rec2.cpp)
