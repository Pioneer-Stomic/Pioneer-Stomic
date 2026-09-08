#include <iostream>

int main()
{
    // Print the original array
    int arr[5]= { 1, 3, 2, 4, 5 };

    for(int i{ }; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    std::cout << '\n';

    // Reverse the array
    int start{ };
    int end{ 4 };

    while(start < end)
    {
        int temp{ arr[start] };
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print the reversed array
    for(int i{ }; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}