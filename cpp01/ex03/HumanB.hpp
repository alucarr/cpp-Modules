#if !defined(HumanB_hpp)
#define HumanB_hpp
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB(/* args */);
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack();
    ~HumanB();
};




#endif // HumanB_hpp
