#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 45),_target("Nobody"){CONSTRUCTOR("ShrubberyCreationForm")}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):AForm("ShrubberyCreationForm", 145, 45){
  _target = target;
  // Create file
  PARAMETER("ShrubberyCreationForm")
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
  DESTRUCTOR("ShrubberyCreationForm")
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm("ShrubberyCreationForm", 145, 45),_target(other._target){
  COPY("ShrubberyCreationForm")
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
  _target = other._target;
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor){
  if (executor.getGrade() <= getGradeE()){
    if (getSigned() == true){
      std::string filename = _target + "_shrubbery";
      std::ofstream file(filename.c_str());
      if (file.is_open()){
        file << "\n     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n";
        file << "    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\\\////\n         |||/\\\n";
        file << "         |||\\/\n         |||||\n   .....//||||\\....\n";
      }
      else
        std::cerr << RED << "There was an error printing the form " << BRED << "ERROR CODE: 0F5TR34M_3RR0R"<<RESET<<std::endl;
      file.close();
    else
      std::cerr << RED << "The form must be signed by a " << BLUE << "[GRADE "<<getGradeS()<<"]" \
        <<YELLOW<< " Bureaucrat" << RED << " before being executed" <<RESET<<std::endl;
  }
  else {
    std::cerr << YELLOW << executor.getName() << BLUE << "[GRADE "<<executor.getGrade()<<"]"<< RED << " can't execute " \
      << YELLOW << getName() << RED << " because it requires " << BLUE << "[GRADE "<<getGradeE()<<"]"<<RESET<<std::endl;
  }
}
