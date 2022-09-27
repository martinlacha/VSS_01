cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp distributions/Distribution_Function.cpp distributions/Distribution_Function.h distributions/Normal_Distribution.cpp distributions/Normal_Distribution.h Config.h distributions/Exponential_Distribution.cpp distributions/Exponential_Distribution.h distributions/Uniform_Distribution.cpp distributions/Uniform_Distribution.h)
