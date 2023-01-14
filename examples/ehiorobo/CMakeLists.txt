cmake_minimum_required(VERSION 3.18)
project(ehiorobo
  VERSION 1.0
  DESCRIPTION "Evans Ehiorobo's sample of opencv+tesseract OCR"
HOMEPAGE_URL "https://medium.com/building-a-simple-text-correction-tool/basic-ocr-with-tesseract-and-opencv-34fae6ab3400")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(ehiorobo main.cpp)
target_link_libraries(ehiorobo tesseract ${OpenCV_LIBS})
file(COPY test_image.jpg DESTINATION ${CMAKE_CURRENT_BINARY_DIR})