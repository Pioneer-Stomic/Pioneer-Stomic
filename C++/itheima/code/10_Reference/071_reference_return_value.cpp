#include <iostream>

// #define SWITCH

#ifdef SWITCH
int& test01()
{
    int a{ 10 };
    return a;
}
#endif

int& test02()
{
    static int a{ 10 };
    return a;
}

int main()
{
#ifdef SWITCH 
    int &ref1{ test01() }; 
    /* 
    Never return the reference of a local variable, 
    which will be destroyed after the function ends.
    */
    std::cout << "ref1 = " << ref1 << '\n';
    std::cout << "ref1 = " << ref1 << '\n';
#endif

    int &ref2{ test02() };
    
    std::cout << "ref2 = " << ref2 << '\n';
    std::cout << "ref2 = " << ref2 << '\n';   

    test02() = 20; // The function returns static reference can be an lvalue.

    std::cout << "ref2 = " << ref2 << '\n';
    std::cout << "ref2 = " << ref2 << '\n';

    return 0;
}