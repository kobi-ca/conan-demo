cmake_minimum_required(VERSION 3.15)
project(PackageTest CXX)

find_package(conan_demo_10_17_2021 CONFIG REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example conan_demo_10_17_2021::conan_demo_10_17_2021)
