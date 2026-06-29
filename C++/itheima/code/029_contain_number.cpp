#include <iostream>

int main()
{
    for(int num{ }; num < 100; num++)
    {
        // 输出个位或十位含"7"的数字
        if(num % 10 == 7 || num / 10 == 7)
        {
            std::cout << num << '\n';
        }
    }

    return 0;
}