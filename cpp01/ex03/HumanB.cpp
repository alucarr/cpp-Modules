#include "HumanB.hpp"

void HumanB::attack()
{
    if (!weapon)
    {
        std::cout << name << " attacks with their mighty fists." << std::endl;
    }
    else
        std::cout << name << " attacks with their " << weapon->getType() << "." << std::endl;
    
}

HumanB::HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    weapon = NULL;
    this->name = name;
}

HumanB::~HumanB()
{
    std::cout << name << " died." << std::endl;
}