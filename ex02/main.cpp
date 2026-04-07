#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"




int main()
{
    Bureaucrat bob("Bob", 26);
    ShrubberyCreationForm shrubbery("home");
    RobotomyRequestForm   robotomy("Bender");
    RobotomyRequestForm   robotom("Bende");
    RobotomyRequestForm   roboto("Bend");
    PresidentialPardonForm pardon("Arthur");

    try 
    {
        bob.signForm(robotomy);
        bob.signForm(shrubbery);
        bob.signForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    bob.executeForm(shrubbery);
    bob.executeForm(robotomy);
    bob.executeForm(pardon);


    return 0;
}