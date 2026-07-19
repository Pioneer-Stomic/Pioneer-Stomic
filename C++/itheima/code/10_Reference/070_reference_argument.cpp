#include <iostream>

// Pass by value
void swap01(int a, int b)
{
    int temp{ a };
    a = b;
    b = temp;
}

// Pass by pointer
void swap02(int* a, int* b)
{
    int temp{ *a };
    *a = *b;
    *b = temp;
}

// Pass by reference
void swap03(int &a, int &b)
{
    int temp{ a };
    a = b;
    b = temp;
}

void printValue(int a, int b)
{
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n' << '\n';
}

int main()
{
    int a{ 10 };
    int b{ 20 };

    printValue(a, b);

    swap01(a, b);
    printValue(a, b);

    a = 10;
    b = 20;

    swap02(&a, &b);
    printValue(a, b);

    a = 10;
    b = 20;

    swap03(a, b);
    printValue(a, b);

    return 0;
}