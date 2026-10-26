#include <iostream>

class Person
{
public:
    Person()
    {
        std::cout << "Constructor called.\n";
    }

    ~Person()
    {
        std::cout << "Destructor called.\n";
    }
};

int main()
{
    Person p;

    return 0;
}