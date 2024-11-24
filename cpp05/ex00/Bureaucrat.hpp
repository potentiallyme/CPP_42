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
    std::string getName();
    int getGrade();
  private:
    std::string _name;
    int _grade;
};
#endif
