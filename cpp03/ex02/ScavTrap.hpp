#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap &cpy);
    ScavTrap& operator=(const ScavTrap& other);
    void guardGate();
    ~ScavTrap();
};


