#if !defined(ANIMAL)
#define ANIMAL

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    
    Animal(const Animal &cpy);
    Animal &operator=(const Animal &other);

    const std::string getType();
    void setType(std::string _type);
    
    virtual void makeSound();
    
    virtual ~Animal();
};




#endif // ANIMAL
