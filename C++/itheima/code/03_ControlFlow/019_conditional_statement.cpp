#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "You entered: " << num << '\n';

    if (num > 0 && num%2 == 0)
    {
        cout << "You entered an even number.\n";
    }
    else if (num > 0 && num%2 == 1)
    {
        cout << "You entered an odd number.\n";
    }
    else
    {
        cout << "The number you entered isn't a positive integer.\n";
    }

    return 0;
}