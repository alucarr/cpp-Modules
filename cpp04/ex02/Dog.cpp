#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Constructor of Dog" << std::endl;
    this->dogBrain = new Brain();
	if (this->dogBrain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
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
    this->dogBrain = new Brain();
	if (this->dogBrain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->dogBrain = *other.dogBrain;
	return *this;
}

void	Dog::getIdeas(void)const
{
	std::cout << "Idea of the Dog is: \"" << this->dogBrain->getIdeas() << std::endl;
}

void	Dog::setIdeas(std::string idea)
{
		this->dogBrain->setIdeas(idea);
}

Dog::~Dog()
{
    delete dogBrain;
    std::cout << "Destructor of Dog" << std::endl;
}