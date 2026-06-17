#include <iostream>
using namespace std;

int main()
{
    short num1 = 10; // 2字节,范围：-32768 ~ 32767
    int num2 = 20;   // 4字节,范围：-2147483648 ~ 2147483647
    long num3 = 30;  // 4字节或8字节，取决于编译器和平台,范围：-2147483648 ~ 2147483647 或 -9223372036854775808 ~ 9223372036854775807
    long long num4 = 40; // 8字节,范围：-9223372036854775808 ~ 9223372036854775807

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;   

    return 0;
}