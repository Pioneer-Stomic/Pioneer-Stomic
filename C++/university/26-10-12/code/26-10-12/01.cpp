#include <iostream>

#define PI 3.14145926

int main()
{
    double radius{ };
    double height{ };

    std::cout << "Enter the radius: ";
    std::cin >> radius;
    std::cout << "Enter the height: ";
    std::cin >> height;

    double circle_parameter{ 2 * radius * PI };
    double circle_area{ radius * radius * PI};
    double sphere_surface_area{ 4 * radius * radius * PI };
    double sphere_volume{ 4 / 3 * radius * radius * radius * PI};
    double cylinder_volume{ radius * radius * height * PI};

    std::cout << "The parameter of the circle is: " << circle_parameter << '\n';
    std::cout << "The area of the circle is: " << circle_area << '\n';
    std::cout << "The surface area of the sphere is: " << sphere_surface_area << '\n';
    std::cout << "The volume of the sphere is: " << sphere_volume << '\n';
    std::cout << "The volume of the cylinder is: " << cylinder_volume << '\n';

    return 0;
}