#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <iostream>

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, const int& grade);
        Bureaucrat(const  Bureaucrat& other);
        Bureaucrat& operator=(const  Bureaucrat& other);
        ~Bureaucrat();

        std::string getName();
        void setName(const std::string& name);
        int getGrade();
        void setGrade(const int& grade);
        class GradeTooHighException : public std::exception 
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char *what() const throw();
        };
};


#endif