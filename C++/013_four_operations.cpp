#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    
    cout << "请输入第一个数字：";
    cin >> num1;
    cout << "请输入第二个数字：";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
    cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
    cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
    cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
    
    return 0;
}