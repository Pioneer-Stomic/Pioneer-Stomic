#include <iostream>
#include <cmath>

bool primeNumber(int num)
{
    bool isPrimeNumber{ true };
    
    for(int i{ 2 }; i < sqrt(num); i++)
    {
        if(num % i == 0)
        {
            isPrimeNumber = false;
            break;
        }
    }

    return isPrimeNumber;
}

int main()
{
    int getNum{ };
    std::cin >> getNum;

    for(int i{ 1 }; i <= getNum / 2; i++)
    {
        if(primeNumber(i) && primeNumber(getNum - i))
        {
            std::cout << i << " + " << getNum - i << '\n';
        }
    }

    return 0;
}