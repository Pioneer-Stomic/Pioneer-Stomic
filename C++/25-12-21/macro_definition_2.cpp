#include <iostream>

#define PRINT

void doPrint()
{
#ifdef PRINT
    std::cout << "Print On\n";
#endif

#ifndef PRINT
    std::cout << "Print Off\n";
#endif
}

int main()
{
    doPrint();

    return 0;
}