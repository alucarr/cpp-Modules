/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:18:44 by alucar            #+#    #+#             */
/*   Updated: 2024/07/16 13:18:46 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Constructor of Dog" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog &Dog::operator=(const Dog &other) {
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog" << std::endl;
}