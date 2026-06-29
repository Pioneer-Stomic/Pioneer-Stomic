#include <iostream>

int main()
{
    int num { 100 };
    do
    {
        int units{ num % 10 };
        int tens{ (num / 10) % 10 };
        int hundreds{ num / 100 };

        if(hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == num)
        {
            std::cout << num << " = "
            << hundreds << " ^ 3 + "
            << tens << " ^ 3 + "
            << units << " ^ 3\n";
        }

        num++;
    }
    while(num < 1000);

    return 0;
}