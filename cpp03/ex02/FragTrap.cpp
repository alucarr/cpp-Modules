#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
    std::cout << "constructor of FragTrap" << std::endl;
    name = "Default FragTrap";
    hitPts = 100;
    energyPts = 100;
    attackDmg = 30;
}

FragTrap::FragTrap(std::string _name)
{
    std::cout << "constructor of FragTrap" << std::endl;
    name = _name;
    hitPts = 100;
    energyPts = 100;
    attackDmg = 30;
}

void FragTrap::highFivesGuys()
{
    std::cout << "high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap" << std::endl;
}