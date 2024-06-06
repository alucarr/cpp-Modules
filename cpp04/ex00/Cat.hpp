#include "Animal.hpp"


#if !defined(CAT)
#define CAT

class Cat : public Animal
{
private:

public:
    Cat();
    void makeSound();

    Cat(const Cat &cpy);
    Cat &operator=(const Cat &other);

    ~Cat();
};

#endif // CAT



