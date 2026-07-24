#include <iostream>
#include <string>

class Student
{
public:
    std::string name{ };
    int id{ };

    void getName(std::string getName)
    {
        name = getName;
    }

    void getID(int getID)
    {
        id = getID;
    }

    void showInfo()
    {
        std::cout << "Name: " << name << '\n';
        std::cout << "ID: " << id << '\n' << '\n';
    }
};

int main()
{
    Student stu1;

    stu1.getName("Student_A");
    stu1.getID(1);

    stu1.showInfo();

    Student stu2;

    stu2.getName("Student_B");
    stu2.getID(2);

    stu2.showInfo();

    return 0;
}