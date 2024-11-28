#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Macros.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
    void execute(Bureaucrat const &);
  private:
    std::string _target;
};

#endif // !DEBUi
