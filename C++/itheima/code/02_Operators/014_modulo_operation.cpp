#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    cout << num1 << " mod " << num2 << " = " << num1 % num2 << '\n';

    return 0;
}