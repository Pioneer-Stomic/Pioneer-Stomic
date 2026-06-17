#include <iostream>
using namespace std;

int main()
{
    float num1 = 3.14f;
    cout << "float num1: " << num1 << endl;
    cout << "float num1 占用的内存为 " << sizeof(float) << " 字节" << endl;

    double num2 = 3.141592653589793;
    cout << "double num2: " << num2 << endl;
    cout << "double num2 占用的内存为 " << sizeof(double) << " 字节" << endl;

    float num3 = 1.23e-4f; // 科学计数法表示的浮点数
    cout << "float num3: " << num3 << endl;

    return 0;
}