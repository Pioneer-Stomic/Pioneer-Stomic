#include <iostream>

int main()
{
    int *p{ nullptr };

    std::cout << p << '\n';

    /* 
    Incorrect example:
    *p = 100;
    This is wrong because the memory at address 0 denies access.
    Dereferencing a null pointer causes the program to crash.
    */

    int a{ 10 };
    p = &a;
    std::cout << p << '\n';
    
    *p = 20;
    std::cout << *p << '\n';

    return 0;
}