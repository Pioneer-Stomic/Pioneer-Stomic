#include <iostream>

void printValue(int a, int& ref)
{
    std::cout << "a = " << a << '\n';
    std::cout << "ref = " << ref << '\n' << '\n';
}

void changeValue(int& ref)
{
    ref = 100; // This will be automatically converted to *ref = 100;
}

int main()
{
    int a{ 10 };

    // The essence of reference is constant pointer.
    int& ref{ a }; // This will be automatically converted to int* const ref{ &a };
    ref = 20; // This will be automatically converted to *ref = 20;

    printValue(a, ref);

    changeValue(a);

    printValue(a, ref);

    return 0;
}