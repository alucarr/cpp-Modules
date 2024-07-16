/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:00:32 by alucar            #+#    #+#             */
/*   Updated: 2024/07/15 13:00:33 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap ali("ali");
    FragTrap mustafa("mustafa");

    ali.attack("x");
    mustafa.attack("x");
    ali.takeDamage(95);
    mustafa.takeDamage(99);
    ali.beRepaired(3);
    mustafa.beRepaired(5);
    ali.highFivesGuys();
    mustafa.highFivesGuys();
    std::cout << "------------- THE END -------------" << std::endl;

    return 0;
}
