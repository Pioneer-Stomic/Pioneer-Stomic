#include <iostream>

int* func()
{
    int* p{ new int(10) };
    /*
    This operation will save the data to heap area,
    where the data will not be destroyed after the function ends.
    */
    return p;
}

int main()
{
    int* p{ func() };
    
    std::cout << *p << '\n';
    std::cout << *p << '\n';

    return 0;
}