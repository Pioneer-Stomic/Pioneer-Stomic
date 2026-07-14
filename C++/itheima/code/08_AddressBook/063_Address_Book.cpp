#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

#define MAX 1000 // Maximum address book capacity

struct Person
{
    int number{ };
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

void end()
{
    system("pause");
    system("cls");
}

void showMenu()
{
    std::cout << "=============================\n";
    std::cout << "===   Address Book Menu   ===\n";
    std::cout << "=============================\n";
    std::cout << "|    1. Add Contact         |\n";
    std::cout << "|    2. Show Contacts       |\n";
    std::cout << "|    3. Delete Contact      |\n";
    std::cout << "|    4. Search Contact      |\n";
    std::cout << "|    5. Modify Contact      |\n";
    std::cout << "|    6. Save to File        |\n";
    std::cout << "|    7. Load from file      |\n";        
    std::cout << "|    0. Exit                |\n";
    std::cout << "=============================\n";
}

void addContact(AddressBook* addrBook)
{
    // Judge whether the address book is full
    if(addrBook->memberSize == MAX)
    {
        std::cout << "Address book is full.\n";
        end();
    }
    else
    {
        // Get number
        addrBook->personArr[addrBook->memberSize].number = addrBook->memberSize + 1;
        
        // Get name
        std::cout << "Enter the name: ";
        std::cin.ignore();
        std::getline(std::cin, addrBook->personArr[addrBook->memberSize].name);

        // Get gender
        int getGender{ };
    
        while(true)
        {
            std::cout << "Enter the gender (1. male  2. female): ";
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
            std::cout << "Enter the age (0-99): ";
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
        std::getline(std::cin, addrBook->personArr[addrBook->memberSize].homeAddress);

        // Display result
        std::cout << "Contact has been added successfully.\n";

        // Update contact count
        addrBook->memberSize++;

        end();
    }
}

void showContacts(AddressBook* addrBook)
{
    if(addrBook->memberSize == 0)
    {
        std::cout << "Address book is empty.\n";

        end();
    }
    else
    {
        for(int i{ }; i < addrBook->memberSize; i++)
        {
            std::cout << addrBook->personArr[i].number << "\t";
            std::cout << "Name: " << addrBook->personArr[i].name << '\n';
            std::cout << "\tGender: " << (addrBook->personArr[i].gender == 1 ? "male" : "female") << '\n'; // 1 -> male, 2 -> female
            std::cout << "\tAge: " << addrBook->personArr[i].age << '\n';
            std::cout << "\tPhone Number: " << addrBook->personArr[i].phoneNumber << '\n';
            std::cout << "\tHome Address: " << addrBook->personArr[i].homeAddress << '\n' << '\n';
        }

        end();
    }
}

// Judge whether the name you search exists
int isExist(AddressBook* addrBook, std::string name)
{
    for(int i{ }; i < addrBook->memberSize; i++)
    {
        if(addrBook->personArr[i].name == name)
        {
            return i;
        }
    }
    
    return -1;
}

void deleteContact(AddressBook* addrBook)
{
    if(addrBook->memberSize == 0)
    {
        std::cout << "Address book is empty.\n";

        end();
    }
    else
    {
        std::cout << "Enter the contact you want to delete: ";
        std::string getName{ };
        std::cin.ignore();
        std::getline(std::cin, getName);

        int result{ isExist(addrBook, getName) };
        if(result == -1)
        {
            std::cout << "No contact found.\n";

            end();
        }
        else
        {
            std::cout << "Delete " << addrBook->personArr[result].name << " ? (y/n): ";
            std::string isDelete{ };
            std::cin >> isDelete;
            
            if(isDelete == "n")
            {
                end();
            }
            else if(isDelete == "y")
            {
                for(int i{ result }; i < addrBook->memberSize - 1; i++) // Shift contacts after the deleted contract one position forward
                {
                    addrBook->personArr[i] = addrBook->personArr[i + 1];
                }

                addrBook->memberSize--;

                std::cout << "Contact has been deleted.\n";

                end();
            }
            else
            {
                std::cout << "Invalid option, please try again.\n";

                end();
            }
        }
    }    
}

void searchContact(AddressBook* addrBook)
{
    std::cout << "Enter the contact name: ";
    std::string getName{ };
    std::cin.ignore();
    std::getline(std::cin, getName);

    int result{ isExist(addrBook, getName) };

    if(result == -1)
    {
        std::cout << "No contact found.\n";

        end();
    }
    else
    {
        std::cout << "Name: " << addrBook->personArr[result].name << '\n';
        std::cout << "\tGender: " << (addrBook->personArr[result].gender == 1 ? "male" : "female") << '\n'; // 1 -> male, 2 -> female
        std::cout << "\tAge: " << addrBook->personArr[result].age << '\n';
        std::cout << "\tPhone Number: " << addrBook->personArr[result].phoneNumber << '\n';
        std::cout << "\tHome Address: " << addrBook->personArr[result].homeAddress << '\n';

        end();
    }
}

void modifyContact(AddressBook* addrBook)
{
    std::cout << "Enter the contact you want to modify: ";
    std::string getName{ };
    std::cin.ignore();
    std::getline(std::cin, getName);

    int result{ isExist(addrBook, getName) };
    
    if(result == -1)
    {
        std::cout << "No contact found.\n";
        
        end();
    }
    else
    {
        // Modify name
        std::cout << "Enter the name: ";
        std::getline(std::cin, addrBook->personArr[result].name);

        // Modify gender
        int getGender{ };
    
        while(true)
        {
            std::cout << "Enter the gender (1. male  2. female): ";
            std::cin >> getGender;

            if(getGender == 1 || getGender == 2)
            {
                addrBook->personArr[result].gender = getGender;
                break;
            }

            std::cout << "Invalid gender, please try again.\n";
        }

        // Modify age
        int getAge{ };

        while(true)
        {
            std::cout << "Enter the age (0-99): ";
            std::cin >> getAge;
            
            if(getAge >= 0 && getAge <= 99)
            {
                addrBook->personArr[result].age = getAge;
                break;
            }

            std::cout << "Invalid age, please try again.";
        }

        // Modify phone number
        std::cout << "Enter the phone number: ";
        std::cin.ignore();
        std::getline(std::cin, addrBook->personArr[result].phoneNumber);

        // Modify home address
        std::cout << "Enter your home address: ";
        std::getline(std::cin, addrBook->personArr[result].homeAddress);

        // Display result
        std::cout << "Modified successfully.\n";

        end();
    }
}

void saveContacts(AddressBook* addrBook)
{
    while(true)
    {
        std::cout << "Save data to file? (y/n): ";
        std::string isSave{ };
        std::cin >> isSave;

        if(isSave == "n")
        {
            end();
            return;
        }
        else if(isSave == "y")
        {
            std::ofstream file("contacts.txt");

            if(!file.is_open())
            {
                std::cout << "Save failed.\n";

                end();
                return;
            }

            file << addrBook->memberSize << '\n';

            for(int i{ }; i < addrBook->memberSize; i++)
            {
                file << addrBook->personArr[i].number << '\n';
                file << addrBook->personArr[i].name << '\n';
                file << addrBook->personArr[i].gender << '\n';
                file << addrBook->personArr[i].age << '\n';
                file << addrBook->personArr[i].phoneNumber << '\n';
                file << addrBook->personArr[i].homeAddress << '\n';
            }

            std::cout << "Data saved.\n";

            
            end();
            return;
        }
        else
        {
            std::cout << "Invalid option, please enter 'y' or 'n'.\n";
        }
    }
}

void loadContacts(AddressBook* addrBook)
{
    std::ifstream file("contacts.txt");

    if(!file.is_open())
    {
        return ;
    }

    file >> addrBook->memberSize;

    for(int i{ }; i < addrBook->memberSize; i++)
    {
        file >> addrBook->personArr[i].number;
        file.ignore();
        std::getline(file, addrBook->personArr[i].name);
        file >> addrBook->personArr[i].gender;
        file >> addrBook->personArr[i].age;
        file.ignore();
        std::getline(file, addrBook->personArr[i].phoneNumber);
        std::getline(file, addrBook->personArr[i].homeAddress);
    }
    
    file.close();
}

int main()
{
    system("cls");

    AddressBook addrBook;

    loadContacts(&addrBook);

    while(true) // Loop infinitely until user inputs 0
    {
    showMenu();

    int select{ }; // Select the function
    std::cin >> select;

    switch(select)
    {
        case 1: // Add Contact
            addContact(&addrBook);
            break;
        case 2: // Show Contacts
            showContacts(&addrBook);
            break;
        case 3: // Delete Contact
        {            
            deleteContact(&addrBook);
            break;
        }
        case 4: // Search Contact
            searchContact(&addrBook);
            break;
        case 5: // Modify Contact
            modifyContact(&addrBook);
            break;
        case 6: // Save
            saveContacts(&addrBook); // Save the information to disk
            break;
        case 7: // Load
            loadContacts(&addrBook); // Load the information on disk
            std::cout << "Contacts loaded from file.\n";
            end();
            break;
        case 0: // Exit
            saveContacts(&addrBook);
            return 0;
            break;
        default:
            std::cout << "Invalid option, please try again.\n";        
            end();
            break;
    }
    
    }

    return 0;
}