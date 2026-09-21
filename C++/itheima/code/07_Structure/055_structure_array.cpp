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
    Student stuArr[3] = 
    {
        { "Student A", 18, 100 },
        { "Student B", 19, 80 },
        { "Student C", 17, 60 }
    };

    stuArr[2].score = 65;
    stuArr[1].age = 20;

    for(int i{ }; i < 3; i++)
    {
        std::cout << "Name: " << stuArr[i].name << '\n';
        std::cout << "Age: " << stuArr[i].age << '\n';
        std::cout << "Score: " << stuArr[i].score << '\n';
        std::cout << '\n';
    }

    return 0;
}