/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:18:53 by alucar            #+#    #+#             */
/*   Updated: 2024/07/16 13:18:55 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Animals";
    std::cout << "Wrong Animals Default Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animals escaped" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    *this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "There are too many wrong animal sounds " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
