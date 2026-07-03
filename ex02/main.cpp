#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"




int main()
{
    try 
    {
        Bureaucrat bob("Bob", 1);
        ShrubberyCreationForm shrubbery("home");     
        bob.signForm(shrubbery);
        bob.executeForm(shrubbery);

    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat bob("moo", 10);
        PresidentialPardonForm pardon("Arthur");      
        bob.signForm(pardon);
        bob.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat bob("bee", 100);
        RobotomyRequestForm   robotomy("Bender");
        bob.signForm(robotomy);
        bob.executeForm(robotomy);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}