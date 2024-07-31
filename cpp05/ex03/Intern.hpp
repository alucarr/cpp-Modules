#if !defined(INTERN_HPP)
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern {
public:
    Intern();
    Intern(const Intern &cpy);
    Intern &operator=(const Intern &other);
    ~Intern();

    AForm *makeForm(const std::string &formName, const std::string &target);

private:
    struct FormCreator {
        std::string name;
        AForm* (*create)(const std::string &target);
    };

    static AForm *createShrubberyCreationForm(const std::string &target);
    static AForm *createRobotomyRequestForm(const std::string &target);
    static AForm *createPresidentialPardonForm(const std::string &target);

    static const FormCreator formCreators[3];
};

#endif // INTERN_HPP
