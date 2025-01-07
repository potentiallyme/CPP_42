#include "Macros.hpp"


// FIX HANDLING "(1 + 1)" try for other edge cases


int main(int ac, char **av){
	if (ac > 2)
		return 0;
	Rpn rpn;
	rpn.exec(av);
}

