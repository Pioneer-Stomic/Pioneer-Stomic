#include <iostream>

int main()
{
    for(int i{ }; i < 100; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        std::cout << i << '\n';
    }
    
    return 0;
}