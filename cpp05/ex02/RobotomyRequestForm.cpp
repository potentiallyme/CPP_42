#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45),_target("Nobody"),_odds(true)
{CONSTRUCTOR("RobotomyRequestForm")}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):AForm("RobotomyRequestForm", 72, 45),_odds(true)
{
  _target = target;
  // Create file
  PARAMETER("RobotomyRequestForm")
}

RobotomyRequestForm::~RobotomyRequestForm(){
  DESTRUCTOR("RobotomyRequestForm")
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm("RobotomyRequestForm", 72, 45),_target(other._target), _odds(true){
  COPY("RobotomyRequestForm")
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
  _target = other._target;
  return *this;
}

std::string RobotomyRequestForm::getTarget(){
  return _target;
}

void RobotomyRequestForm::executeForm(){
  std::cout << BPURPLE << "*HIGH PITCHED DRILLING NOISES* " << BYELLOW << "FFFFFFSSSSSSHHHHHHIIIIIIIIIIIIIIII" \
    << std::endl;
  if (_odds == true){
    std::cout << YELLOW << _target << GREEN << " has successfully been ROBOTOMIZED" << RESET << std::endl;
    _odds = false;
  }
  else{
    std::cout << YELLOW << _target << RED << "'s ROBOTOMY has failed" << RESET << std::endl;
    _odds = true;
  }
}
