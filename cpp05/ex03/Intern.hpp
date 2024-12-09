#ifndef INTERN_HPP
#define INTERN_HPP

#include "Macros.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
  public:
    // CONSTRUCTORS:
    Intern();
    Intern(const Intern &);
    
    // DESTRUCTOR:
    ~Intern();

    // OPERATORS:
    Intern &operator=(const Intern &);

    // METHODS:
    AForm *makeForm(const std::string, const std::string);
};

#endif
