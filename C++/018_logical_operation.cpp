#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "逻辑非：\n";
    cout << (!num1) << '\n';
    cout << (!!num1) << '\n';

    cout << "逻辑与：\n";
    cout << (num1 && num2) << '\n';
    cout << (num1 && !num2) << '\n';

    cout << "逻辑或：\n";
    cout << (num1 || num2) << '\n';
    cout << (num1 || !num2) << '\n';
    cout << (!num1 || !num2) << '\n';

    return 0;
}