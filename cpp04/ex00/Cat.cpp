#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Constructor of Cat" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat" << std::endl;
}
