#ifndef AFORM_HPP
#define AFORM_HPP

#include "Macros.hpp"

class Bureaucrat;

class AForm{
  public:
    //CONSTRUCTORS:
    //AForm();
    AForm(const std::string, int, int);
    //AForm(const Form&);

    //DESTRUCTOR:
    virtual ~AForm();

    //OPERATORS:
    //AForm &operator=(const AForm&);

    //GETTERS/SETTERS:
    const std::string &getName() const;
    int getGradeS() const;
    int getGradeE() const;
    bool getSigned() const;
    void setSigned(bool);

    //METHODS:
    void beSigned(Bureaucrat&);
    void execute(Bureaucrat&);
    virtual void executeForm() = 0;

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
std::ostream &operator<<(std::ostream&, const AForm&);

#endif
