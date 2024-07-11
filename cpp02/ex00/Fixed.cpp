#include "Fixed.hpp"

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    cout << "Copy constructor called" << endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& operatr)
{
    cout << "Copy assignment operator called" << endl;
    setRawBits(operatr.getRawBits());
    return *this;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return this->fixedValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedValue = raw;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}
