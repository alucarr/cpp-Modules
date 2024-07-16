/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:18:58 by alucar            #+#    #+#             */
/*   Updated: 2024/07/16 13:19:00 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat Default Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat escaped" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Miyav" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}