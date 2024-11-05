#include "Cure.hpp"

Cure::Cure(){
	_type = "cure";
	CONSTRUCTOR("Cure")
}

Cure::Cure(const Cure &other){
	_type = other._type;
	COPY("Cure")
}

Cure::~Cure(){
	DESTRUCTOR("cure")
}

Cure & Cure::operator=(const Cure &other){
	_type = other._type;
	return *this;
}

std::string &Cure::getType(){
	return _type;
}

Cure *Cure::clone(){
	Cure *copy = new Cure;
	return copy;
}

void Cure::use(ICharacter &target){
	std::cout << BLUE << " heals " << PURPLE << "\'s wounds" << RESET << std::endl;
}
