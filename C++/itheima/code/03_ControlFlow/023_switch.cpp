#include <iostream>

int main()
{
    double num1{ }, num2{ };
    char op{ };

    // 用户输入
    std::cout << "Welcome to the Simple Calculator Program!\n";
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the operator: ";
    std::cin >> op;
    std::cout << "Enter the second number: ";
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
                std::cout << "Error: Divisor cannot be zero!\n";
            }
            else
            {
                std::cout << num1 << " / " << num2 << " = ";
                std::cout << num1 / num2 << '\n';
            }
            break;
        default:
            std::cout << "Error: Invalid operator!\n";
            break;
    }

    return 0;
}