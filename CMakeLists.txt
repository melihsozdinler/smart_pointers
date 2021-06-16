cmake_minimum_required(VERSION 3.19)
project(smart_pointers)

set(CMAKE_CXX_STANDARD 20)

add_executable(smart_pointers main.cpp src/Rectangle.cpp src/Rectangle.h src/SharedPointer.cpp src/SharedPointer.h src/UniquePointer.cpp src/UniquePointer.h src/WeakPointer.cpp src/WeakPointer.h)