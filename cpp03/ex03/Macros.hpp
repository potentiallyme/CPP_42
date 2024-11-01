#ifndef MACROS_HPP
#define MACROS_HPP
#include <iostream>
#include <typeinfo>

// Class macros
#define CONSTRUCTOR(class_name) \
    std::cout<<BLUE<<"Default constructor called for class "<<PURPLE<<class_name<<std::endl;
#define DESTRUCTOR(class_name) \
    std::cout<<RED<<"Destructor called for class "<<PURPLE<<class_name<<std::endl;
#define COPY(class_name) \
    std::cout<<YELLOW<<"Copy constructor called for class "<<PURPLE<<class_name<<std::endl;
#define PARAMETER(class_name) \
    std::cout<<BLUE<<"Parameterized constructor called for class "<<PURPLE<<class_name<<std::endl;


//Base colors
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"

//Bold colors
#define BRED "\033[1;31m"
#define BGREEN "\033[1;32m"
#define BYELLOW "\033[1;33m"
#define BBLUE "\033[1;34m"
#define BPURPLE "\033[1;35m"

#define RESET "\033[0m"

#endif
