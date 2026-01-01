#include "polygon.h"
#include <iostream>

int main()
{
    int inputNumber{ };
    int inputLength{ };

    std::cout << "Input the side number of the polygon: \n";
    std::cin >> inputNumber;
    std::cout << "Input the side length of the polygon: \n";
    std::cin >> inputLength;

    std::cout << "The perimeter of the polygon is: \n" << calculate(inputNumber, inputLength) << '\n';

    return 0;
}