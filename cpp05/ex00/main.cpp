#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("Ali", 2);
        std::cout << b << std::endl;

        b.incrementGrade();
        std::cout << "After increment: " << b << std::endl;

        Bureaucrat c("Halis", 151);
        std::cout << c << std::endl;
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat d("Musti", 1);
        std::cout << d << std::endl;

        d.decrementGrade();
        std::cout << "After decrement: " << d << std::endl;
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
