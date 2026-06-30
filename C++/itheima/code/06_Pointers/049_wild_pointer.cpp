#include <iostream>

int main()
{
    int* p{ (int*)0x1100 };
    std::cout << p << '\n';

    /*
    错误操作：指向非法的内存空间
    *p = 10;
    std::cout << *p << '\n';
    */

    return 0;
}