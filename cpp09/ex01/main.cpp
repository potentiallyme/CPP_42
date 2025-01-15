#include "RPN.hpp"
#include "Macros.hpp"
#include <iostream>
#include <stdexcept>

// FIX HANDLING "(1 + 1)" try for other edge cases


int main(int ac, char **av){
	if (ac != 2)
		return 0;
	Rpn rpn;
	try{
		rpn.exec(av);
	}
	catch(const	std::runtime_error &s){
		std::cerr << RED << s.what() << RESET << std::endl;
	}
}

