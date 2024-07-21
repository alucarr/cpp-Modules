#include "Bureaucrat.hpp"
#include "Form.hpp" 

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

Form::Form(const std::string &name, int signGrade, int execGrade) : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade) 
{
    if (signGrade < 1 || execGrade < 1) {
        throw GradeTooHighException();
    } else if (signGrade > 150 || execGrade > 150) {
        throw GradeTooLowException();
    }
}

Form::Form(const Form &cpy) : name(cpy.name), isSigned(cpy.isSigned), signGrade(cpy.signGrade), execGrade(cpy.execGrade) {}

Form &Form::operator=(const Form &other) {
    if (this != &other)
        isSigned = other.isSigned;
    return *this;
}

Form::~Form() {}

std::string Form::getName() const {
    return name;
}

int Form::getSignGrade() const {
    return signGrade;
}

int Form::getExecGrade() const{
    return execGrade;
}

bool Form::getIsSigned() const{
    return isSigned;
}

void Form::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > signGrade) {
        throw GradeTooLowException();
    }
    isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &f) {
    os << "Form " << f.getName() 
       << ", signing grade: " << f.getSignGrade() 
       << ", execution grade: " << f.getExecGrade() 
       << ", is signed: " << (f.getIsSigned() ? "yes" : "no");
    return os;
}