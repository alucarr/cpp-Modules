#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string _name);
    void guardGate();
    ~ScavTrap();
};


