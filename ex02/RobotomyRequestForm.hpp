#ifndef  RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
        
        void execute(Bureaucrat const & executor) const;

};


#endif