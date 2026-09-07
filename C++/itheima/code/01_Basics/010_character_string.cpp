#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str1[] = "Hello, World!";
    cout << "str1: " << str1 << endl;
    cout << "str1 occupies " << sizeof(str1) << " bytes" << endl;

    string str2 = "Hello, C++!";
    cout << "str2: " << str2 << endl;
    cout << "str2 occupies " << sizeof(str2) << " bytes" << endl;

    return 0;
}