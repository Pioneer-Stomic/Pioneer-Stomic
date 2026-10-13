#include <iostream>

int main()
{
    int num{ };

    std::cout << "Enter an integer: ";
    std::cin >> num;

    int units{ num % 10 };
    int tens { num / 10 % 10 };
    int hundreds { num / 100 };

    std::cout << "The reversal of the integer is: " << units << tens << hundreds << '\n';

    return 0;
}