#include <iostream>

int main()
{
    int list[8] = {12, 25, 38, 43, 57, 66, 72, 89};
    int low{ 0 }, high{ 7 }, mid{ }, key{ };
    bool found{ };

    std::cin >> key;

    while(low <= high && !found)
    {
        mid = (low + high) / 2;
        
        if(key < list[mid])
        {
            high = mid - 1;
        }
        else if(key > list[mid])
        {
            low = mid + 1;
        }
        else
        {
            found = true;
        }
    }

    if(found == true)
    {
        std::cout << mid + 1 << '\n';
    }
    else
    {
        std::cout << "Does not exist.\n";
    }

    return 0;
}