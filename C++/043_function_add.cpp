#include <iostream>

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1{ };
    int num2{ };
    
    std::cout << "请输入第一个整数：";
    std::cin >> num1;
    std::cout << "请输入第二个整数：";
    std::cin >> num2;

    int result{ add(num1, num2) };

    std::cout << "两数之和为 " << result <<'\n';
    
    return 0;
}