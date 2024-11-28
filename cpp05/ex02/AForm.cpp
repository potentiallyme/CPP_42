#include "AForm.hpp"
#include "WrongGrade.hpp"

AForm::AForm(const std::string name, int gradeS, int gradeE):_name(name),_gradeSign(gradeS),_gradeExec(gradeE),_signed(false){
  if (_gradeSign < 1)
    throw GradeTooHighException();
  if (_gradeSign > 150)
    throw GradeTooLowException();
  PARAMETER("AForm")
}

AForm::~AForm(){
  DESTRUCTOR("AForm")
}

std::ostream &operator<<(std::ostream &os, const AForm &obj){
  os << YELLOW << obj.getName() << ": " << \
    RESET << "GradeSign: "<<YELLOW<<obj.getGradeS()<<RESET<<" | GradeExec: "<<YELLOW<<obj.getGradeE() \
    << RESET<<" | Signed: "<<YELLOW<<obj.getSigned()<<RESET<<std::endl;
  return os;
}

const std::string &AForm::getName() const{
  return _name;
}

int AForm::getGradeS() const{
  return _gradeSign;
}

int AForm::getGradeE() const{
  return _gradeExec;
}

bool AForm::getSigned() const{
  return _signed;
}

void AForm::beSigned(Bureaucrat &b){
  if (b.getGrade() <= _gradeSign){
    _signed = true;
    //b.signForm(this);
  }
  else {
    std::cout<<YELLOW<<b.getName()<<BLUE<<" [GRADE "<<b.getGrade()<<"]"<<RED<<" couldn't sign ";
    std::cout<<YELLOW<<getName()<<RED<<" because the form requires a "<<YELLOW<<"Bureaucrat";
    std::cout<<RESET<<" of "<<BLUE<<"[GRADE "<<_gradeSign<<"]"<<std::endl;
  }
}

