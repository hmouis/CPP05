#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat"), grade(100)
{}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade):name(name), grade(grade) 
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& obj)
{
    cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return cout;
}

void Bureaucrat::increment()
{
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();    
}
void Bureaucrat::decrement()
{
    grade++;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    if (this == &other)
        return ;
    name = other.name;
    grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other){
        name = other.name;
        grade = other.grade;
    }
    return *this;
}

int Bureaucrat::getGrade() const{
    return grade;
}
std::string Bureaucrat::getName() const{
    return name;
}

void Bureaucrat::setName(const std::string& name){
    this->name = name;
}
void Bureaucrat::setGrade(const int& grade){
    this->grade = grade;
}

Bureaucrat::~Bureaucrat(){}
