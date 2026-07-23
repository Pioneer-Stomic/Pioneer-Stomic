#include <iostream>

int func04(int a, int b); 
// Default arguments can only be given to either the function body or forward declaration.

int func01(int a = 10, int b = 20, int c = 30)
{
    return a + b + c;
}

int func02(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

// Ilegal: The arguments after the first default arguments must be default arguments too. 
// int func03(int a, int b = 20, int c)
// {
//     return a + b + c;
// }

int func04(int a = 10, int b = 20)
{
    return a + b;
}

int main()
{
    std::cout << func01() << '\n';
    std::cout << func02(20) << '\n';
    std::cout << func04() << '\n';

    return 0;
}