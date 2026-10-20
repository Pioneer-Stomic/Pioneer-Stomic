#include <iostream>

void printSum(int start, int end)
{
    for(int i{ start }; i < end; i++)
    {
        std::cout << i << " + ";
    }

    std::cout << end << '\n';
}

int main()
{
    int sum{ };
    bool isExist{ };
    int getNum{ };
    std::cin >> getNum;

    for(int i{ 1 }; i < getNum; i++)
    {
        for(int j{ i }; j < getNum; j++)
        {
            sum += j;

            if(sum == getNum)
            {
                printSum(i, j);
                isExist = true;
            }
        }

        sum = 0;
    }

    if(isExist == false)
    {
        std::cout << "NONE\n";
    }

    return 0;
}