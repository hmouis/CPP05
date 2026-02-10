#ifndef Form_hpp
#define Form_hpp

#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int gradeToSign;
        const int gradeToExec;
    public:
        Form();
        Form(const  Form& other);
        Form& operator=(const  Form& other);
        ~Form();
        
        int getGradeToSign();
        int getGradeToExec();
        std::string getName();
        bool getSign();
        void setSign(bool Sign);

        void beSigned(Bureaucrat& toSign);

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };
};

#endif