#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer\n";

    int input;
    std::cin >> input;

    return input;
}

void doPrint(int x, int y)
{
    std::cout << x << "+" << y << "=" << x + y << "\n";
}

int main()
{
    doPrint( getValueFromUser() , getValueFromUser() );
    
    return 0;
}