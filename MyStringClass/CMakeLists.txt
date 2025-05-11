cmake_minimum_required(VERSION 3.30)
project(MyStringClass)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyStringClass main.cpp
        MyString.cpp
        MyString.h
)
