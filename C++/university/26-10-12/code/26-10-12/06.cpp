#include <iostream>

int main()
{
    char ch1{ };
    char ch0{ };
    char ch2{ };

    std::cout << "Enter a character: ";
    std::cin >> ch1;

    if(ch1 == 'a')
    {
        ch0 = 'z';
        ch2 = ch1 + 1;
    }
    else if(ch1 == 'z')
    {
        ch0 = ch1 - 1;
        ch2 = 'a';
    }
    else
    {
        ch0 = ch1 - 1;
        ch2 = ch1 + 1;
    }

    std::cout << ch0 << ch2 << '\n';

    return 0;
}