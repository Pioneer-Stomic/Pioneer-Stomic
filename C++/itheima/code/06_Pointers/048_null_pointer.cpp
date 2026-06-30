#include <iostream>

int main()
{
    int *p{ nullptr };

    std::cout << p << '\n';

    /* 
    错误示范：
    *p = 100;
    错误，因为编号为0的内存拒绝访问
    解引用空指针会导致程序崩溃
    */

    int a{ 10 };
    p = &a;
    std::cout << p << '\n';
    
    *p = 20;
    std::cout << *p << '\n';

    return 0;
}