#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <string>

int main() {

    //AAnimal* animal = new AAnimal();
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << std::endl;
    std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
    std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
    cat->makeSound();
    dog->makeSound();

    std::cout << std::endl;

    delete dog;
    delete cat;
    return 0;
}
