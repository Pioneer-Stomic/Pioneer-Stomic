#include <iostream>
#include <string>
#include <iomanip>

struct Student
{
    std::string name{ };
    int age{ };
    int score{ };
};

int main()
{
    Student s1{ };
    s1.name = "Student A";
    s1.age = 18;
    s1.score = 100;

    std::cout << "Name: " << s1.name << "\n";
    std::cout << "Age: " << s1.age << "\n";
    std::cout << "Score: " << s1.score << '\n';
    std::cout << '\n';
    
    Student s2{ "Student B", 19, 80 };

    std::cout << "Name: " << s2.name << "\n";
    std::cout << "Age: " << s2.age << "\n";
    std::cout << "Score: " << s2.score << '\n';

    return 0;
}