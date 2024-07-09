#if !defined(HumanA_hpp)
#define HumanA_hpp
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanA();
    HumanA(std::string name, Weapon& weapon);
    void attack();
    ~HumanA();
};


#endif // HumanA_hpp
