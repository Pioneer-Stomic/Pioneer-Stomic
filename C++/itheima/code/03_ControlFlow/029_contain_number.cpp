#include <iostream>

int main()
{
    for(int num{ }; num < 100; num++)
    {
        // Print numbers whose ones digit or tens digit contains 7.
        if(num % 10 == 7 || num / 10 == 7)
        {
            std::cout << num << '\n';
        }
    }

    return 0;
}