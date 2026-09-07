#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    cout << "Enter an integer : ";
    cin >> i;
    cout << "The integer you entered is: " << i << '\n';

    float f;
    cout << "Enter a floating-point number: ";
    cin >> f;
    cout << "The floating-point number you entered is: " << f << '\n';

    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "The character you entered is: " << ch << '\n';

    string str;
    cout << "Enter a string: ";
    cin >> str; // Limited to one word; terminates at a space
    cout << "The string you entered is: " << str << '\n';

    bool flag;
    cout << "Enter a Boolean value (0 or 1): ";
    cin >> flag;
    cout << "The Boolean value you entered is: " << flag << '\n';

    return 0;
}