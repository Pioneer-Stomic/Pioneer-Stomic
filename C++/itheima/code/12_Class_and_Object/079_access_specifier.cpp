#include <iostream>
#include <string>

class Person
{
public:
    std::string name{ };

protected:
    int age{ };

private:
    std::string id{ };
    
public:
    void setInfo()
    {
        name = "Miku";
        age = 17;
        id = "01";
    }
    
    void printInfo()
    {
        std::cout << "Name: " << name << '\n';
        std::cout << "Age: " << age << '\n';
        std::cout << "ID: " << id << '\n';
    }
};

int main()
{
    Person p1;

    p1.setInfo();
    p1.printInfo();

    Person p2;
    
    p2.name = "Rin";
    // p2.age = 14;
    // p2.id = "02";
    // Inaccessible.

    return 0;
}