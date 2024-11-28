#include "Bureaucrat.hpp"
#include "WrongGrade.hpp"
#include "ShrubberyCreationForm.hpp"

Bureaucrat::Bureaucrat():_name("Basic Bureaucrat"),_grade(1){
  CONSTRUCTOR("Bureaucrat")
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name),_grade(grade){
  if (_grade < 1)
    throw GradeTooHighException();
  if (_grade > 150)
    throw GradeTooLowException();
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj){
  os << YELLOW << obj.getName() << ": " << RESET << "Grade: " << YELLOW << obj.getGrade() << std::endl;
  return os;
}

const std::string &Bureaucrat::getName() const{
  return _name;
}

int Bureaucrat::getGrade() const{
  return _grade;
}

void Bureaucrat::signForm(AForm &f){
  std::cout << YELLOW<<"Bureaucrat "<<_name<<BLUE<<" [GRADE "<<_grade<<"]"<<RESET<< " has signed ";
  std::cout << YELLOW<<f.getName()<<BLUE<<" [GRADE "<<f.getGradeS()<<"]"<<RESET<<std::endl;
  f.setSigned(true);
}

void Bureaucrat::execForm(AForm &f){
  std::cout << YELLOW<<"Bureaucrat "<<_name<<BLUE<<" [GRADE "<<_grade<<"]"<<RESET<< " has executed ";
  std::cout << YELLOW<<f.getName()<<BLUE<<" [GRADE "<<f.getGradeE()<<"]"<<RESET<<std::endl;
  f.executeForm();
}
