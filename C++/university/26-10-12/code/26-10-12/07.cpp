#include <iostream>
#include <cmath>

int main()
{
    double a{ };
    double b{ };
    double c{ };

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    std::cout << "Equation: " << a << "x^2+" << b << "x+" << c << '\n';

    double result1{ };
    double result2{ };
    double delta{ b * b - 4 * a * c };

    if(delta > 0 || delta == 0)
    {
        result1 = { ( -b + sqrt(delta)) / 2 * a };
        result2 = { ( -b - sqrt(delta)) / 2 * a };

        std::cout << "x1 = " << result1 << '\n';
        std::cout << "x2 = " << result2 << '\n';
    }
    else
    {
        std::cout << "x1 = " << -b / 2 * a << " + " << sqrt(-delta) << "i\n";
        std::cout << "x2 = " << -b / 2 * a << " - " << sqrt(-delta) << "i\n";
    }

    return 0;
}