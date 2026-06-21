#include <iostream>
#include <ctime>

int main()
{
    std::cout << "Welcome to Guess Number Game!\n";

    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    // std::cout << num << '\n';

    int getValue{ };
    int n = 10;

    while(n >= 1)
    {
        std::cout << "Input an integer: ";
        std::cin >> getValue;

        if(getValue > num)
        {
            std::cout << "You guessed too high\n";
            n--;
            std::cout << "You have " << n << " chances left\n";
        }
        else if(getValue < num)
        {
            std::cout << "You guessed too low\n";
            n--;
            std::cout << "You have " << n << " chances left\n";
        }
        else
        {
            break;
        }
    }
    if(n == 0)
    {
        std::cout << "Sorry, you've run out of chances\n";
    }
    else
    {
        std::cout << "You guessed right!\n";
    }

    return 0;
}