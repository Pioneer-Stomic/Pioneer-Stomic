#include <iostream>
#include <ctime>

int main()
{
    std::cout << "欢迎使用猜数游戏!\n";

    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    // std::cout << num << '\n';

    int getValue{ };
    int n = 10;

    while(n >= 1)
    {
        std::cout << "请输入一个整数: ";
        std::cin >> getValue;

        if(getValue > num)
        {
            std::cout << "猜大了\n";
            n--;
            std::cout << "你还剩 " << n << " 次机会\n";
        }
        else if(getValue < num)
        {
            std::cout << "猜小了\n";
            n--;
            std::cout << "你还剩 " << n << " 次机会\n";
        }
        else
        {
            break;
        }
    }
    if(n == 0)
    {
        std::cout << "对不起, 机会用完了\n";
    }
    else
    {
        std::cout << "你猜对了! \n";
    }

    return 0;
}
