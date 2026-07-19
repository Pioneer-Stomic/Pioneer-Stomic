#include <iostream>

void printValue(int a, int b)
{
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
}

int main()
{
    int a{ 10 };
    int &b{ a };
    int a1{ 20 };
    // int &c;
    // Illegal. Reference variable requires an initializer.

    printValue(a, b);

    b = 20;

    // &b = a1;
    // Illegal. Reference variable can't point to another value.

    printValue(a, b);

    return 0;
}