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
    Dog* cpy[3];
    for (int i = 0; i < 3; ++i) {
        cpy[i] = new Dog(*dogs[i]);
    }
    Cat* cats[3];
    for (int i = 0; i < 3; ++i) {
        cats[i] = new Cat();
    }
    Cat* cpys[3];
    for (int i = 0; i < 3; ++i) {
        cpys[i] = new Cat(*cats[i]);
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << cpys[i]->getType() << std::endl;
        cpys[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << cpy[i]->getType() << std::endl;
        cpy[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        cpy[i]->setIdeas("Idea for Dog " + std::to_string(i));
        cpys[i]->setIdeas("Idea for Cat " + std::to_string(i));
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ideas for Dog " << i << ": ";
        cpys[i]->getIdeas();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ideas for Cat " << i << ": ";
        cpy[i]->getIdeas();
    }
    
    for (int i = 0; i < 3; ++i) {
        delete cpys[i];
        delete cpy[i];
        delete dogs[i];
        delete cats[i];
    }
    return 0;
}
