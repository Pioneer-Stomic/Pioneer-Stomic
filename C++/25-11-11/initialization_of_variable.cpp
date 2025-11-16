#include <iostream>

int main()
{
    int a{ 4 };
    std::cout << "a_1 = " << a << std::endl;
    a = { };
    std::cout << "a_2 = " << a << std::endl;
    int b, c{ 7 };
    std::cout << "b = " << b << std::endl << "c = " << c << std::endl;
    return 0;
}