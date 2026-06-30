#include <iostream>

int main()
{
    int a{ 10 };
    int b{ 20 };
    int c{ 20 };

    // 常量指针
    const int* p1{ &a };
    std::cout << "*p1修改前: " << *p1 << '\n';

    p1 = &b;
    std::cout << "*p1修改后: " << *p1 << '\n';

    
    // 错误：常量指针指向的变量可以发生变化，但变量值不可修改
    // *p1 = 20;

    // 指针常量
    int* const p2{ &a };
    std::cout << "*p2修改前: " << *p2 << '\n';

    *p2 = 20;
    std::cout << "*p2修改后: " << *p2 << '\n';
    
    // 错误：常量指针指向的变量值可以修改，但指向的变量不可修改
    // p2 = &b;

    const int* const p3{ &a };
    
    //错误：const同时修饰指针和常量时，变量和变量值都不可修改
    // p3 = &b;
    // *p3 = 20;

    return 0;
}