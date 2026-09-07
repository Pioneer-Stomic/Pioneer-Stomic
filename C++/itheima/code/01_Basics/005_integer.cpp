#include <iostream>
using namespace std;

int main()
{
    short num1 = 10; // 2 bytes, range：-32768 ~ 32767
    int num2 = 20;   // 4 bytes, range：-2147483648 ~ 2147483647
    long num3 = 30;  // 4 bytes or 8 bytes，depends on the compiler and platform, range：-2147483648 ~ 2147483647 or -9223372036854775808 ~ 9223372036854775807
    long long num4 = 40; // 8 bytes, range：-9223372036854775808 ~ 9223372036854775807

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;   

    return 0;
}