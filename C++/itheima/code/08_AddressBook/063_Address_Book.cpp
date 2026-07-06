#include <iostream>
#include <string>
#include <cstdlib>

#define MAX 2

struct Person
{
    std::string name{ };
    int gender{ }; // 1. male  2. female
    int age{ };
    std::string phoneNumber{ };
    std::string homeAddress{ };
};

struct AddressBook
{
    Person personArr[MAX];
    int memberSize{ };
};

void showMenu()
{
    std::cout << "=============================\n";
    std::cout << "===   Address Book Menu   ===\n";
    std::cout << "=============================\n";
    std::cout << "|    1. Add Contact         |\n";
    std::cout << "|    2. Show Contacts       |\n";
    std::cout << "|    3. Delete Contact      |\n";
    std::cout << "|    4. Search Contact      |\n";
    std::cout << "|    5. Update Contact      |\n";
    std::cout << "|    6. Clear All Contacts  |\n";
    std::cout << "|    0. Exit                |\n";
    std::cout << "=============================\n";
}

void addContact(AddressBook* addrBook)
{
    // Judge whether the address book is full
    if(addrBook->memberSize == MAX)
    {
        std::cout << "Address book is full.\n";
        system("pause");
        system("cls");
    }
    else
    {
        // Get name
        std::cout << "Enter the name: ";
        std::cin.ignore();
        std::getline(std::cin, addrBook->personArr[addrBook->memberSize].name);

        // Get gender
        int getGender{ };
    
        while(true)
        {
            std::cout << "Enter the gender(1. male  2. female): ";
            std::cin >> getGender;

            if(getGender == 1 || getGender == 2)
            {
                addrBook->personArr[addrBook->memberSize].gender = getGender;
                break;
            }

            std::cout << "Invalid gender, please try again.\n";
        }

        // Get age
        int getAge{ };

        while(true)
        {
            std::cout << "Enter the age(0~99): ";
            std::cin >> getAge;
            
            if(getAge >= 0 && getAge <= 99)
            {
                addrBook->personArr[addrBook->memberSize].age = getAge;
                break;
            }

            std::cout << "Invalid age, please try again.";
        }

        // Get phone number
        std::cout << "Enter the phone number: ";
        std::cin.ignore();
        std::getline(std::cin, addrBook->personArr[addrBook->memberSize].phoneNumber);

        // Get home address
        std::cout << "Enter your home address: ";
        std::cin.ignore();
        std::getline(std::cin, addrBook->personArr[addrBook->memberSize].homeAddress);

        // Display result
        std::cout << "New contact has been added successfully.\n";

        addrBook->memberSize++;

        system("pause");
        system("cls");
    }
}

int main()
{
    AddressBook addrBook;
    
    while(true)
    {
    showMenu();

    int select{ };
    std::cin >> select;

    switch(select)
    {
        case 1: // Add Contact
            addContact(&addrBook);
            break;
        // case 2: // Show Contacts
        //     break;
        // case 3: // Delete Contact
        //     break;
        // case 4: // Search Contact
        //     break;
        // case 5: // Update Contact
        //     break;
        // case 6: // Clear All Contacts
        //     break;
        case 0: // Exit
            std::cout << "Exited the address book.\n";
            return 0;
            break;                                                                    
    }
    
    }

    return 0;
}