#pragma once

#ifdef WIN32
  #define conan_demo_10_17_2021_EXPORT __declspec(dllexport)
#else
  #define conan_demo_10_17_2021_EXPORT
#endif

conan_demo_10_17_2021_EXPORT void conan_demo_10_17_2021();
