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
    std::cout << "姓名：" << p->name << '\n';
    std::cout << "年龄：" << p->age << '\n';
    std::cout << "分数：" << p->score << '\n';
}

int main()
{
    Student s{ "张三", 18, 100 };
    printInfo(&s);
    
    return 0;
}