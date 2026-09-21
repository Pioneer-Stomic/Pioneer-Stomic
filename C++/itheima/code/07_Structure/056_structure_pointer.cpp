#include <iostream>
#include <string>

struct Student
{
    std::string name{ };
    int age{ };
    int score{ };
};

int main()
{
    Student s{ "Student A", 18, 100 };
    
    Student* p{ &s };

    std::cout << "Name: " << p->name << '\n';
    std::cout << "Age: " << p->age << '\n';
    std::cout << "Score: " << p->score << '\n';
    
    return 0;
}