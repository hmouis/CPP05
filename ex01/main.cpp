#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f("Form", 40, 50);
        Bureaucrat d("bob", 9);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Form f("Form", 0, 50);
        Bureaucrat d("moo", 99);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form f("Form", 151, 50);
        Bureaucrat d("foo", 90);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form f("Form", 40, 50);
        Bureaucrat d("bee", 90);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}