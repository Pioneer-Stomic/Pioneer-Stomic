#include <iostream>
#include <string>
#include <ctime>

struct Student
{
    std::string name{ };
    int score{ };
};

// 给学生信息赋值
void getInfo(Student stuArr[], int len)
{
    for(int i{ }; i < len; i++)
    {
        // 获取姓名
        std::string nameSeed{ "ABCDE" };        
        stuArr[i].name = "同学";
        stuArr[i].name += nameSeed[i];
        
        // 获取分数(随机数)
        stuArr[i].score = rand() % 61 + 40;
    }
}

// 对学生分数进行冒泡排序
void bubbleSort(Student stuArr[], int len)
{
    for(int i{ }; i < len - 1 ; i++)
    {
        for(int j{ }; j < len - i - 1; j++)
        {
            if(stuArr[j].score > stuArr[j + 1].score)
            {
                Student temp{ stuArr[j] };
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
        }
    }
}

// 输出学生信息
void printInfo(Student stuArr[], int len)
{
    for(int i{ }; i < len; i++)
    {
        std::cout << "学生姓名：" << stuArr[i].name << "  " << "分数：" << stuArr[i].score << '\n';
    }
}

int main()
{
    srand((unsigned int)time(NULL));

    Student stuArr[5];
    int len{ sizeof(stuArr) / sizeof(stuArr[0]) };

    getInfo(stuArr, len);

    std::cout << "排列前：" << '\n';
    printInfo(stuArr, len);
    
    bubbleSort(stuArr, len);

    std::cout << '\n' << "排列后：" << '\n';
    printInfo(stuArr, len);

    return 0;
}