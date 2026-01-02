#include "main.h"
#include <iostream>

int main()
{
    int a{ input() };
    int b{ input() };
    int z{ add(a, b) };

    result(a, b, z);

    return 0;
}

