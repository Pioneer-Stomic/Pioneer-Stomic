#include <iostream>
#include <string>

int main()
{
    int scores[3][3] = 
    {
        { 100, 70, 80 },
        { 60, 50, 90 },
        { 80, 70, 90 }
    };

    std::string names[3] = { "张三", "李四", "王五" };

    // 显示三位同学单科分数
    for(int i{ }; i < 3; i++)
    {
        std::cout << names[i] << "的单科分数分别为 \n";

        for(int j{ }; j < 3; j++ )
        {
            std::cout << scores[i][j] << '\t';
        }

        std::cout << '\n';
    }

    // 统计三位同学各自总分
    for(int i{ }; i < 3; i++)
    {
        int sum{ };

        for(int j{ }; j < 3; j++)
        {
            sum += scores[i][j];
        }

        std::cout << names[i] << "的总分为 " << sum << " 分\n";
    }

    return 0;
}