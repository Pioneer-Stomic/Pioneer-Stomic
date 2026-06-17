#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'a';
    cout << "char ch1: " << ch1 << endl;
    
    cout << "char ch1 占用的内存为 " << sizeof(char) << " 字节" << endl;

    cout << (int)ch1 << endl;

    return 0;
}