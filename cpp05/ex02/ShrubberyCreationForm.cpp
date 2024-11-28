#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137),_target("Nobody"){CONSTRUCTOR("ShrubberyCreationForm")}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):AForm("ShrubberyCreationForm", 145, 137){
  _target = target;
  // Create file
  PARAMETER("ShrubberyCreationForm")
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
  DESTRUCTOR("ShrubberyCreationForm")
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm("ShrubberyCreationForm", 145, 137),_target(other._target){
  COPY("ShrubberyCreationForm")
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
  _target = other._target;
  return *this;
}

std::string ShrubberyCreationForm::getTarget(){
  return _target;
}

void ShrubberyCreationForm::executeForm(){
  std::string filename = _target + "_shrubbery";
  std::ofstream file(filename.c_str());
  if (file.is_open()){
    file << "\n     ccee88oo\n"
    << "C8O8O8Q8PoOb o8oo\n"
    << "dOB69QO8PdUOpugoO9bD\n"
    << "CgggbU8OU qOp qOdoUOdcb\n"
    << "    6OuU  /p u gcoUodpP\n"
    << "      \\\\\\//  /douUP\n"
    << "       \\\\\\////\n         |||/\\\n"
    << "         |||\\/\n         |||||\n"
    << ".....//||||\\....\n";
  }
  else{
    std::cerr << RED << "There was an error printing the form " << BRED \
      << "ERROR CODE: 0F5TR34M_3RR0R"<<RESET<<std::endl;
      file.close();
  }
}
