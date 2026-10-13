#include <iostream>
#include <cmath>

#define PI 3.1415926

double dotProduct(double arr1[], double arr2[])
{
    double sumArr[3];
    double sum{ };
    
    for(int i{ }; i < 3; i++)
    {
        sumArr[i] = arr1[i] * arr2[i];
        sum = sum + sumArr[i];
    }

    return sum;
}

double absoluteValue(double arr1[], double arr2[])
{
    double sumArr[2];

    sumArr[0] = sqrt(arr1[0] * arr1[0] + arr1[1] * arr1[1] + arr1[2] * arr1[2]);
    sumArr[1] = sqrt(arr2[0] * arr2[0] + arr2[1] * arr2[1] + arr2[2] * arr2[2]);

    return sumArr[0] * sumArr[1];
}

int main()
{
    double arr1[3] = {1, 2, 3};
    double arr2[3] = {3, 6, 4};

    double dot_product{ dotProduct(arr1, arr2) };
    double absolute_value{ absoluteValue(arr1, arr2) };

    double result{ dot_product / absolute_value };
    double degree{ std::acos(result) / PI * 180 };

    std::cout << "The included angle of Vector1 and Vector2 is: " << degree << '\n';

    return 0;
}