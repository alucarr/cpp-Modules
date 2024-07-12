#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedValue = number << fracBits;
}

Fixed::Fixed(float number)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedValue = static_cast<int>(number * (1 << this->fracBits));
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed)
{
    std::cout << "<< operator called" << std::endl;
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed& operatr)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(operatr.getRawBits());
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->fixedValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedValue = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->fixedValue) / (1 << this->fracBits);
}

int Fixed::toInt( void ) const
{
    return this->fixedValue >> this->fracBits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
