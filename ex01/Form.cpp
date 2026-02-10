#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form():  name("Form"), sign(false), gradeToSign(90), gradeToExec(50)
{}

Form::Form(const Form& other):  name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec)
{}

Form& Form::operator=(const Form& other)
{
    if (&other == this)
        return *this;
    this->sign = other.sign;
    return *this;
}

Form::~Form()
{}

int Form::getGradeToSign() {return gradeToSign;}
int Form::getGradeToExec() {return gradeToExec;}
std::string Form::getName() {return name;}
bool Form::getSign() {return sign;}
void Form::setSign(bool Sign) {sign = Sign;}


const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void Form::beSigned(Bureaucrat& toSign)
{
    if (toSign.getGrade() < gradeToSign)
        throw GradeTooLowException(); 
    sign = true;
}