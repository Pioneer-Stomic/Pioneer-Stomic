#include <iostream>
using namespace std;

int main()
{
    int weightA = 0;
    int weightB = 0;
    int weightC = 0;
    
    cout << "Enter the weight of Student A: ";
    cin >> weightA;
    cout << "Enter the weight of Student B: ";
    cin >> weightB;
    cout << "Enter the weight of Student C: ";
    cin >> weightC;

    cout << "The weight of Student A is: " << weightA << " kg\n";
    cout << "The weight of Student B is: " << weightB << " kg\n";
    cout << "The weight of Student C is: " << weightC << " kg\n";

    if(weightA > weightB)
    {
        if(weightA > weightC)
        {
            cout << "A is the heaviest.\n";
        }
        else
        {
            cout << "C is the heaviest.\n";
        }

    }
    else
    {
        if(weightB > weightC)
        {
            cout << "B is the heaviest.\n";
        }
        else
        {
            cout << "C is the heaviest.\n";
        }    
    }
    return 0;
}