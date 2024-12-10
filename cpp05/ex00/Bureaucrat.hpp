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

	//MEMBERS:
	void incrementGrade();
	void decrementGrade();

	//EXCEPTIONS:
    class GradeTooLowException: public std::exception{
        virtual const char* what() const throw(){
          return "You're the lowest of the low. GET OUT!";
        }
    };
    
    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw(){
          return "Who do you think you are? Nobody has a rank this high! OUT!";
        }
    };

  private:
    std::string _name;
    int _grade;
};
std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif
