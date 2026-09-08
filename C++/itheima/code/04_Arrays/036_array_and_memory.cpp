#include <iostream>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };

    std::cout << "The array occupies " << sizeof(arr) << " bytes.\n";
    std::cout << "Each element occupies  " << sizeof(arr[0]) << " bytes.\n";
    std::cout << "The array contains " << sizeof(arr) / sizeof(arr[0]) << " elements.\n";

    std::cout << "The base address of the array is(hexadecimal): " << arr << '\n';
    std::cout << "The base address of the array is(decimal): " << (long long)arr << '\n';
    
    for(int i{ }; i < 5; i++)
    {
        std::cout << "The address of arr[" << i << "] is " << (long long)&arr[i] << '\n';
    }

    return 0;
}