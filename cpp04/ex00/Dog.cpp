#include "Dog.hpp"

Dog::Dog() : Animal(){
	type = "Dog";
	CONSTRUCTOR("Dog")
}

Dog::Dog(const Dog &other) : Animal(other){
	COPY("Dog")
}

Dog::~Dog(){
	DESTRUCTOR("Dog")
}

Dog & Dog::operator=(const Dog &other){
	Animal::operator=(other);
	return *this;
}

void Dog::makeSound(){
	std::cout << PURPLE << getType() << ": " << RESET << "Woof woof" << std::endl;
}
