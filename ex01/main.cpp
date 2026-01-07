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
        Bureaucrat a("bob", 123);
        std::cout << a << "\n";
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a("foo", 2);
        a.increment();
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat a("foo", 149);
        a.decrement();
        a.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}