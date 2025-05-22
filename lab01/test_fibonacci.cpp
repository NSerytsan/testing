#include <gtest/gtest.h>
#include "fibonacci.h"

TEST(FibonacciTest, DefaultFibSize)
{
    int number = 1;
    std::vector fib = generateFibonacci(number);
    EXPECT_EQ(fib.size(), 2) << "Default fib size is not equal 2. It is " << fib.size();
}

TEST(FibonacciTest, EmptyStringIfLessThenOne)
{
    int number = 0;
    std::string ret = fibonacciEncode(number);
    EXPECT_TRUE(ret.empty()) << "Resulted code string is not empty. It is " << ret;
}

TEST(FibonacciTest, ReturnSuffixOnlyIfNumberIsOne)
{
    int number = 1;
    std::string suffix = "11";
    std::string ret = fibonacciEncode(number);
    EXPECT_EQ(ret, suffix) << "Default suffix value is not 11 for number 1. It is " << ret;
}

TEST(FibonacciTest, CheckResultForSpecificNumber)
{
    int number = 27;
    std::string suffix = "10010011";
    std::string ret = fibonacciEncode(number);
    EXPECT_EQ(ret, suffix) << "The code is not equal 10010011 for number 27. It is " << ret;
}
