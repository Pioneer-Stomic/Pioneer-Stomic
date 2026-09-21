#include <iostream>
#include <string>

struct Student
{
    std::string name{ };
    int age{ };
    int score{ };
};

void printInfo(const Student* p)
{
    std::cout << "Name: " << p->name << '\n';
    std::cout << "Age: " << p->age << '\n';
    std::cout << "Score: " << p->score << '\n';
}

int main()
{
    Student s{ "Student A", 18, 100 };
    printInfo(&s);
    
    return 0;
}