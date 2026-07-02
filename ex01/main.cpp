#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f;
        Bureaucrat d("bob", 9);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Form f;
        Bureaucrat d("moo", 99);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form f;
        Bureaucrat d("foo", 90);
        d.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}