/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:18:49 by alucar            #+#    #+#             */
/*   Updated: 2024/07/16 13:18:50 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
    Animal* animal = new Animal();
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    std::cout << animal->getType() << std::endl;
    std::cout << animal1->getType() << std::endl;
    std::cout << animal2->getType() << std::endl;

    animal->makeSound();
    animal1->makeSound();
    animal2->makeSound();

    delete animal;
    delete animal1;
    delete animal2;

    std::cout << std::endl;

    WrongAnimal* wrongAnimal = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl;
    std::cout << "Wrong Cat->getType [" << wrongCat->getType() << "] " << std::endl;
    wrongCat->makeSound();
    wrongAnimal->makeSound();

    std::cout << std::endl;

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}