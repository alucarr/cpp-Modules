#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat ali("Ali", 1);
        Bureaucrat halis("Halis", 70);
        Bureaucrat hamsi("Hamsi", 150);

        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("robot");
        PresidentialPardonForm pardon("Mehmet Karahanli");

        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << pardon << std::endl;

        std::cout << "Attempting to sign and execute forms:" << std::endl;

        ali.signForm(shrubbery);
        ali.executeForm(shrubbery);

        ali.signForm(robotomy);
        ali.executeForm(robotomy);

        ali.signForm(pardon);
        ali.executeForm(pardon);

        halis.signForm(robotomy);
        halis.executeForm(robotomy);

        try {
            halis.signForm(shrubbery);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            halis.signForm(pardon);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            hamsi.signForm(shrubbery);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            hamsi.executeForm(shrubbery);
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
