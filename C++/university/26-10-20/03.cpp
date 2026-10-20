#include <iostream>

int main()
{
    double mark[10]{ };
    double sum{ };
    double variance_10{ };

    for(int i{ }; i < 10; i++)
    {
        std::cin >> mark[i];
        {
            if(mark[i] < 0 || mark[i] > 10)
            {
                std::cout << "Mark " << i + 1 << " is not invalid.\n";
                i--;
                continue;
            }
        }
    }

    for(int i{ }; i < 10; i++)
    {
        sum += mark[i];
    }

    for(int i{ }; i < 10; i++)
    {
        variance_10 += (mark[i] - sum / 10) * (mark[i] - sum / 10);
    }

    std::cout << "Average: " << sum / 10 << '\n';
    std::cout << "Variance: " << variance_10 / 10 << '\n';

    return 0;
}