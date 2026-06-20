#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    cout << "num = " << num << '\n';

    num = 10;
    num += 6;
    cout << "num = " << num << '\n';

    num = 10;
    num -= 5;
    cout << "num = " << num << '\n';

    num = 10;
    num *= 2;
    cout << "num = " << num << '\n';

    num = 10;
    num /= 4;
    cout << "num = " << num << '\n';

    num = 10;
    num %= 3;
    cout << "num = " << num << '\n';

    return 0;
}