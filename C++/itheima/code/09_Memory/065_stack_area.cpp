#include <iostream>

int* func()
{
    int num{ 10 };
    return &num;
}

int main()
{
    int* p{ func() };
    
    /*
    The operations below are not allowed.
    When a function ends, the local variables in it will be destroyed,
    and its memory address is no longer valid,
    Accessing it will cause undefined behavior.
    */
    std::cout << *p << '\n';
    // May print 10 if the old value hasn't been overwritten yet.
    std::cout << *p << '\n';
    // May print a different value, or crash, or produce garbage.

    return 0;
}