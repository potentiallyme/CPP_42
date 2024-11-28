#include "ShrubberyCreationForm.hpp"

int main(void){
  try{
    Bureaucrat b1("Bob", 30);
    ShrubberyCreationForm f1("Garden");
    std::cout << b1 << f1;
    f1.execute(b1);
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
  NEWLINE
  try{
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
}
