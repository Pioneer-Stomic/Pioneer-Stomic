#include <iostream>
#include <iomanip>

void bubbleSort(int* arr, int len);
void printArray(int* arr, int len);

int main()
{
    int arr[10] = { 4, 3, 6, 9, 10, 8, 1, 2, 5, 7 };
    int len{ sizeof(arr) / sizeof(arr[0]) };
    
    std::cout << "排序前：";

    for (int i{ }; i < len; i++)
    {
        std::cout << arr[i] << std::setw(4);
    }

    bubbleSort(arr, len);

    std::cout << '\n';

    printArray(arr, len);

    return 0;
}

void bubbleSort(int* arr, int len)
{
    for(int i{ }; i < len - 1; i++)
    {
        for(int j{ }; j < len - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp{ arr[j] };
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int* arr, int len)
{
    std::cout << "排序后：";

    for (int i{ }; i < len; i++)
    {
        std::cout << arr[i] << std::setw(4);
    }    
}