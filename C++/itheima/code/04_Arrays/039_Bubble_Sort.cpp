#include <iostream>

int main()
{
    // Get integers
    int arr[8];

    std::cout << "Enter 8 integers, each seperated by a space: ";
    
    for(int i{ }; i < 8; i++)
    {
        std::cin >> arr[i];
    }

    // Bubble Sort
    for(int i{ }; i < 8 - 1; i++)
    {
        for(int j{ }; j < 8 - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
            int temp{ arr[j] };
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }

    // Print ascending array
    std::cout << "Ascending array: ";
    
    for(int i{ }; i < 8; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}