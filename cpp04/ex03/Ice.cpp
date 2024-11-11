#include "Ice.hpp"

Ice::Ice(){
	_type = "ice";
	CONSTRUCTOR("Ice")
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

std::string const &Ice::getType() const{
	return _type;
}

Ice *Ice::clone() const{
	Ice *copy = new Ice;
	return copy;
}

void Ice::use(ICharacter &target){
	std::cout << BLUE << " * shoots an ice bolt at " << PURPLE << target.getName() << BLUE << " *" << RESET << std::endl;
}

