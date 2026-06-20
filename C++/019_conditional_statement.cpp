#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "请输入一个正整数：";
    cin >> num;

    cout << "你输入了：" << num << '\n';

    if (num > 0 && num%2 == 0)
    {
        cout << "你输入的正整数是偶数\n";
    }
    else if (num > 0 && num%2 == 1)
    {
        cout << "你输入的正整数是奇数\n";
    }
    else
    {
        cout << "你输入的不是正整数\n";
    }

    return 0;
}