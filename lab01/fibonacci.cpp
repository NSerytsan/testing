#include <iostream>
#include <vector>
#include <string>

std::vector<int> generateFibonacci(int number)
{
    std::vector<int> fib = {1, 2};
    while (fib.back() <= number)
    {
        int next = fib[fib.size() - 1] + fib[fib.size() - 2];
        fib.push_back(next);
    }
    return fib;
}

std::string fibonacciEncode(int number)
{
    if (number < 1)
        return "";
    std::vector<int> fib = generateFibonacci(number);
    std::string code(fib.size() - 2, '0');
    for (int i = fib.size() - 1; i >= 0; --i)
    {
        if (fib[i] <= number)
        {
            number -= fib[i];
            code[i] = '1';
        }
    }
    return code + "11";
}