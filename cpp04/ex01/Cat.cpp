/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:19:12 by alucar            #+#    #+#             */
/*   Updated: 2024/07/16 13:19:13 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Constructor of Cat" << std::endl;
    this->catBrain = new Brain();
	if (this->catBrain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

void Cat::makeSound()
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
    this->catBrain = new Brain();
	if (this->catBrain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->catBrain = *other.catBrain;
	return *this;
}

void	Cat::getIdeas(void)const
{
		std::cout << "Idea of the Cat is: \"" << this->catBrain->getIdeas()<< std::endl;
}

void	Cat::setIdeas(std::string idea)
{
		this->catBrain->setIdeas(idea);
}

Cat::~Cat()
{
    delete catBrain;
    std::cout << "Destructor of Cat" << std::endl;
}
