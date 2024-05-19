#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
    fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed::Fixed(int number)
{
    this->fixedValue = number << fracBits;
}

Fixed::Fixed(float number)
{
    this->fixedValue = static_cast<int>(number * (1 << this->fracBits));
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed& operatr)
{
    setRawBits(operatr.getRawBits());
    return *this;
}

bool Fixed::operator>(const Fixed& other) const {
    return this->fixedValue > other.fixedValue;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->fixedValue < other.fixedValue;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->fixedValue == other.fixedValue;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->fixedValue != other.fixedValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->fixedValue >= other.fixedValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->fixedValue <= other.fixedValue;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(toFloat() / other.toFloat());
}

Fixed Fixed::operator++()
{
    ++fixedValue;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--()
{
    --fixedValue;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
    return (num1 <= num2 ? num1 : num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
    return (num1 <= num2 ? num1 : num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
    return (num1 >= num2 ? num1 : num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
    return (num1 >= num2 ? num1 : num2);
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
}
