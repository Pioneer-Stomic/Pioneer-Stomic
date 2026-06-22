#include <iostream>

int main()
{
    for(int i{ 1 }; i < 10; i++)
    {
        for(int j{ 1 }; j <= i; j++)
        {
            std::cout << j << " * " << i << " = " << i * j << "\t";
        }
        std::cout << '\n';
    }

    return 0;
}