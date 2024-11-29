#include "Animal.hpp"

Animal::Animal() : type("Cow"){
	CONSTRUCTOR("Animal")
}

Animal::Animal(const Animal &other) : type(other.type){
	COPY("Animal")
}

Animal::~Animal(){
	DESTRUCTOR("Animal")
}

Animal & Animal::operator=(const Animal &other){
	type = other.type;
	return *this;
}

std::string Animal::getType() const{
	return type;
}

void Animal::setType(std::string &new_type){
	type = new_type;
}

