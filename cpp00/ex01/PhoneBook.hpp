#if !defined(PHONEBOOK)
#define PHONEBOOK
#include <iostream>
#include <ctype.h>
#include <string>
#include <iomanip>
#include <sstream>
#include "Contacts.hpp"

class PhoneBook
{
private:
    Contacts contacts[8];
public:
    std::string commands[3];
    std::string strings[5];
    void addPerson(int a);
    void searchPerson();
    PhoneBook();
    ~PhoneBook();
};

#endif // PHONEBOOK
