#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    cout << "bool flag: " << flag << endl;

    flag = false;
    cout << "bool flag: " << flag << endl;

    cout << "bool 占用的内存为 " << sizeof(bool) << " 字节" << endl;

    return 0;
}