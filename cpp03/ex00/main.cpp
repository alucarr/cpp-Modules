/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:46:18 by alucar            #+#    #+#             */
/*   Updated: 2024/07/15 13:05:00 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap cp("mokoko");
    cp.attack("moko");
    cp.attack("koko");
    cp.takeDamage(1);
    cp.takeDamage(2);
    cp.takeDamage(3);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.takeDamage(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    return 0;
}
