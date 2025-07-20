cmake_minimum_required(VERSION 3.11)
project(MyProject VERSION 1.0 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.8.1
)
FetchContent_MakeAvailable(Catch2)

add_subdirectory(src)
add_subdirectory(tests)