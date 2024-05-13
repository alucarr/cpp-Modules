#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << name << " died." << std::endl;
}

void Zombie::setName(std::string _name)
{
    this->name = _name;
}