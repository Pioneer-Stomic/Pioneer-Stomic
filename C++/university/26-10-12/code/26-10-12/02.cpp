#include <iostream>

int main()
{
    int num1{ };
    int num2{ };
    int num3{ };
    int max{ };

    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    max = (num1 > num2 ? num1 : num2);
    max = (max > num3 ? max : num3);

    std::cout << "The maximal integer is: " << max << '\n';

    return 0;
}