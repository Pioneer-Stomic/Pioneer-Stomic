#include <iostream>
using namespace std;

int main()
{
    short num1 = 19;
    cout << "short: occupies " << sizeof(short) << " bytes" << endl;

    int num2 = 29;
    cout << "int: occupies " << sizeof(int) << " bytes" << endl;

    long num3 = 39;
    cout << "long: occupies " << sizeof(long) << " bytes" << endl;

    long long num4 = 49;
    cout << "long long: occupies " << sizeof(long long) << " bytes" << endl;

    return 0;
}