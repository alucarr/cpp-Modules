#include "AAnimal.hpp"
#include "Brain.hpp"

#if !defined(DOG)
#define DOG

class Dog : public AAnimal
{
private:
    Brain* dogBrain;
public:
    Dog();
    void makeSound();

    Dog(const Dog &cpy);
    Dog &operator=(const Dog &other);

    void	getIdeas(void)const;
    void	setIdeas(std::string idea);

    ~Dog();
};

#endif // DOG



