#ifndef MACROS_HPP
#define MACROS_HPP
#include <iostream>
#include <typeinfo>

// Class macros
#define CONSTRUCTOR(class_name) \
    std::cout<<PURPLE<<class_name<<GREEN<<" Default Constructor called"<<RESET<<std::endl;
#define DESTRUCTOR(class_name) \
    std::cout<<PURPLE<<class_name<<RED<<" Destructor called"<<RESET<<std::endl;
#define COPY(class_name) \
    std::cout<<PURPLE<<class_name<<YELLOW<<" Copy Constructor called"<<RESET<<std::endl;
#define PARAMETER(class_name) \
    std::cout<<PURPLE<<class_name<<GREEN<<" Parameterized Constructor called"<<RESET<<std::endl;
#define NAMEOK(sentence) \
    std::cout<<PURPLE<<_name<<BLUE<<" "<<sentence<<RESET<<std::endl;
#define NAMEKO(sentence) \
    std::cout<<PURPLE<<_name<<RED<<" "<<sentence<<RESET<<std::endl;

// Main Test macros
#define CONSTRUCT std::cout<<BGREEN<<"### CONSTRUCTORS ###"<<RESET<<std::endl;
#define TESTS std::cout<<BBLUE<<"### TESTS ###"<<RESET<<std::endl;
#define DESTRUCT std::cout<<BRED<<"### DESTRUCTORS ###"<<RESET<<std::endl;
#define CMSG(name) std::cout<<PURPLE<<name<<GREEN<<" succesfully constructed"<<RESET<<std::endl;
#define DMSG(name) std::cout<<PURPLE<<name<<RED<<" succesfully destructed"<<RESET<<std::endl;
#define NEWLINE std::cout<<std::endl;
#define STACK std::cout<<YELLOW<<"# ON STACK #"<<RESET<<std::endl;
#define HEAP std::cout<<YELLOW<<"# ON HEAP #"<<RESET<<std::endl;


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
