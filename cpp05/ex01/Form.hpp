#if !defined(FORM)
#define FORM


#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int signGrade;
    const int execGrade;
public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    Form();
    Form(const std::string &name, int signGrade, int execGrade);
    Form &operator=(const Form &other);
    Form(const  Form &cpy);
    ~Form();

    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getIsSigned() const;

    void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &os, const Form &f);
#endif // FORM
