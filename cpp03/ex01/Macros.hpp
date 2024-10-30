#ifndef MACROS_HPP
#define MACROS_HPP
#include <iostream>

#define CONSTRUCTOR std::cout<<BLUE<<"Default constructor called for class "<<PURPLE<<typeid(this).name()<<std::endl;
#define DESTRUCTOR std::cout<<RED<<"Destructor called for class "<<PURPLE<<typeid(this).name()<<std::endl;
#define COPY std::cout<<YELLOW<<"Copy constructor called for class "<<PURPLE<<typeid(this).name()<<std::endl;

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

#endif
