#include "fibonacci.h"
#include <iostream>

int main()
{
    int number;
    std::cout << "Введіть натуральне число: ";
    std::cin >> number;
    std::string encoded = fibonacciEncode(number);
    std::cout << "Код Фібоначчі: " << encoded << std::endl;
    return 0;
}