#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
    AForm(25, 5, "PresidentialPardonForm")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target): 
    AForm(25, 5, "PresidentialPardonForm"), 
    target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj): 
    AForm(obj)
{
    target = obj.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        target = obj.target;
    }
    return *this;
}
void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    CheckExecution(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
PresidentialPardonForm::~PresidentialPardonForm()
{}