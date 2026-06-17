#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str1[] = "Hello, World!";
    cout << "str1: " << str1 << endl;
    cout << "str1 占用的内存为 " << sizeof(str1) << " 字节" << endl;

    string str2 = "Hello, C++!";
    cout << "str2: " << str2 << endl;
    cout << "str2 占用的内存为 " << sizeof(str2) << " 字节" << endl;

    return 0;
}