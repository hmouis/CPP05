#include "Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern& other)
{
    *this = other;
}
Intern& Intern::operator=(const Intern& other)
{
    if (this != &other)
        *this = other;
    return *this;
}
Intern::~Intern()
{
}

AForm* Intern::creatShrubberyForm(std::string const& target)
{
    std::cout << "Intern creates shrubbery creation form\n";
    return new ShrubberyCreationForm(target);
}
AForm* Intern::creatRobotomyForm(std::string const& target)
{
    std::cout << "Intern creates robotomy request form\n";
    return new RobotomyRequestForm(target);
}
AForm* Intern::creatPresidentialForm(std::string const& target)
{
    std::cout << "Intern creates presidential pardon form\n";
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string const& name, std::string const& target)
{
    std::string forms[3] =
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm* (Intern::*form[3])(std::string const&)= {
        &Intern::creatShrubberyForm,
        &Intern::creatRobotomyForm,
        &Intern::creatPresidentialForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (name == forms[i])
            return (this->*form[i])(target);
    }
    throw AForm::NoFormException();
}
