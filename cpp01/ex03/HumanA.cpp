#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << weapon->getType() << "." << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanA::HumanA()
{

}

HumanA::~HumanA()
{
    std::cout << name << " died." << std::endl;
}