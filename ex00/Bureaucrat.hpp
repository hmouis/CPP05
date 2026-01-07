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

        std::string getName() const;
        void setName(const std::string& name);
        int getGrade() const;
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
        void increment();
        void decrement();
};

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& obj);



#endif