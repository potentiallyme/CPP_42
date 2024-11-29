#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5),_target("Nobody"),_odds(true)
{CONSTRUCTOR("PresidentialPardonForm")}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):AForm("PresidentialPardonForm", 25, 5),_odds(true)
{
  _target = target;
  // Create file
  PARAMETER("PresidentialPardonForm")
}

PresidentialPardonForm::~PresidentialPardonForm(){
  DESTRUCTOR("PresidentialPardonForm")
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm("PresidentialPardonForm", 25, 5),_target(other._target), _odds(true){
  COPY("PresidentialPardonForm")
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
  _target = other._target;
  return *this;
}

std::string PresidentialPardonForm::getTarget(){
  return _target;
}

void PresidentialPardonForm::executeForm(){
  int len = _target.size();
  NEWLINE
  for (int i = 0; i < len + 39; i++)
    std::cout << PPLYELLOW << " ";
  std::cout << RESET << std::endl;
  std::cout << PPLYELLOW << "  " << _target << PPLGREEN << " has been PRESIDENTIALLY PARDONNED!" << "  " <<RESET << std::endl;
  for (int i = 0; i < len + 39; i++)
    std::cout << PPLYELLOW << " ";
  std::cout << RESET << std::endl;
}
