#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if (energyPts > 0 && hitPts > 0)
    {
        energyPts--;
        std::cout << "ClapTrap " << name << " attacks " << target <<", causing " <<
        attackDmg << " points of damage!" << std::endl;
    }
    else if (hitPts < 0)
    {
        std::cout << "ClapTrap" << name << "is already dead" << std::endl;
    }
    else if (energyPts < 10 && hitPts > 0)
    {
        std::cout << "not enough energy" << std::endl;
    }
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPts > 0 && hitPts > 0)
    {
        energyPts--;
        hitPts += amount;
        std::cout << "ClapTrap " << name << " is repairing" << ", current hp is: " << hitPts << std::endl;
    }
    else if (hitPts < 0)
    {
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
    }
    else if (energyPts < 10 && hitPts > 0)
    {
        std::cout << "not enough energy" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPts > 0)
    {
        hitPts -= amount;
        std::cout << "Claptrap " << this->name << " took " << amount << " damage" << ", current hp is: " << hitPts << std::endl;
    }
    else if (hitPts <= 0)
    {
        std::cout << "Claptrap" << this->name << "is dead" << std::endl;
    }
}

ClapTrap::ClapTrap(/* args */)
{
    std::cout << "constructor of claptrap" << std::endl;
    this->name = "Default";
    this->hitPts = 10;
    this->energyPts = 10;
    this->attackDmg = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->hitPts = 10;
    this->energyPts = 10;
    this->attackDmg = 0;
    std::cout << "constructor of claptrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
    *this = cpy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
    this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor of claptrap" << std::endl;
}