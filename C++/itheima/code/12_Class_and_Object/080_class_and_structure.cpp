#include <iostream>
#include <string>

struct Person1
{
    int age;
};

class Person2
{
    int age;
};

int main()
{
    Person1 p1;

    p1.age = 10;
    // The default specifier of struct is public.

    Person2 p2;

    // p2.age = 10;
    // The default specifier of struct is private.

    return 0;
}