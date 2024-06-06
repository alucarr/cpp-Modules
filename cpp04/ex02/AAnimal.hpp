#if !defined(AANIMAL)
#define AANIMAL

#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    
    AAnimal(const AAnimal &cpy);
    AAnimal &operator=(const AAnimal &other);

    const std::string getType();
    void setType(std::string _type);
    
    virtual void makeSound() = 0;
    
    virtual ~AAnimal();
};




#endif // ANIMAL
