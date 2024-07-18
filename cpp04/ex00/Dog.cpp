#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Constructor of Dog" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog &Dog::operator=(const Dog &other) {
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog" << std::endl;
}