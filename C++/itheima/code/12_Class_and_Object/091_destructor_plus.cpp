#include <iostream>

class Person
{
public:
    int age{ };

    Person()
    {
        std::cout << "Person's constructor called.\n";
    }

    Person(int a)
    {
        age = a;
        std::cout << "Person's parameterized constructor called.\n";
    }

    Person(const Person& p)
    {
        age = p.age;
    }

    ~Person()
    {
        // Copy the properties of the passed-in person to itself.
        std::cout << "Person's destructor called.\n";
    }
};

int main()
{


    return 0;
}