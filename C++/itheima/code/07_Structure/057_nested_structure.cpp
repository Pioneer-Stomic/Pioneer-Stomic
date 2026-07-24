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
    std::cout << "出生日期：" << year << " 年 " << month << " 月 " << day << " 日" << '\n';
}

void printInfo(std::string name, Date birth, int score)
{
    std::cout << "姓名：" << name << '\n';
    printDate(birth.year, birth.month, birth.day);
    std::cout << "分数：" << score << '\n';
    std::cout << '\n';
}

int main()
{
    Date d1{ 2008, 7, 1 };
    Student s1 {"张三", d1, 100};

    printInfo(s1.name, s1.birth, s1.score);

    Date d2{ };
    Student s2{ };

    s2.name = "李四";
    s2.score = 80;
    s2.birth.year = 2010;
    s2.birth.month = 12;
    s2.birth.day = 30;

    printInfo(s2.name, s2.birth, s2.score);
    
    return 0;
}