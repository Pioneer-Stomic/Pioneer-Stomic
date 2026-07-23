#include <iostream>

void func(int& ref)
{
    std::cout << "void func(int& ref) called.\n";
}

void func(const int& ref)
{
    std::cout << "void func(const int& ref) called.\n";
}

void func2(int num1, int num2 = 10)
{
    std::cout << "void func2(int num1, int num2 = 10) called.\n";
}

void func2(int num1)
{
    std::cout << "void func2(int num1) called.\n";
}

int main()
{
    int num{ 10 };
    func(num);
  
    func(10); // Only constant reference can receive a constant.

    // func2(10); 
    // Illegal. This can call both func2(int num1) and func(int num1, int num2 = 10),
    // which has a default value and can be called with only one argument.

    func2(10, 20);
    // This is feasible. Explicit call can differentiate between two func2() functions.

    return 0;
}