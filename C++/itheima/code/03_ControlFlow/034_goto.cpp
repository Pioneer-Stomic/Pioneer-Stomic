#include <iostream>

int main()
{
    std::cout << "1\n";

    goto FLAG;

    std::cout << "2\n";
    
    std::cout << "3\n";

    FLAG:
    std::cout << "4\n";
    
    std::cout << "5\n";
    
    std::cout << "6\n";
    
    return 0;
}