cmake_minimum_required(VERSION 3.18)
project(tesseractEx
  VERSION 1.0
  DESCRIPTION "Tesseract C++ examples"
  HOMEPAGE_URL "https://tesseract-ocr.github.io/tessdoc/Examples_C++.html")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(basicExample basicExample.cpp)
target_link_libraries(basicExample lept tesseract)
