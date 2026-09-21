#include <iostream>
#include <string>

struct Student
{
    std::string name{ };
    int age{ };
    int score{ };
};

// Pass by address
void printInfo1(Student* p)
{
    std::cout << "Name: " << p->name << '\n';
    std::cout << "Age: " << p->age << '\n';
    std::cout << "Score: " << p->score << '\n';
    std::cout << '\n';
}

// Pass by value
void printInfo2(Student s)
{
    std::cout << "Name: " << s.name << '\n';
    std::cout << "Age: " << s.age << '\n';
    std::cout << "Score: " << s.score << '\n';
}

int main()
{
    Student s1{ "Student A", 18, 100 };
    printInfo1(&s1);

    Student s2{ "Student B", 19, 80 };
    printInfo2(s2);

    return 0;
}