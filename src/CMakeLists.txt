find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(
    utest
    generic.test.cpp
    receiptRaw.cpp
    receiptRaw.test.cpp
    )
target_include_directories(utest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(
    utest
    GTest::gtest_main
    ${GTEST_LIBRARIES}
    pthread
)