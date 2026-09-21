#include <iostream>

void swap01(int* p1, int* p2);
void swap02(int* p1, int* p2);

int main()
{
    int num1{ 10 };
    int num2{ 20 };

    int* p1{ &num1 };
    int* p2{ &num2 };

    std::cout << "Addresses of num1 and num2 in main() before swapping: " << p1 << " " << p2 << '\n';
    std::cout << "Addresses of p1 and p2 in main() before swapping: " << &p1 << " " << &p2 << '\n' << '\n';

    swap01(&num1, &num2);
    std::cout << "Values of num1 and num2 in main() after swapping using swap01(): " << num1 << " " << num2 << '\n';
    std::cout << "Addresses of num1 and num2 in main() after swapping using swap01(): " << p1 << ' ' << p2 << '\n' << '\n';

    num1 = 10;
    num2 = 20;

    swap02(&num1, &num2);
    std::cout << "Values of num1 and num2 in main() after swapping using swap02(): " << num1 << " " << num2 << '\n';
    std::cout << "Addresses of num1 and num2 in main() after swapping using swap02(): " << p1 << ' ' << p2 << '\n' << '\n';    

    return 0;
}

// Pass by address: swapping the values pointed to by the pointers
// changes both the actual and formal parameters.
void swap01(int* p1, int* p2)
{  
    int temp{ *p1 };
    *p1 = *p2;
    *p2 = temp;

    std::cout << "Addresses of num1 and num2 in swap01(): " << p1 << " " << p2 << '\n';
    std::cout << "Addresses of p1 and p2 in swap01(): " << &p1 << " " << &p2 << '\n';      
    std::cout << "Values of num1 and num2 in swap01(): " << *p1 << " " << *p2 << '\n';
}

// Swapping memory addresses: swapping what the formal parameter pointers
// point to changes only the formal parameters.
void swap02(int* p1, int* p2)
{
    int* temp{ p1 };
    p1 = p2;
    p2 = temp;

    std::cout << "Addresses of num1 and num2 in swap02(): " << p1 << " " << p2 << '\n';  
    std::cout << "Addresses of p1 and p2 in swap02(): " << &p1 << " " << &p2 << '\n';  
    std::cout << "Values of num1 and num2 in swap02(): " << *p1 << " " << *p2 << '\n';
}