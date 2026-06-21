#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    int c = 0;

    c = (a > b ? a : b);
    cout << "c= " << c << '\n';

    (a > b ? a : b) = 100;
    cout << "a= " << a << '\n';
    cout << "b= " << b << '\n';
}