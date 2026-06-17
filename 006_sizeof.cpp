#include <iostream>
using namespace std;

int main()
{
    short num1 = 19;
    cout << "short:占用的内存为 " << sizeof(short) << " 字节" << endl;

    int num2 = 29;
    cout << "int:占用的内存为 " << sizeof(int) << " 字节" << endl;

    long num3 = 39;
    cout << "long:占用的内存为 " << sizeof(long) << " 字节" << endl;

    long long num4 = 49;
    cout << "long long:占用的内存为 " << sizeof(long long) << " 字节" << endl;

    return 0;
}