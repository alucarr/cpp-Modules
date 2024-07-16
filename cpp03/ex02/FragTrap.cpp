/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:59:47 by alucar            #+#    #+#             */
/*   Updated: 2024/07/15 12:59:49 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "constructor of FragTrap" << std::endl;
    name = "Default FragTrap";
    hitPts = 100;
    energyPts = 100;
    attackDmg = 30;
}

FragTrap::FragTrap(std::string _name)
{
    std::cout << "constructor of FragTrap" << std::endl;
    name = _name;
    hitPts = 100;
    energyPts = 100;
    attackDmg = 30;
}

void FragTrap::highFivesGuys()
{
    std::cout << "high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
    this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
    return *this;
}

FragTrap::FragTrap(const FragTrap &cpy) {
    *this = cpy;
}