cmake_minimum_required(VERSION 3.15)
project(conan_demo_10_17_2021 CXX)

find_package(fmt REQUIRED)
add_library(conan_demo_10_17_2021 src/conan_demo_10_17_2021.cpp)
target_link_libraries(conan_demo_10_17_2021 PRIVATE fmt::fmt)

set_target_properties(conan_demo_10_17_2021 PROPERTIES PUBLIC_HEADER "src/conan_demo_10_17_2021.h")

add_executable(main src/conan_demo_10_17_2021_exe.cpp)
target_link_libraries(main PRIVATE conan_demo_10_17_2021)

install(TARGETS conan_demo_10_17_2021 DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
