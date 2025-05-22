cmake_minimum_required(VERSION 3.15)
project(lab01 LANGUAGES CXX)

add_executable(fibonacci fibonacci.cpp fib_main.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/releases/download/v1.17.0/googletest-1.17.0.tar.gz
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_fibonacci test_fibonacci.cpp fibonacci.cpp)

target_link_libraries(
  test_fibonacci
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_fibonacci)