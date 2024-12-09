#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
  NNEWLINE
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
  NNEWLINE
  try{
    std::cout << BYELLOW << "### SUCCESS PRESIDENTIAL ###" << std::endl;
    NEWLINE
    Bureaucrat b3("President", 1);
    PresidentialPardonForm f3("Bob");
    NEWLINE
    std::cout << b3 << f3;
    NEWLINE
    f3.beSigned(b3);
    f3.execute(b3);
    NEWLINE
    std::cout << f3;
    NEWLINE
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NNEWLINE
  try{
    std::cout << BYELLOW << "### FAIL BUREAUCRAT ###" << std::endl;
    NEWLINE
    Bureaucrat b3("Johnathy", 160);
    PresidentialPardonForm f3("Clyve");
    NEWLINE
    std::cout << b3 << f3;
    NEWLINE
    f3.beSigned(b3);
    f3.execute(b3);
    NEWLINE
    std::cout << f3;
    NEWLINE
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NNEWLINE
  try{
    std::cout << BYELLOW << "### FAIL SIGN ###" << std::endl;
    NEWLINE
    Bureaucrat b3("Bobathan", 75);
    PresidentialPardonForm f3("Ron");
    NEWLINE
    std::cout << b3 << f3;
    NEWLINE
    f3.beSigned(b3);
    f3.execute(b3);
    NEWLINE
    std::cout << f3;
    NEWLINE
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NNEWLINE
  try{
    std::cout << BYELLOW << "### FAIL EXEC ###" << std::endl;
    NEWLINE
    Bureaucrat b3("Bobathan", 10);
    PresidentialPardonForm f3("Ron");
    NEWLINE
    std::cout << b3 << f3;
    NEWLINE
    f3.beSigned(b3);
    f3.execute(b3);
    NEWLINE
    std::cout << f3;
    NEWLINE
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
}

