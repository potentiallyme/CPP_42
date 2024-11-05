#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Cow"){
	CONSTRUCTOR("WrongAnimal")
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type){
	COPY("WrongAnimal")
}

WrongAnimal::~WrongAnimal(){
	DESTRUCTOR("WrongAnimal")
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other){
	type = other.type;
	return *this;
}

std::string WrongAnimal::getType(){
	return type;
}

void WrongAnimal::setType(std::string &new_type){
	type = new_type;
}

void WrongAnimal::makeSound(){
	std::cout << PURPLE << getType() << ": " << RESET << "Baaaaaaaaah" << std::endl;
}
