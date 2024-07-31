#include "Bureaucrat.hpp"
#include "AForm.hpp" 

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

AForm::AForm(const std::string &name, int signGrade, int execGrade) : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade) 
{
    if (signGrade < 1 || execGrade < 1) {
        throw GradeTooHighException();
    } else if (signGrade > 150 || execGrade > 150) {
        throw GradeTooLowException();
    }
}

AForm::AForm(const AForm &cpy) : name(cpy.name), isSigned(cpy.isSigned), signGrade(cpy.signGrade), execGrade(cpy.execGrade) {}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other)
        isSigned = other.isSigned;
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const {
    return name;
}

int AForm::getSignGrade() const {
    return signGrade;
}

int AForm::getExecGrade() const{
    return execGrade;
}

bool AForm::getIsSigned() const{
    return isSigned;
}

void AForm::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > signGrade) {
        throw GradeTooLowException();
    }
    isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &f) {
    os << "Form " << f.getName() 
       << ", signing grade: " << f.getSignGrade() 
       << ", execution grade: " << f.getExecGrade() 
       << ", is signed: " << (f.getIsSigned() ? "yes" : "no");
    return os;
}