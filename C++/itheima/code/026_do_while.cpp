#include <iostream>

int main()
{
    int num{ };

    do
    {
        std::cout << "num = " << num << '\n';
        num++;
    }
    while(num < 10);

    return 0;
}