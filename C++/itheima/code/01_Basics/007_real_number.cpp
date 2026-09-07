#include <iostream>
using namespace std;

int main()
{
    float num1 = 3.14f;
    cout << "float num1: " << num1 << endl;
    cout << "float num1 occupies " << sizeof(float) << " bytes" << endl;

    double num2 = 3.141592653589793;
    cout << "double num2: " << num2 << endl;
    cout << "double num2 occupies " << sizeof(double) << " bytes" << endl;

    float num3 = 1.23e-4f; // Floating-point number in scientific notation.
    cout << "float num3: " << num3 << endl;

    return 0;
}