#ifndef WRONGGRADE_HPP
#define WRONGGRADE_HPP
#include "Macros.hpp"

class WrongGrade : public std::exception{
  public:
    const char* what() const throw(){
      return "The grade is wrong.";
    }
};

#endif
