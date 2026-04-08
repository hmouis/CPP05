#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        
        AForm* creatShrubberyForm(std::string const& target);
        AForm* creatRobotomyForm(std::string const& target);
        AForm* creatPresidentialForm(std::string const& target);

        AForm* makeForm(std::string const& name, std::string const& target);
};

