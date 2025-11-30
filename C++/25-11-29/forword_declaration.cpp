#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << "The sum of 2 and 3 is " << add(2, 3) << "\n";

    return 0;
}

int add(int x, int y)
{
    return x + y;
}