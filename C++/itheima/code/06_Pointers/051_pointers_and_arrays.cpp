#include <iostream>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };

    int* p{ arr };

    for(int i{ }; i < 5; i++)
    {
        std::cout << "The memory address of number #" << i + 1 << " in the array is " << p << '\n';
        std::cout << "The number #" << i + 1 << " in the array is " << *p << '\n';

        p++;
    }

    return 0;
}