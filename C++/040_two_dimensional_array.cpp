#include <iostream>

int main()
{
    int arr[2][3] =
    {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    for(int i{ }; i < 2; i++)
    {
        for(int j{ }; j < 3; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}