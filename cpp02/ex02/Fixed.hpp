 #ifndef Fixed_hpp
#define Fixed_hpp
#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
private:
    int fixedValue;
    static const int fracBits = 8;
public:
    Fixed(/* args */);
    Fixed(const Fixed& copy);
    Fixed& operator=(const Fixed& operatr);
    bool operator>(const Fixed& operatr) const;
    bool operator<(const Fixed& operatr) const;
    bool operator==(const Fixed& operatr) const;
    bool operator!=(const Fixed& operatr) const;
    bool operator>=(const Fixed& operatr) const;
    bool operator<=(const Fixed& operatr) const;
    Fixed operator+(const Fixed& operatr) const;
    Fixed operator-(const Fixed& operatr) const;
    Fixed operator*(const Fixed& operatr) const;
    Fixed operator/(const Fixed& operatr) const;
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed &min(Fixed &num1, Fixed &num2);
    static const Fixed &min(const Fixed &num1,const Fixed &num2);
    static Fixed &max(Fixed &num1, Fixed &num2);
    static const Fixed &max(const Fixed &num1,const Fixed &num2);
    Fixed(int value);
    Fixed(float value);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream & operator<<(std::ostream & os, const Fixed & fixed);

#endif // Fixed_hpp