#include <iostream>

void showValue(const int& ref) // Modifying reference variable with "const" can prevent misoperation.
{
    std::cout << "ref = " << ref << '\n';
    // ref = 20;
}

int main()
{
    int a{ 10 };
    const int& ref{ 10 }; // This will be automatically converted to int temp { 10 }; int& ref{ 10 };
    // ref is a read-only value

    std::cout << "a = " << a << '\n';

    showValue(a);

    std::cout << "a = " << a << '\n';

    return 0;
}