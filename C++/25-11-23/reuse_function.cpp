#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer:";

    int input{ };
    std::cin >> input;

    return input;
}

int main()
{
    int x{ getValueFromUser() };
    int y{ getValueFromUser() };

    std::cout << x << "+" << y << "=" << x+y << "\n";

    return 0;
}