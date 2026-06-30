#include <iostream>

void swap01(int* p1, int* p2);
void swap02(int* p1, int* p2);

int main()
{
    int num1{ 10 };
    int num2{ 20 };

    int* p1{ &num1 };
    int* p2{ &num2 };

    std::cout << "main: " << p1 << " " << p2 << '\n';

    swap01(&num1, &num2);
    std::cout << "main: " << num1 << " " << num2 << '\n';

    num1 = 10;
    num2 = 20;

    swap02(&num1, &num2);
    std::cout << "main: " << num1 << " " << num2 << '\n';

    return 0;
}

// 地址传递：交换指针指向的值，改变实参和形参
void swap01(int* p1, int* p2)
{
    int** q1{ &p1 };
    int** q2{ &p2 };
   
    int temp{ *p1 };
    *p1 = *p2;
    *p2 = temp;

    std::cout << "swap01: " << p1 << " " << p2 << '\n';
    std::cout << "pswap01: " << q1 << " " << q2 << '\n';      

    std::cout << "nswap01: " << *p1 << " " << *p2 << '\n';
}

// 交换内存：交换形参指针的指向，仅改变形参
void swap02(int* p1, int* p2)
{
    int** q1{ &p1 };
    int** q2{ &p2 };
    
    int *temp{ p1 };
    p1 = p2;
    p2 = temp;

    std::cout << "swap02: " << p1 << " " << p2 << '\n';  
    std::cout << "pswap02: " << q1 << " " << q2 << '\n';  

    std::cout << "nswap02: " << *p1 << " " << *p2 << '\n';
}