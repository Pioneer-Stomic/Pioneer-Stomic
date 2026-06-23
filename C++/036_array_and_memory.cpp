#include <iostream>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };

    std::cout << "整个数组占用的内存为: " << sizeof(arr) << " 个字节\n";
    std::cout << "一个元素占用的内存为: " << sizeof(arr[0]) << " 个字节\n";
    std::cout << "数组中共有 " << sizeof(arr) / sizeof(arr[0]) << " 个元素\n";

    std::cout << "数组的首地址为(十六进制): " << arr << '\n';
    std::cout << "数组的首地址为(十进制): " << (long long)arr << '\n';
    
    for(int i{ }; i < 5; i++)
    {
        std::cout << "arr[" << i << "] 的地址为" << (long long)&arr[i] << '\n';
    }

    return 0;
}