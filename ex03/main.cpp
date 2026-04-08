#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try{
        AForm* form;
        Intern intern;
        form = intern.makeForm("NoForm", "bob");
        delete form;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        AForm* form;
        Intern intern;
        form = intern.makeForm("shrubbery creation", "bob");
        delete form;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    try{
        AForm* form;
        Intern intern;
        form = intern.makeForm("robotomy request", "bob");
        delete form;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        AForm* form;
        Intern intern;
        form = intern.makeForm("presidential pardon", "bob");
        delete form;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}