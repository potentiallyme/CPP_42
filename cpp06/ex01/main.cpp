#include "Serializer.hpp"

int main(void){
	Data st_ptr;
	Data *dy_ptr = new Data;

	st_ptr.i = 10;
	st_ptr.s = "Hey buck";
	dy_ptr->i = 20;
	dy_ptr->s = "Bye hub";

	std::cout << YELLOW "Static pointer: " PURPLE "i: " RESET << st_ptr.i << PURPLE " | s: " RESET << st_ptr.s << std::endl;
	std::cout << YELLOW "Dynamic pointer: " PURPLE "i: " RESET << dy_ptr->i << PURPLE " | s: " RESET << dy_ptr->s << std::endl;
	uintptr_t srl = Serializer::serialize(&st_ptr);
	std::cout << YELLOW "uintptr_t serialized: " PURPLE << srl << RESET << std::endl;
	delete dy_ptr; dy_ptr = Serializer::deserialize(srl);
	std::cout << YELLOW "Dynamic pointer: " PURPLE "i: " RESET << dy_ptr->i << PURPLE " | s: " RESET << dy_ptr->s << std::endl;
	if (&st_ptr == dy_ptr)
		std::cout << BLUE "if (&A == C) " GREEN "SUCCESS" << std::endl;
	else
		std::cout << BLUE "if (&A == C) " RED "FAIL" << std::endl;
}
