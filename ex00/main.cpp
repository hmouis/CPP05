#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("too low", 160);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d("too high", 0);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat d("Valid", 10);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    

}