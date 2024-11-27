#include "Bureaucrat.hpp"

int main(void){
  try{
    Bureaucrat b1("John", 70);
    std::cout << b1;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    Bureaucrat b2("Bob", 160);
    std::cout << b2;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    Bureaucrat b3("Kyle", 0);
    std::cout << b3;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
}
