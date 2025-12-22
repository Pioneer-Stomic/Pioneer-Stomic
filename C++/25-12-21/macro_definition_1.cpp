#include <iostream>

#define PRINT_CLL

int main()
{
#ifdef PRINT_CLL     // or #if defined(PRINT_CLL)
    std::cout << "CLL\n";
#endif

#ifndef PRINT_STOMIC // or #if !defined(PRINT_STOMIC)
    std::cout << "STOMIC\n";
#endif

#if 0
    std::cout << "Print Off\n";
#endif

#if 1
    std::cout << "Print On\n";
#endif

    return 0;
}