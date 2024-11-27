#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Macros.hpp"

class Bureaucrat{
  public:
    //CONSTRUCTORS:
    Bureaucrat();
    Bureaucrat(const std::string, int);
    Bureaucrat(const Bureaucrat&);

    //DESTRUCTOR:
    ~Bureaucrat();

    //OPERATORS:
    Bureaucrat &operator=(const Bureaucrat&);

    //GETTERS/SETTERS:
    const std::string &getName() const;
    int getGrade() const;

    class GradeTooLowException: public std::exception{
        virtual const char* what() const throw(){
          return "This grade is much much much too low";
        }
    };
    
    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw(){
          return "This grade is wayyy too high";
        }
    };

  private:
    std::string _name;
    int _grade;
};
std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif
