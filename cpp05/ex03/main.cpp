#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {

        Intern intern;


        Bureaucrat ali("ali", 50);
        Bureaucrat halis("halis", 25);
        Bureaucrat hamsi("hamsi", 5);


        AForm *form1 = intern.makeForm("shrubbery creation", "home");
        AForm *form2 = intern.makeForm("robotomy request", "robot");
        AForm *form3 = intern.makeForm("presidential pardon", "karahanli");


        if (form1) {
            ali.signForm(*form1);
            ali.executeForm(*form1);
        }

        if (form2) {
            halis.signForm(*form2);
            halis.executeForm(*form2);
        }

        if (form3) {
            hamsi.signForm(*form3);
            hamsi.executeForm(*form3);
        }


        delete form1;
        delete form2;
        delete form3;
    } catch (const std::exception &e) {
        std::cerr << "An exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
