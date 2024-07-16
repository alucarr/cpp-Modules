#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(std::string _name);
    FragTrap(const FragTrap &cpy);
    FragTrap& operator=(const FragTrap& other);
    void highFivesGuys(void);
    ~FragTrap();
};


