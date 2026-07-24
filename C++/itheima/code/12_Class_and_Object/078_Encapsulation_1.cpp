#include <iostream>

const double PI{ 3.14 };

class Circle
{
public:
    double radius{ };

    double calcCircum()
    {
        return 2 * PI * radius;
    }
};

int main()
{
    Circle circ;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> circ.radius;

    std::cout << "The circumference of the circle: " << circ.calcCircum() << '\n';

    return 0;
}