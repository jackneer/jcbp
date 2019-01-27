cmake_minimum_required(VERSION 3.7.2)
project (jcbp)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(jcbp ${SOURCES})