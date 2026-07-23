#include <iostream>

void func()
{
    std::cout << "func() called.\n";
}

void func(int num)
{
    std::cout << "func(int num) called.\n";
}

void func(int num1, int num2)
{
    std::cout << "func(int num1, int num2) called.\n";
}

void func(double num)
{
    std::cout << "func(double num) called.\n";
}

void func(int num1, double num2)
{
    std::cout << "func(int num1, double num2) called.\n";
}

void func(double num1, int num2)
{
    std::cout << "func(double num1, int num2) called.\n";
}

// Cannot overload functions distinguished by return type alone.
// int func(double num1, int num2)
// {
//     std::cout << "func(double num1, int num2) called.\n";
    
//     return 0;
// }

int main()
{
    func();
    
    func(10);

    func(3.14);

    func(10, 20);

    func(10, 3.14);

    func(3.14, 10);

    return 0;
}