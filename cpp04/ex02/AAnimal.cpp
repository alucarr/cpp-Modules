/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:19:27 by alucar            #+#    #+#             */
/*   Updated: 2024/07/16 13:19:28 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "Constructor of AAnimal" << std::endl;
}

void AAnimal::makeSound()
{
    std::cout << "Some AAnimal sound" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy) {
    *this = cpy;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    
    this->type = other.type;
    return *this;
}

const std::string AAnimal::getType()
{
    return this->type;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor of AAnimal" << std::endl;
}