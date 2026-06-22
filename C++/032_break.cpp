#include <iostream>

int main()
{
    for(int i{ }; i < 10; i++)
    {
        for(int j{ }; j < 10; j++)
        {
            std::cout << "* ";
            if(i <= j)
            {
                break;
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}