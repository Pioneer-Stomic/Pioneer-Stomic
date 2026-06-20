#include <iostream>
using namespace std;

int main()
{
    int a1 = 10;
    cout << "a1 = " << ++a1 << '\n';

    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = " << a2 << ", b2 = " << b2 << '\n';

    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = " << a3 << ", b3 = " << b3 << '\n';

    return 0;
}