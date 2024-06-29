#include "Contacts.hpp"


Contacts::Contacts()
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
        aboveArray[0] = any;
    }
    else if (i == 1)
    {
        surnames = any;
        aboveArray[1] = any;
    }
    else if (i == 2)
    {
        alias = any;
        aboveArray[2] = any;
    }
    else if (i == 3)
    {
        numbers = any;
        aboveArray[3] = any;
    }
    else
    {
        darkestSecret = any;
        aboveArray[4] = any;
    }
}

std::string& Contacts::getString(int i)
{
    return aboveArray[i];
}