/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:46:13 by alucar            #+#    #+#             */
/*   Updated: 2024/07/15 12:46:46 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap ali("ali");
    ScavTrap mustafa("mustafa");

    ali.attack("x");
    mustafa.attack("x");
    ali.takeDamage(95);
    mustafa.takeDamage(99);
    ali.beRepaired(3);
    mustafa.beRepaired(5);
    ali.guardGate();
    mustafa.guardGate();
    std::cout << "------------- THE END -------------" << std::endl;
    
    return 0;
}