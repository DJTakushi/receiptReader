find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(
    utest
    generic.test.cpp
)
target_link_libraries(
    utest
    GTest::gtest_main
    ${GTEST_LIBRARIES}
    pthread
)