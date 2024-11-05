#include "Ice.hpp"

Ice::Ice(){
	_type = "Ice";
	CONSTRUCTOR("ice")
}

Ice::Ice(const Ice &other){
	_type = other._type;
	COPY("Ice")
}

Ice::~Ice(){
	DESTRUCTOR("Ice")
}

Ice & Ice::operator=(const Ice &other){
	_type = other._type;
	return *this;
}

std::string &Ice::getType(){
	return _type;
}

Ice *Ice::clone(){
	Ice *copy = new Ice;
	return copy;
}

void Ice::use(ICharacter &target){
	std::cout << BLUE << " heals " << PURPLE << "\'s wounds" << RESET << std::endl;
}

