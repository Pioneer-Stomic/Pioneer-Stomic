#include "add.h"
#include <iostream>

int main()
{
    int a{ };
    int b{ };
    
    std::cout << "Enter two integers: \n";
    std::cin >> a >> b;

    std::cout << "The sum of " << a << " and " << b << " is: " << a + b << '\n';

    return 0;
}