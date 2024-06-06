#include "Animal.hpp"
#include "Brain.hpp"

#if !defined(CAT)
#define CAT

class Cat : public Animal
{
private:
    Brain* catBrain;
public:
    Cat();
    void makeSound();

    Cat(const Cat &cpy);
    Cat &operator=(const Cat &other);

    void	getIdeas(void)const;
    void	setIdeas(std::string idea);

    ~Cat();
};

#endif // CAT



