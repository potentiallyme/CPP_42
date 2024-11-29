#include "Cat.hpp"

Cat::Cat() : Animal(){
	type = "Cat";
	CONSTRUCTOR("Cat")
}

Cat::Cat(const Cat &other) : Animal(other){
	COPY("Cat")
}

Cat::~Cat(){
	DESTRUCTOR("Cat")
}

Cat & Cat::operator=(const Cat &other){
	Animal::operator=(other);
	return *this;
}

void Cat::makeSound(){
	std::cout << PURPLE << getType() << ": " << RESET << "Meooow" << std::endl;
}

