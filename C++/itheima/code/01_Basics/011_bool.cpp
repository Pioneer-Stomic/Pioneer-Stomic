#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    cout << "bool flag: " << flag << endl;

    flag = false;
    cout << "bool flag: " << flag << endl;

    cout << "bool occupies " << sizeof(bool) << " bytes" << endl;

    return 0;
}