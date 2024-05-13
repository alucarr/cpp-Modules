#if !defined(Weapon_hpp)
#define Weapon_hpp

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(/* args */);
    Weapon(std::string weaponName);
    const std::string& getType() const;
    void setType(std::string weaponType);
    ~Weapon();
};




#endif // Weapon_hpp
