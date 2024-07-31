#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &cpy) {
    *this = cpy;
}

Intern &Intern::operator=(const Intern &other) {
    if (this != &other) {
    }
    return *this;
}

Intern::~Intern() {}

AForm *Intern::createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

const Intern::FormCreator Intern::formCreators[3] = {
    {"shrubbery creation", &Intern::createShrubberyCreationForm},
    {"robotomy request", &Intern::createRobotomyRequestForm},
    {"presidential pardon", &Intern::createPresidentialPardonForm}
};

AForm *Intern::makeForm(const std::string &formName, const std::string &target) {
    for (int i = 0; i < 3; ++i) {
        if (formCreators[i].name == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i].create(target);
        }
    }

    std::cout << "Intern cannot create the form, because the form name is invalid." << std::endl;
    return NULL;
}
