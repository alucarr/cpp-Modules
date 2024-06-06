#ifndef WRONGCAT
 #define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &cpy);
    WrongCat &operator=(const WrongCat &other);

    void makeSound() const;
    std::string getType() const;
};

#endif //WRONGCAT