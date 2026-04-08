#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
    AForm(72, 45, "RobotomyRequestForm")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target): 
    AForm(72, 45, "RobotomyRequestForm"), 
    target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): 
    AForm(obj)
{
    target = obj.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        target = obj.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    CheckExecution(executor);
    
    std::cout << "ZZZZZZ...\n";
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully.\n";
    else
        std::cout << target << " robotomy failed.\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{}