#include <iostream>

int main()
{
    int sum{ };

    for(int i{ 1 }; i <= 10; i++)
    {
        for(int j{ 1 }; j <= 10; j++)
        {
            if(((i - j) > 1 || (j - i) > 1) && !((i == 1 && j == 10) || (i == 10 && j == 1)))
            {
                sum++;
            }
        }
    }

    std::cout << sum << '\n';

    return 0;
}