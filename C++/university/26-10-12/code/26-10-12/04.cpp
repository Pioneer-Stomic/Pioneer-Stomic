#include <iostream>

int main()
{
    double carat{ };
    double jin{ };
    double pound{ };
    double ounce{ };
    double gram{ };

    std::cout << "Enter the carats: ";
    std::cin >> carat;

    gram = 5 * carat;
    jin = 500 * gram;
    pound = 454 * gram;
    ounce = pound / 16;
    
    std::cout << "Carats: " << carat << '\n';
    std::cout << "Jins: " << jin << '\n';
    std::cout << "Pounds: " << pound << '\n';
    std::cout << "Ounces: " << ounce << '\n';

    return 0;
}