#include <iostream>

void func01(int a, int)
{
    std::cout << "func01\n";
}

void func02(int a, int = 10) // Placeholder parameter can also have a default value.
{
    std::cout << "func02\n";
}

int main()
{
    func01(10, 10);
    func02(10);

    return 0;
}