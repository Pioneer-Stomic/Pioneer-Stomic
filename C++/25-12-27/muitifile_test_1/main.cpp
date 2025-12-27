#include <iostream>

int add(int x, int y);

int main()
{
    int x{ };
    int y{ };

    std::cout << "Input two numbers:\n";
    std::cin >> x >> y;

    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << "\n";

    return 0;
}