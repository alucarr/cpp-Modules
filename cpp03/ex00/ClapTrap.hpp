#if !defined(CLAPTRAP)
#define CLAPTRAP
#include <iostream>
class ClapTrap
{
private:
    std::string name;
    unsigned int hitPts;
    unsigned int energyPts;
    unsigned int attackDmg;
public:
    ClapTrap();
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &cpy);
    ClapTrap& operator=(const ClapTrap& other);
    
    void attack(const std::string& target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    
    ~ClapTrap();
};




#endif // ClapTrap
