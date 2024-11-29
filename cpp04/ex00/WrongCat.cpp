#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	type = "WrongCat";
	CONSTRUCTOR("WrongCat")
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
	COPY("WrongCat")
}

WrongCat::~WrongCat(){
	DESTRUCTOR("WrongCat")
}

WrongCat & WrongCat::operator=(const WrongCat &other){
	WrongAnimal::operator=(other);
	return *this;
}

void WrongCat::makeSound(){
	std::cout << PURPLE << getType() << ": " << RESET << "Meooow" << std::endl;
}

