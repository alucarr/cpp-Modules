#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b("Ali", 3);
        Form f("KVP", 2, 1);

        std::cout << f << std::endl;

        b.incrementGrade();
        std::cout << b << std::endl;

        b.signForm(f);
        std::cout << f << std::endl;
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    } catch (const Form::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    } catch (const Form::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
