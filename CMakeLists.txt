# This is a comment

cmake_minimum_required(VERSION 3.20.0)

add_library(greeter STATIC src/greeter.c)
target_include_directories(greeter PUBLIC include)

