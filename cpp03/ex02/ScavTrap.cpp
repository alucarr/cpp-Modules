#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
    this->attackDmg = 20;
    this->energyPts = 50;
    this->hitPts = 100;
    this->name = "Default ScavTrap";
    std::cout << "constructor of scavtrap" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
    std::cout << "constructor of scavtrap" << std::endl;
    name = _name;
    this->hitPts = 100;
    this->energyPts = 50;
    this->attackDmg = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap" << std::endl;
}