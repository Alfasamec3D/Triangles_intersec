CMake_minimum_required(VERSION 3.13)

project(geom)

set(SOURCE_LIB geom.cpp)

add_library(geom STATIC ${SOURCE_LIB})

