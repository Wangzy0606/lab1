cmake_minimum_required(VERSION 3.10)
project(HelloWorldCI)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 从环境变量获取版本号，默认为1
if(NOT DEFINED ENV{RELEASE_N})
    set(RELEASE_N 1)
else()
    set(RELEASE_N $ENV{RELEASE_N})
endif()

add_executable(HelloWorld main.cpp lib.cpp)

# 定义宏传递给代码
target_compile_definitions(HelloWorld PRIVATE RELEASE_N=${RELEASE_N})
target_include_directories(HelloWorld PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
