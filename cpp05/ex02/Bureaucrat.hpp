#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Macros.hpp"
#include "AForm.hpp"

class AForm;
class ShrubberyCreationForm;

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

    //METHODS:
    void signForm(ShrubberyCreationForm *);

    class GradeTooLowException: public std::exception{
        virtual const char* what() const throw(){
          return "Hey, we need paperboys but you're more like a... boy. Get outta here!";
        }
    };
    
    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw(){
          return "What, you think you're above the big BOSS?? Chump, get lost!";
        }
    };

  private:
    std::string _name;
    int _grade;
};
std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif
