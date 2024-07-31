#if !defined(BUREAUCRAT_HPP)
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &cpy);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    int getGrade() const;
    void decrementGrade();
    void incrementGrade();
    std::string getName() const;

    void signForm(AForm &f);
    void executeForm(AForm const &form) const;

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);
#endif // BUREAUCRAT_HPP
