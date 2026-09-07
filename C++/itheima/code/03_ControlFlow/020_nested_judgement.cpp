#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter the score: ";
    cin >> score;

    if (score >= 60)
    {
        cout << "Passed ";
        if (score >= 90)
        {
            cout << "and Excellent\n";
        }
        else if (score >= 80)
        {
            cout << "and Good\n";
        }
        else
        {
            cout << "and Normal\n";
        }
    }
    else
    {
        cout << "Failed\n";
    }

    return 0;
}