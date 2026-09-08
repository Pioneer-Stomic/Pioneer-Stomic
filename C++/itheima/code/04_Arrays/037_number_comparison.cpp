#include <iostream>

int main()
{
    int arr[5];

    for(int i{ }; i < 5; i++)
    {
        std::cout << "Enter the integer #" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int max{ };

    for(int i{ }; i < 5; i++)
    {
        max = ( max < arr[i] ? arr[i] : max );
    }

    std::cout << "The largest integer is: " << max <<'\n';

    return 0;
}