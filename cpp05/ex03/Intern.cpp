#include "Intern.hpp"

Intern::Intern(){CONSTRUCTOR("Intern")}

Intern::~Intern(){DESTRUCTOR("Intern")}

Intern::Intern(const Intern &other){(void)other;COPY("Intern")}

Intern &Intern::operator=(const Intern &other){(void)other; return *this;}

static AForm *makeShrub(const std::string target){
  return (new ShrubberyCreationForm(target));
}

static AForm *makeRobo(const std::string target){
  return (new RobotomyRequestForm(target));
}

static AForm *makePres(const std::string target){
  return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string form, const std::string target){
  AForm *(*all_types[])(const std::string target) = {&makeShrub, &makeRobo, &makePres};
  std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

  for (int i = 0; i < 3; i++){
    if (form == forms[i]){
      std::cout << GREEN << "Thankfully, the new intern successfully created a " << form;
      if (form.find("Form") == std::string::npos)
        std::cout << " form";
      std::cout << RESET << std::endl;
      return (all_types[i](target));
    }
  }
  std::cout << RED << "Lousy intern couldn't create the form. Get him fired. NOW!" << RESET << std::endl;
  return NULL;
}
