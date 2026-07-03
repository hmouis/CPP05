#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm():  name("AForm"), sign(false), gradeToSign(90), gradeToExec(50)
{}

AForm::AForm(const AForm& other):  name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec)
{}

AForm& AForm::operator=(const AForm& other)
{
    if (&other == this)
        return *this;
    this->sign = other.sign;
    return *this;
}

AForm::~AForm()
{}

int AForm::getGradeToSign() {return gradeToSign;}
int AForm::getGradeToExec() {return gradeToExec;}
std::string AForm::getName() const {return name;}
bool AForm::getSign() {return sign;}
void AForm::setSign(bool Sign) {sign = Sign;}


const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char* AForm::FormSignException::what() const throw()
{
    return "Form is not signed";
}
const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
const char* AForm::NoFormException::what() const throw()
{
    return "No Form";
}
void AForm::CheckExecution(Bureaucrat const& executor) const
{
    if (!sign)
        throw FormSignException();
    if (executor.getGrade() > gradeToExec)  
        throw GradeTooLowException();
}

AForm::AForm(int _gradeToSign, int _gradeToExec, std::string name):  name(name), sign(false), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{}

void AForm::beSigned(Bureaucrat& toSign)
{
    if (toSign.getGrade() > gradeToSign)
        throw GradeTooLowException(); 
    sign = true;
}