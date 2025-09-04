cmake_minimum_required(VERSION 3.10)
project(HelloWorldCI)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加源文件
add_executable(HelloWorld main.cpp lib.cpp)

# 包含头文件目录
target_include_directories(HelloWorld PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})