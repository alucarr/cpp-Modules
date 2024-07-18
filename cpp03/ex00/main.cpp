#include "ClapTrap.hpp"


int main()
{
    ClapTrap cp("mokoko");
    cp.attack("moko");
    cp.attack("koko");
    cp.takeDamage(1);
    cp.takeDamage(2);
    cp.takeDamage(3);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.takeDamage(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    return 0;
}
