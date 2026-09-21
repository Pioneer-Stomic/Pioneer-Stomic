#include <iostream>

int main()
{
    int* p{ (int*)0x1100 };
    std::cout << p << '\n';

    /*
    Invalid operation: pointing to illegal memory space.
    *p = 10;
    std::cout << *p << '\n';
    */

    return 0;
}