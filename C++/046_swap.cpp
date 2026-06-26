#include <iostream>
#include "046_swap.h"

void swap(int num1, int num2)
{
    int temp{ num1 };
    num1 = num2;
    num2 = temp;
    
    std::cout << "交换后：\n";
    std::cout << "num1 = " << num1 << '\n';
    std::cout << "num2 = " << num2 << '\n';
}