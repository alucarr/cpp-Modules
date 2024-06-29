#if !defined(CONTACTS)
#define CONTACTS
#include <iostream>

class Contacts
{
private:
    std::string names; 
    std::string surnames; 
    std::string alias; 
    std::string numbers; 
    std::string darkestSecret;
    std::string aboveArray[5];
public:
    Contacts();
    void setString(std::string any, int i);
    std::string& getString(int i);
    ~Contacts();
};

#endif // CONTACTS
