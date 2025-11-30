#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}

int main()
{
    std::cout << add(2, multiply(3, 5)) << "\n";
    std::cout << add(2, add(3, 5));
    
    return 0;
}