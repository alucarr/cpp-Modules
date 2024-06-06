#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <string>

int main() {
    Dog* dogs[3];
    for (int i = 0; i < 3; ++i) {
        dogs[i] = new Dog();
    }

    Cat* cats[3];
    for (int i = 0; i < 3; ++i) {
        cats[i] = new Cat();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << dogs[i]->getType() << std::endl;
        dogs[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << cats[i]->getType() << std::endl;
        cats[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        dogs[i]->setIdeas("Idea for Dog " + std::to_string(i));
        cats[i]->setIdeas("Idea for Cat " + std::to_string(i));
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ideas for Dog " << i << ": ";
        dogs[i]->getIdeas();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ideas for Cat " << i << ": ";
        cats[i]->getIdeas();
    }
    
    for (int i = 0; i < 3; ++i) {
        delete dogs[i];
        delete cats[i];
    }

    return 0;
}
