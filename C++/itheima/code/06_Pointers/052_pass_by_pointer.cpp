#include <iostream>

void swap01(int* p1, int* p2);
void swap02(int* p1, int* p2);

int main()
{
    int num1{ 10 };
    int num2{ 20 };

    int* p1{ &num1 };
    int* p2{ &num2 };

    std::cout << "交换前main中num1, num2的地址: " << p1 << " " << p2 << '\n';
    std::cout << "交换前main中p1, p2的地址: " << &p1 << " " << &p2 << '\n' << '\n';

    swap01(&num1, &num2);
    std::cout << "使用swap01交换后main中num1, num2的值: " << num1 << " " << num2 << '\n';
    std::cout << "使用swap01交换后main中num1, num2的地址: " << p1 << ' ' << p2 << '\n' << '\n';

    num1 = 10;
    num2 = 20;

    swap02(&num1, &num2);
    std::cout << "使用swap02交换后main中num1, num2的值: " << num1 << " " << num2 << '\n';
    std::cout << "使用swap02交换后main中num1, num2的地址: " << p1 << ' ' << p2 << '\n' << '\n';    

    return 0;
}

// 地址传递：交换指针指向的值，改变实参和形参
void swap01(int* p1, int* p2)
{  
    int temp{ *p1 };
    *p1 = *p2;
    *p2 = temp;

    std::cout << "swap01中num1, num2的地址: " << p1 << " " << p2 << '\n';
    std::cout << "swap01中p1, p2的地址: " << &p1 << " " << &p2 << '\n';      
    std::cout << "swap01中num1, num2的值: " << *p1 << " " << *p2 << '\n';
}

// 交换内存：交换形参指针的指向，仅改变形参
void swap02(int* p1, int* p2)
{
    int* temp{ p1 };
    p1 = p2;
    p2 = temp;

    std::cout << "swap02中num1, num2的地址: " << p1 << " " << p2 << '\n';  
    std::cout << "swap02中p1, p2的地址: " << &p1 << " " << &p2 << '\n';  
    std::cout << "swap02中num1, num2的值: " << *p1 << " " << *p2 << '\n';
}