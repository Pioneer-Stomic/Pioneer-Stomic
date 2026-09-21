#include <iostream>

int main()
{
    int a{ 10 };
    int b{ 20 };
    int c{ 20 };

    // Pointer to constant
    const int* p1{ &a };
    std::cout << "*p1 before modification: " << *p1 << '\n';

    p1 = &b;
    std::cout << "*p1 after modification: " << *p1 << '\n';

    
    // Error: The variable pointed by a pointer to constant can be changed,
    // but the variable's value cannot be modified.
    // *p1 = 20;

    // Constant pointer
    int* const p2{ &a };
    std::cout << "*p2 before modification: " << *p2 << '\n';

    *p2 = 20;
    std::cout << "*p2 after modification: " << *p2 << '\n';
    
    // Error: The value that the constant pointer points can be modified,
    // but the pointer cannot be redirected.
    // p2 = &b;

    const int* const p3{ &a };
    
    // Error: When const modifies both the pointer and the constant,
    // neither the variable nor the variable's value can be modified.
    // p3 = &b;
    // *p3 = 20;

    return 0;
}