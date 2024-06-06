#ifndef WRONGANIMAL
 #define WRONGANIMAL

#include <iostream>
class WrongAnimal 
{
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &cpy);
    WrongAnimal &operator=(const WrongAnimal &other);

    void makeSound() const;
    std::string getType() const;
};

#endif //WRONGANIMAL