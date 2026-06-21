#include <iostream>

int main()
{
    double num1{ }, num2{ };
    char op{ };

    // User input
    std::cout << "Welcome to the Simple Operator!\n";
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the operator: ";
    std::cin >> op;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Judge the operator
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
            std::cout << num1 << " × " << num2 << " = ";
            std::cout << num1 * num2 << '\n';
            break;
        case '/':
            if (num2 == 0)
            {
                std::cout << "Error: Divison by zero is not allowed!\n";
            }
            else
            {
                std::cout << num1 << " ÷ " << num2 << " = ";
                std::cout << num1 / num2 << '\n';
            }
            break;
        default:
            std::cout << "Error: Invalid operator!\n";
            break;
    }

    return 0;
}