#include <iostream>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };

    int* p{ arr };

    for(int i{ }; i < 5; i++)
    {
        std::cout << "数组中第 " << i + 1 << " 个数字占用的内存地址为 " << p << '\n';
        std::cout << "数组中第 " << i + 1 << " 个数字为 " << *p << '\n';

        p++;
    }

    return 0;
}