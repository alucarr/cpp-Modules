/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:14:08 by alucar            #+#    #+#             */
/*   Updated: 2024/07/15 13:14:23 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->attackDmg = 20;
    this->energyPts = 50;
    this->hitPts = 100;
    this->name = "Default ScavTrap";
    std::cout << "constructor of scavtrap" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
    std::cout << "constructor of scavtrap" << std::endl;
    name = _name;
    this->hitPts = 100;
    this->energyPts = 50;
    this->attackDmg = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
    this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) {
    *this = cpy;
}