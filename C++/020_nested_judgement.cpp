#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请输入成绩: ";
    cin >> score;

    if (score >= 60)
    {
        cout << "及格";
        if (score >= 90)
        {
            cout << "且优秀\n";
        }
        else if (score >= 80)
        {
            cout << "且良好\n";
        }
        else
        {
            cout << "且一般\n";
        }
    }
    else
    {
        cout << "不及格\n";
    }

    return 0;
}