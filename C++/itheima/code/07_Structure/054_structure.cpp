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
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    std::cout << "姓名：" << s1.name << "\n";
    std::cout << "年龄：" << s1.age << "\n";
    std::cout << "分数：" << s1.score << '\n';
    std::cout << '\n';
    
    Student s2{ "李四", 19, 80 };

    std::cout << "姓名：" << s2.name << "\n";
    std::cout << "年龄：" << s2.age << "\n";
    std::cout << "分数：" << s2.score << '\n';

    return 0;
}