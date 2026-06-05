#include "fun.h"
#include <iostream>

void printFactorial(int x)
{
    int total{x}; // Here x is instantiated with a given num that will them be multiplied
    for (int i = 2; i < x; i++)
    {
        total = total * i;
    }
    std::cout << "The factorial of a number " << x << " is " << total;
}
