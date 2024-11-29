#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Macros.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
  public:
    // CONSTRUCTORS:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm &);

    // DESTRUCTOR:
    ~ShrubberyCreationForm();

    // OPERATORS:
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

    // GETTERS / SETTERS:
    std::string getTarget();

    // METHODS:
    void executeForm();

  private:
    std::string _target;
};

#endif // !DEBUi
