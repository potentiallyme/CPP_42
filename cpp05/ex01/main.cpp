#include "Bureaucrat.hpp"

int main(void){
  try{
    std::cout << BBLUE << "### SUCCESS ###" << std::endl;
    Bureaucrat b1("John", 70);
    Form f1("Marriage certificate", 80);
    std::cout << b1 << f1;
    f1.beSigned(b1);
    std::cout << f1;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    std::cout << BBLUE << "### BUREAUCRAT FAIL ###" << std::endl;
    Bureaucrat b2("Bob", 160);
    Form f2("Construction permit", 40);
    std::cout << b2 << f2;
    f2.beSigned(b2);
    std::cout << f2;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    std::cout << BBLUE << "### FORM FAIL ###" << std::endl;
    Bureaucrat b3("Kyle", 1);
    Form f3("Financial loan", -1);
    std::cout << b3 << f3;
    f3.beSigned(b3);
    std::cout << f3;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    std::cout << BBLUE << "### SIGN FAIL ###" << std::endl;
    Bureaucrat b4("Ralph", 15);
    Form f4("Presidential decree", 1);
    std::cout << b4 << f4;
    f4.beSigned(b4);
    std::cout << f4;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
  NEWLINE
  try{
    std::cout << BBLUE << "### SUCCESS ###" << std::endl;
    Bureaucrat b5("Big Boss", 1);
    Form f5("Big Boss document", 1);
    std::cout << b5 << f5;
    f5.beSigned(b5);
    std::cout << f5;
  }
  catch(std::exception &e){
    std::cout << RED << e.what() << RESET << std::endl;
  }
}

