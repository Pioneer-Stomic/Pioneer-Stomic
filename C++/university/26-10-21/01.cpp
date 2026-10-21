#include <iostream>

void printN(int n)
{
    if(n)
    {
        printN(n - 1);
        std::cout << n << '\n';
    }

    return;
}

int main()
{
    printN(10);

    return 0;
}