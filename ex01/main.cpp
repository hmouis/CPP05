#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat b("too low", 160);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
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
    // try
    // {
    //     Bureaucrat a("bob", 123);
    //     std::cout << a << "\n";
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // try
    // {
    //     Bureaucrat a("foo", 2);
    //     a.increment();
    //     a.increment();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // try
    // {
    //     Bureaucrat a("foo", 149);
    //     a.decrement();
    //     a.decrement();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
}