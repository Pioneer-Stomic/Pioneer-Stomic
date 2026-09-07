#include <iostream>
#include <ctime>

int main()
{
    std::cout << "Welcome to the Number Guessing game!\n";

    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    // std::cout << num << '\n';

    int getValue{ };
    int n = 10;

    while(n >= 1)
    {
        std::cout << "Enter an integer: ";
        std::cin >> getValue;

        if(getValue > num)
        {
            std::cout << "Too high.\n";
            n--;
            std::cout << "You have " << n << " chances left.\n";
        }
        else if(getValue < num)
        {
            std::cout << "Too low.\n";
            n--;
            std::cout << "You have " << n << " chances left.\n";
        }
        else
        {
            break;
        }
    }
    if(n == 0)
    {
        std::cout << "Sorry, you have used up all your chances.\n";
    }
    else
    {
        std::cout << "You got it!\n";
    }

    return 0;
}
