#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat Default Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat escaped" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Miyav" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}