#include <iostream>
#include <string>
#include <ctime>

struct Student
{
    std::string stuName{ };
    int score{ };
};

struct Teacher
{
    std::string tchName{ };
    Student stuArr[5];
};

// 给老师和学生的信息赋值
void allocateSpace(Teacher tchArr[], int len)
{
    std::string nameSeed{ "ABCDE" };
    
    // 给老师赋值
    for(int i{ }; i < 3; i++)
    {
        tchArr[i].tchName = "Teacher_";
        tchArr[i].tchName += nameSeed[i];
        
        for(int j{ }; j < 5; j++)
        {
            // 给学生赋值
            int random = rand() % 61 + 40;
            
            tchArr[i].stuArr[j].stuName = "Student_";
            tchArr[i].stuArr[j].stuName += nameSeed[j];
            tchArr[i].stuArr[j].score = random;
        }
    }
}

// 打印老师和学生的信息
void printInfo(Teacher tchArr[], int len)
{
    for(int i{ }; i < 3; i++)
    {
        // 打印老师信息
        std::cout << "老师姓名：" << tchArr[i].tchName << '\n' << '\n';

        for(int j{ }; j < 5; j++)
        {
            // 打印学生信息
            std::cout << "\t学生姓名: " << tchArr[i].stuArr[j].stuName << '\n';
            std::cout << "\t学生分数: " << tchArr[i].stuArr[j].score << '\n' << '\n';
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    
    Teacher tchArr[3];

    int len{ sizeof(tchArr) / sizeof(tchArr[0]) };
    
    allocateSpace(tchArr, len);

    printInfo(tchArr, len);

    return 0;
}