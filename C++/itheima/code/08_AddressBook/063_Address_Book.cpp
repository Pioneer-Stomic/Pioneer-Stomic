#include <iostream>

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

int main()
{
    showMenu();

    return 0;
}