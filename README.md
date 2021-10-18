# conan-demo
conan-demo

# conan instructions

1. python -m venv venv
2. source it
3. pip install wheel conan
4. conan new conan_demo/0.1 --template=cmake_lib
5. conan install --profile <whatever the profile is if you have more than one/default> ../conanfile.txt\
my profiles are: \
-> conan profile list
   * default
   * default-abi11
6. Use -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
7. use find_package to bring in packages from the conan cache
8. target_link_libraries using fmt::fmt
9. test_package is used with conan create and conanfile.py (not used here as of 10/17/2021)
