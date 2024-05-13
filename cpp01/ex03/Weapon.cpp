#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string weaponType)
{
    this->type = weaponType;
}

Weapon::Weapon(std::string weaponName)
{
    this->type = weaponName;
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed." << std::endl;
}