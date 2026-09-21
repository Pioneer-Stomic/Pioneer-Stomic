#include <iostream>

int main()
{
    int num{ 10 };

    int* p;
    p = &num;

    std::cout << "num = " << num << '\n';
    std::cout << "The address of num is " << &num << '\n'; 
    std::cout << "Pointer p is " << p << '\n';

    std::cout << "Pointer p occupies " << sizeof(p) << " bytes\n";

    *p = 20;

    std::cout << "num = " << num << '\n';
    std::cout << "*p = " << *p << '\n';

    return 0;
}