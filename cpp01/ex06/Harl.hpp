#if !defined(Harl_hpp)
#define Harl_hpp
#include <iostream>
#include <map>
#include <chrono>
#include <thread>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define GRAY "\001\033[1;90m\002"

class Harl
{
private:
    void (Harl::*funcPtr)();
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    void complain( std::string level );
    std::string cases[4];
    ~Harl();
};


#endif // Harl_hpp
