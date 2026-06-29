#include <iostream>
#include "046_swap.h"

int main()
{
    int num1{ 10 };
    int num2{ 20 };
    
    std::cout << "交换前：\n";
    std::cout << "num1 = " << num1 << '\n';
    std::cout << "num2 = " << num2 << '\n';    
    
    swap(num1, num2);

    return 0;
}