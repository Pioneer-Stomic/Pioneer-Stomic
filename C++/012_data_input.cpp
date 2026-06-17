#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    cout << "请输入一个整数: ";
    cin >> i;
    cout << "你输入的整数是: " << i << '\n';

    float f;
    cout << "请输入一个浮点数: ";
    cin >> f;
    cout << "你输入的浮点数是: " << f << '\n';

    char ch;
    cout << "请输入一个字符: ";
    cin >> ch;
    cout << "你输入的字符是: " << ch << '\n';

    string str;
    cout << "请输入一个字符串: ";
    cin >> str; // 只能输入一个单词，遇到空格会停止
    cout << "你输入的字符串是: " << str << '\n';

    bool flag;
    cout << "请输入一个布尔值 (0 或 1): ";
    cin >> flag;
    cout << "你输入的布尔值是: " << flag << '\n';

    return 0;
}