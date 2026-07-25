#include <iostream>
#include <string>

class Person
{
public:
    // The name property is Read-Write
    void setName(std::string getName)
    {
        name = getName;
    }

    std::string getName()
    {
        return name;
    }

    // The age property is Read-Only
    int getAge()
    {    
        return age;
    }

    // The id is Write-Only
    void setID(std::string getID)
    {
        id = getID;
    }

    // Use public interface to ensure validity.
    void setGender(std::string getGender)
    {
        if(getGender != "male" && getGender != "female")
        {
            std::cout << "Invalid gender, please try again.\n";
            return;
        }
        
        gender = getGender;
    }

    std::string getGender()
    {
        return gender;
    }

private:
    std::string name{ };
    int age{ 17 };
    std::string id{ };
    std::string gender{ };
};

int main()
{
    Person p;

    // Name
    p.setName("Miku");
    std::cout << "Name: " << p.getName() << '\n';

    // Age
    std::cout << "Age: " << p.getAge() << '\n';

    // ID
    p.setID("01");

    // Gender
    std::string getGender;
    std::cout << "Enter the gender(male / female): ";
    std::cin >> getGender;    
    p.setGender(getGender);

    std::cout << "Gender: " << p.getGender() << '\n';

    return 0;
}