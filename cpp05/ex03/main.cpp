#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){
  CONSTRUCT
  Intern nerd;
  AForm *forms[4];
  NEWLINE
  TESTS
  forms[0] = nerd.makeForm("ShrubberyCreationForm", "Jon's garden"); NEWLINE
  forms[1] = nerd.makeForm("RobotomyRequestForm", "everyone"); NEWLINE
  forms[2] = nerd.makeForm("PresidentialPardonForm", "dahm"); NEWLINE
  forms[3] = nerd.makeForm("some random form to get this guy fired", "nerd"); NEWLINE
  DESTRUCT
  for (int i = 0; i < 4; i++){
    if (forms[i] != NULL)
      delete forms[i];
  }
}

