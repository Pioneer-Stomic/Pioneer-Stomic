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

    printValue(a, b);

    b = 20;

    printValue(a, b);

    return 0;
}