#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
    cout << "Default constructor called" << endl;
    fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    cout << "Copy constructor called" << endl;
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
    cout << "<< operator called" << endl;
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed& operatr)
{
    cout << "Copy assignment operator called" << endl;
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
    cout << "Destructor called" << endl;
}
