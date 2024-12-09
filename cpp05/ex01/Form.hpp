#ifndef FORM_HPP
#define FORM_HPP

#include "Macros.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
  public:
    //CONSTRUCTORS:
    Form();
    Form(const std::string, int);
    Form(const Form&);

    //DESTRUCTOR:
    ~Form();

    //OPERATORS:
    Form &operator=(const Form&);

    //GETTERS/SETTERS:
    const std::string &getName() const;
    int getGradeS() const;
    int getGradeE() const;
    bool getSigned() const;

    //METHODS:
    void beSigned(Bureaucrat&);

    class GradeTooLowException: public std::exception{
        virtual const char* what() const throw(){
          return "Nobody at this level should sign a form, let alone hold a pen...";
        }
    };
    
    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw(){
          return "An unsignable form, even by the biggest of bosses. Not smart.";
        }
    };

  private:
    std::string _name;
    const int _gradeSign;
    const int _gradeExec;
    bool _signed;
};
std::ostream &operator<<(std::ostream&, const Form&);

#endif
