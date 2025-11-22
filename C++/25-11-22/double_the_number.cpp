#include <iostream>

int main()
{
    std::cout << "Enter an integer:" << "\n";
    
    int num{ };
    std::cin >> num;

    std::cout << "Double this number is:" << "\n" << num * 2 << "\n";

    return 0;
}