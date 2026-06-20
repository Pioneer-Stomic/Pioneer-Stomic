#include <iostream>
using namespace std;

int main()
{
    int weightA = 0;
    int weightB = 0;
    int weightC = 0;
    
    cout << "请输入同学A的体重: ";
    cin >> weightA;
    cout << "请输入同学B的体重: ";
    cin >> weightB;
    cout << "请输入同学C的体重: ";
    cin >> weightC;

    cout << "同学A的体重是: " << weightA << " kg\n";
    cout << "同学B的体重是: " << weightB << " kg\n";
    cout << "同学C的体重是: " << weightC << " kg\n";

    if(weightA > weightB)
    {
        if(weightA > weightC)
        {
            cout << "A最重\n";
        }
        else
        {
            cout << "C最重\n";
        }

    }
    else
    {
        if(weightB > weightC)
        {
            cout << "B最重\n";
        }
        else
        {
            cout << "C最重\n";
        }    
    }
    return 0;
}