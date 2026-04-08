#ifndef AForm_hpp
#define AForm_hpp

#include <iostream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool sign;
        const int gradeToSign;
        const int gradeToExec;
    public:
        AForm();
        AForm(const  AForm& other);
        AForm(int _gradeToSign, int _gradeToExec, std::string name);
        AForm& operator=(const  AForm& other);
        virtual ~AForm();
        
        int getGradeToSign();
        int getGradeToExec();
        std::string getName() const;
        bool getSign();
        void setSign(bool Sign);

        void beSigned(Bureaucrat& toSign);
        
        virtual void execute(Bureaucrat const & executor) const = 0;
        void CheckExecution(Bureaucrat const &executor) const;

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };
        class FormSignException : public std::exception{
            public:
                const char *what() const throw();
        };
        class NoFormException : public std::exception{
            public:
                const char *what() const throw();
        };
};

#endif