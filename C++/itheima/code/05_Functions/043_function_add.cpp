#include <iostream>

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1{ };
    int num2{ };
    
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    int result{ add(num1, num2) };

    std::cout << "The sum of them is: " << result <<'\n';
    
    return 0;
}