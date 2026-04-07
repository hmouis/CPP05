#ifndef  ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};


#endif