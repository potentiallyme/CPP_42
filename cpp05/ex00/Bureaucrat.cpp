#include "Bureaucrat.hpp"
#include "WrongGrade.hpp"

Bureaucrat::Bureaucrat():_name("Basic Bureaucrat"),_grade(1){
  CONSTRUCTOR("Bureaucrat")
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name),_grade(grade){
  if (_grade < 1 || _grade > 150)
    throw WrongGrade();
  PARAMETER("Bureaucrat")
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name),_grade(other._grade){
  COPY("Bureaucrat")
}

Bureaucrat::~Bureaucrat(){
  DESTRUCTOR("Bureaucrat")
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
  _grade = other._grade; 
  return *this;
}

std::string Bureaucrat::getName(){
  return _name;
}

int Bureaucrat::getGrade(){
  return _grade;
}
