#include <iostream>

void swap(int num1, int num2)
{ 
    std::cout << "交换前：" << num1 << " " << num2 << '\n';

    int temp{ num1 };
    num1 = num2;
    num2 = temp;

    std::cout << "交换后：" << num1 << " " << num2 << '\n';
}

int main()
{
    int num1{ 10 }, num2{ 20 };

    swap(num1, num2);

    return 0;
}