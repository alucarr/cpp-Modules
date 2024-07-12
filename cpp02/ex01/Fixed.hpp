 #ifndef Fixed_hpp
#define Fixed_hpp
#include <iostream>

class Fixed
{
private:
    int fixedValue;
    static const int fracBits = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=(const Fixed& operatr);
    Fixed(const int value);
    Fixed(const float value);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream & operator<<(std::ostream & os, const Fixed & fixed);

#endif // Fixed_hpp