#include <iostream>

int max(int num1, int num2);

int main()
{
    int num1{ 10 }, num2{ 20 };
    
    std::cout << max(10, 20);

    return 0;
}

int max(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}