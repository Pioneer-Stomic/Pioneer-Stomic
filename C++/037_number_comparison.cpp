#include <iostream>

int main()
{
    int arr[5];

    for(int i{ }; i < 5; i++)
    {
        std::cout << "请输入第 " << i + 1 << " 个整数: ";
        std::cin >> arr[i];
    }

    int max;

    for(int i{ }; i < 5; i++)
    {
        max = ( max < arr[i] ? arr[i] : max );
    }

    std::cout << "最大的整数是: " << max <<'\n';

    return 0;
}