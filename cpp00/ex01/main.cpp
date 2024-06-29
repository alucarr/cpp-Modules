#include "PhoneBook.hpp"
#include "Contacts.hpp"

int main()
{
    int contactCount = 0;
    PhoneBook rehber;

    std::string cincommand;
    while (true)
    {
        if (contactCount == 8)
            contactCount = 0;
        std::cout << "> Enter a command" << std::endl;
        getline(std::cin, cincommand);
        for (size_t i = 0; i < cincommand.length(); i++)
            cincommand[i] = toupper(cincommand[i]);
        if (cincommand == rehber.commands[2])
                exit(0);
        else if (cincommand == rehber.commands[0])
        {
                rehber.addPerson(contactCount);
                contactCount++;
        }
        else if (cincommand == rehber.commands[1])
        {
                rehber.searchPerson();
        }
        else
        {
            std::cout << "invalid command" << std::endl;
        }
    }
}