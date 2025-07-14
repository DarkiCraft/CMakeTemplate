cmake_minimum_required(VERSION 3.16)
project(MyProject LANGUAGES CXX)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(App
  src/main.cpp
  src/foo.cpp
)