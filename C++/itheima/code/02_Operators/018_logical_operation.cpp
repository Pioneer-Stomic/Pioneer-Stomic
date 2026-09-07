#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "NOT: \n";
    cout << (!num1) << '\n';
    cout << (!!num1) << '\n';

    cout << "AND: \n";
    cout << (num1 && num2) << '\n';
    cout << (num1 && !num2) << '\n';

    cout << "OR: \n";
    cout << (num1 || num2) << '\n';
    cout << (num1 || !num2) << '\n';
    cout << (!num1 || !num2) << '\n';

    return 0;
}