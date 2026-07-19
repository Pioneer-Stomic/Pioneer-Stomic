#include <iostream>

int* func()
{
    int* p{ new int(10) };
    /*
    This operation will save the data to heap area,
    where the data will not be destroyed after the function ends.
    */
    return p;
}

void test01()
{
    int* p{ func() };

    std::cout << *p << '\n';
    std::cout << *p << '\n';

    delete p; // Delete this data in heap area.
}

void test02()
{
    int* arr{ new int[10] };

    for(int i{ }; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    for(int i{ }; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
}

int main()
{
    test01();

    test02();

    return 0;
}