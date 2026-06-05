#include "fun.h"
#include <iostream>

int main()
{
    int num{};
    std::cout << "Provide a number between 1 and 31 please: ";
    std::cin >> num;
    if (num < 1 || num > 31)
    {
        std::cout << "Please provide an integer between 1 and 31";
        return 0;
    }
    printFactorial(num);
    return 0;
}
