#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

int main(void){
  try{
    std::cout << BYELLOW << "### SUCCESS SHRUB ###" << std::endl;
    NEWLINE
    Bureaucrat b1("Bob", 130);
    ShrubberyCreationForm f1("Garden");
    NEWLINE
    std::cout << b1 << f1;
    NEWLINE
    f1.beSigned(b1);
    f1.execute(b1);
    NEWLINE
    std::cout << f1;
    NEWLINE
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    std::cout << BYELLOW << "### SUCCESS ROBOTOMY ###" << std::endl;
    NEWLINE
    Bureaucrat b2("Kyle", 20);
    RobotomyRequestForm f2("Bob");
    NEWLINE
    std::cout << b2 << f2;
    NEWLINE
    f2.beSigned(b2);
    f2.execute(b2);
    f2.execute(b2);
    NEWLINE
    std::cout << f2;
    NEWLINE
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
}
