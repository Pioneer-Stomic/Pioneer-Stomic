#include <iostream>

int main()
{
    double num1{ }, num2{ };
    char op{ };

    // 用户输入
    std::cout << "欢迎使用简易计算器!\n";
    std::cout << "请输入第一个整数: ";
    std::cin >> num1;
    std::cout << "请输入运算符: ";
    std::cin >> op;
    std::cout << "请输入第二个整数: ";
    std::cin >> num2;

    // 判断运算符
    switch(op)
    {
        case '+':
            std::cout << num1 << " + " << num2 << " = ";
            std::cout << num1 + num2 << '\n';
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = ";
            std::cout << num1 - num2 << '\n';
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = ";
            std::cout << num1 * num2 << '\n';
            break;
        case '/':
            if (num2 == 0)
            {
                std::cout << "错误: 除数不能为0!\n";
            }
            else
            {
                std::cout << num1 << " / " << num2 << " = ";
                std::cout << num1 / num2 << '\n';
            }
            break;
        default:
            std::cout << "错误: 无效运算符!\n";
            break;
    }

    return 0;
}