#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'a';
    cout << "char ch1: " << ch1 << endl;
    
    cout << "char ch1 occupies " << sizeof(char) << " bytes" << endl;

    cout << (int)ch1 << endl;

    return 0;
}