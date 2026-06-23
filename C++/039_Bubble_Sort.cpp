#include <iostream>

int main()
{
    // 用户输入整数
    int arr[8];

    std::cout << "请输入8个整数, 每输入一个空一格: ";
    
    for(int i{ }; i < 8; i++)
    {
        std::cin >> arr[i];
    }

    // 进行冒泡排序
    for(int i{ }; i < 8 - 1; i++)
    {
        for(int j{ }; j < 8 - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
            int temp{ arr[j] };
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }

    // 输出升序数组
    std::cout << "升序数组: ";
    
    for(int i{ }; i < 8; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}