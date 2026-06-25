#include <iostream>

int main()
{
    int arr[2][3] = 
    {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    std::cout << "二维数组大小为 " << sizeof(arr) << " 个字节\n";
    std::cout << "二维数组第一行大小为 " << sizeof(arr[0]) << " 个字节\n";
    std::cout << "二维数组第一个元素大小为 " << sizeof(arr[0][0]) << " 个字节\n";
    
    std::cout << "二维数组共有 " << sizeof(arr) / sizeof(arr[0]) << " 行\n";
    std::cout << "二维数组共有 " << sizeof(arr[0]) / sizeof(arr[0][0]) << " 列\n";    

    std::cout << "二维数组首地址为 " << (long long)arr << '\n';
    std::cout << "二维数组第一行首地址为 " << (long long)arr[0] << '\n';
    
    int n{ 1 };
    for(int i{ }; i < 2; i++)
    {
        for( int j{ }; j < 3; j++)
        {
            std::cout << "二维数组第 " << n << " 个元素首地址为 " << (long long)&(arr[i][j]) << '\n';
            n++;
        }
    }

    return 0;
}