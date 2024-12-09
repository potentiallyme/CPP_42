#include "Form.hpp"
#include "WrongGrade.hpp"

Form::Form():_name("Basic Form"),_gradeSign(1),_gradeExec(1),_signed(false){
  CONSTRUCTOR("Form")
}

Form::Form(const std::string name, int grade):_name(name),_gradeSign(grade),_gradeExec(1),_signed(false){
  if (_gradeSign < 1)
    throw GradeTooHighException();
  if (_gradeSign > 150)
    throw GradeTooLowException();
  PARAMETER("Form")
}

Form::Form(const Form &other):_name(other._name),_gradeSign(other._gradeSign),_gradeExec(other._gradeExec),_signed(other._signed){
  COPY("Form")
}

Form::~Form(){
  DESTRUCTOR("Form")
}

Form &Form::operator=(const Form &other){
  _signed = other._signed;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &obj){
  os << YELLOW << obj.getName() << ": " << \
    RESET << "GradeSign: "<<YELLOW<<obj.getGradeS()<<RESET<<" | GradeExec: "<<YELLOW<<obj.getGradeE() \
    << RESET<<" | Signed: "<<YELLOW<<obj.getSigned()<<RESET<<std::endl;
  return os;
}

const std::string &Form::getName() const{
  return _name;
}

int Form::getGradeS() const{
  return _gradeSign;
}

int Form::getGradeE() const{
  return _gradeExec;
}

bool Form::getSigned() const{
  return _signed;
}

void Form::beSigned(Bureaucrat &b){
  if (b.getGrade() <= _gradeSign){
    _signed = true;
    b.signForm(this);
  }
  else {
    std::cout<<YELLOW<<b.getName()<<BLUE<<" [GRADE "<<b.getGrade()<<"]"<<RED<<" couldn't sign ";
    std::cout<<YELLOW<<getName()<<RED<<" because the form requires a "<<YELLOW<<"Bureaucrat";
    std::cout<<RESET<<" of "<<BLUE<<"[GRADE "<<_gradeSign<<"]"<<std::endl;
  }
}
