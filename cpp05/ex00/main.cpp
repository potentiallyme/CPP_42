#include "Bureaucrat.hpp"

int main(void){
  try{
    Bureaucrat b1("John", 70);
    std::cout << YELLOW << b1.getName() << ": " << RESET << b1.getGrade(); 
    Bureaucrat b2("Bob", 0);
    std::cout << YELLOW << b2.getName() << ": " << RESET << b2.getGrade(); 
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
}
