#include <iostream>
#include <string>

struct Date
{
    int year{ };
    int month{ };
    int day{ };
};

struct Student
{
    std::string name{ };
    Date birth{ };
    int score{ };
};

void printDate(int year, int month, int day)
{
    std::cout << "Date of birth: " << year << "/" << month << "/" << day << '\n';
}

void printInfo(std::string name, Date birth, int score)
{
    std::cout << "Name: " << name << '\n';
    printDate(birth.year, birth.month, birth.day);
    std::cout << "Score: " << score << '\n';
    std::cout << '\n';
}

int main()
{
    Date d1{ 2008, 7, 1 };
    Student s1 {"Student A", d1, 100};

    printInfo(s1.name, s1.birth, s1.score);

    Date d2{ };
    Student s2{ };

    s2.name = "Student B";
    s2.score = 80;
    s2.birth.year = 2010;
    s2.birth.month = 12;
    s2.birth.day = 30;

    printInfo(s2.name, s2.birth, s2.score);
    
    return 0;
}