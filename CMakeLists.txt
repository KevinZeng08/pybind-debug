cmake_minimum_required(VERSION 3.4...3.18)
project(pybind_cpp)

add_subdirectory(3rdparty/pybind11)
pybind11_add_module(pybind_cpp add.cpp)

# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(pybind_cpp
                           PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})