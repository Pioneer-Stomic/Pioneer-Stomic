#include <iostream>

int main()
{
    int numerator[3]{ }, denominator[3]{ };
    int lcm{ }, gcd{ };
    int max{ }, min{ };

    std::cin >> numerator[0] >> denominator[0] >> numerator[1] >> denominator[1];

    max = (denominator[0] > denominator[1] ? denominator[0] : denominator[1]);
    
    for(lcm = (max); lcm > max - 1; lcm++)
    {
        if(lcm % denominator[0] == 0 && lcm % denominator[1] == 0)
        {
            break;
        }
    }

    denominator[2] = lcm;
    numerator[2] = lcm / denominator[0] * numerator[0] + lcm / denominator[1] * numerator[1];

    min = (numerator[2] < denominator[2] ? numerator[2] : denominator[2]);

    for(gcd = min; gcd > 0; gcd--)
    {
        if(denominator[2] % gcd == 0 && numerator[2] % gcd == 0)
        {
            break;
        }
    }
    
    std::cout << numerator[2] / gcd << " \\ " << denominator[2] / gcd << '\n';

    return 0;
}