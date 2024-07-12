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
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};


#endif // Fixed_hpp