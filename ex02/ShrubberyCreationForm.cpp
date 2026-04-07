#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
    AForm(145, 137, "ShrubberyCreationForm")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target):
    AForm(145, 137, "ShrubberyCreationForm"),
    target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):
    AForm(obj)
{
    target = obj.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        target = obj.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    CheckExecution(executor);
    std::ofstream file(target.c_str());
    file << "    *    \n";
    file << "   ***   \n";
    file << "  *****  \n";
    file << "    |    \n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}