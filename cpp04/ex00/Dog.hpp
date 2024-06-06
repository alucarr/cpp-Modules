#include "Animal.hpp"

#if !defined(DOG)
#define DOG

class Dog : public Animal
{
private:

public:
    Dog();
    void makeSound();

    Dog(const Dog &cpy);
    Dog &operator=(const Dog &other);

    ~Dog();
};

#endif // DOG



