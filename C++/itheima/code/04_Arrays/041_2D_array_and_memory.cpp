#include <iostream>

int main()
{
    int arr[2][3] = 
    {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    std::cout << "The 2D array occupies " << sizeof(arr) << " bytes.\n";
    std::cout << "The first row of the 2D array occupies " << sizeof(arr[0]) << " bytes.\n";
    std::cout << "The first element of the 2D array occupies " << sizeof(arr[0][0]) << " bytes.\n";
    
    std::cout << "The 2D array has " << sizeof(arr) / sizeof(arr[0]) << " rows.\n";
    std::cout << "The 2D array has " << sizeof(arr[0]) / sizeof(arr[0][0]) << " columns.\n";    

    std::cout << "The base address of the 2D array is " << (long long)arr << '\n';
    std::cout << "The base address of the first row of the 2D array is " << (long long)arr[0] << '\n';
    
    int n{ 1 };
    for(int i{ }; i < 2; i++)
    {
        for( int j{ }; j < 3; j++)
        {
            std::cout << "The address of the element #" << n << " is " << (long long)&(arr[i][j]) << '\n';
            n++;
        }
    }

    return 0;
}