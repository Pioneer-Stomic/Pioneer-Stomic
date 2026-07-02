#include <iostream>
#include <string>

struct Student
{
    std::string name{ };
    int age{ };
    int score{ };
};

// 地址传递
void printInfo1(Student* p)
{
    std::cout << "姓名：" << p->name << '\n';
    std::cout << "年龄：" << p->age << '\n';
    std::cout << "分数：" << p->score << '\n';
    std::cout << '\n';
}

//值传递
void printInfo2(Student s)
{
    std::cout << "姓名：" << s.name << '\n';
    std::cout << "年龄：" << s.age << '\n';
    std::cout << "分数：" << s.score << '\n';
}

int main()
{
    Student s1{ "张三", 18, 100};
    printInfo1(&s1);

    Student s2{ "李四", 19, 80 };
    printInfo2(s2);

    return 0;
}