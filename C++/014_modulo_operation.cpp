#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout << "请输入第一个整数：";
    cin >> num1;
    cout << "请输入第二个整数：";
    cin >> num2;

    cout << num1 << " mod " << num2 << " = " << num1 % num2 << '\n';

    return 0;
}