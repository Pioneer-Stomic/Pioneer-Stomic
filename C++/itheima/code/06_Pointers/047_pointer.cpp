#include <iostream>

int main()
{
    int num{ 10 };

    int* p;
    p = &num;

    std::cout << "num = " << num << '\n';
    std::cout << "num的地址为 " << &num << '\n'; 
    std::cout << "指针p为 " << p << '\n';

    std::cout << "指针p占用 " << sizeof(p) << " 个字节\n";

    *p = 20;

    std::cout << "num = " << num << '\n';
    std::cout << "*p = " << *p << '\n';

    return 0;
}