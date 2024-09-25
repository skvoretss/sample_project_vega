cmake_minimum_required(VERSION 3.16)
set(-DBUILD_TESTING "" OFF)
project(vega)

add_executable(main main.cpp my_add.cpp)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_Declare(
    googlebench
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG main
)
FetchContent_MakeAvailable(googletest googlebench)

find_package(GTest)
enable_testing()
add_executable(tests test_add.cpp my_add.cpp)
target_link_libraries(tests gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)

find_package(benchmark REQUIRED)
add_executable(bench bench_add.cpp my_add.cpp)
target_link_libraries(bench benchmark::benchmark)
