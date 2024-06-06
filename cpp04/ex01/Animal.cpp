#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Constructor of Animal" << std::endl;
}

void Animal::makeSound()
{
    std::cout << "Some animal sound" << std::endl;
}

Animal::Animal(const Animal &cpy) {
    *this = cpy;
}

Animal &Animal::operator=(const Animal &other) {
    
    this->type = other.type;
    return *this;
}

const std::string Animal::getType()
{
    return this->type;
}

void Animal::setType(std::string _type)
{
    type = _type;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal" << std::endl;
}