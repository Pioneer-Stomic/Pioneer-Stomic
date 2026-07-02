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
        { "张三", 18, 100 },
        { "李四", 19, 80 },
        { "王五", 17, 60 }
    };

    stuArr[2].score = 65;
    stuArr[1].age = 20;

    for(int i{ }; i < 3; i++)
    {
        std::cout << "姓名：" << stuArr[i].name << '\n';
        std::cout << "年龄：" << stuArr[i].age << '\n';
        std::cout << "分数：" << stuArr[i].score << '\n';
        std::cout << '\n';
    }

    return 0;
}