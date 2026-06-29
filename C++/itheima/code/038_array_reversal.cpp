#include <iostream>

int main()
{
    // 输出原数组
    int arr[5]= { 1, 3, 2, 4, 5 };

    for(int i{ }; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    // 输出逆置数组
    int start{ };
    int end{ 4 };

    while(start < end)
    {
        int temp{ arr[start] };
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for(int i{ }; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}