#if !defined(CONTACTS_HPP)
#define CONTACTS_HPP
#include <iostream>

class Contacts
{
private:
    std::string names; 
    std::string surnames; 
    std::string alias; 
    std::string numbers; 
    std::string darkestSecret;
    std::string array[5];
public:
    Contacts(/* args */);
    void setString(std::string any, int i);
    std::string& getString(int i);
    ~Contacts();
};

Contacts::Contacts(/* args */)
{
    
}

Contacts::~Contacts()
{
}

 //0 names//1 surnames//2 alias// 3 numbers//4 darkestsecret

void Contacts::setString(std::string any, int i)
{
    if (i == 0)
    {
        names = any;
        array[0] = any;
    }
    else if (i == 1)
    {
        surnames = any;
        array[1] = any;
    }
    else if (i == 2)
    {
        alias = any;
        array[2] = any;
    }
    else if (i == 3)
    {
        numbers = any;
        array[3] = any;
    }
    else
    {
        darkestSecret = any;
        array[4] = any;
    }
}

std::string& Contacts::getString(int i)
{
    return array[i];
}
#endif // CONTACTS
