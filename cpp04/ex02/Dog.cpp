#include "Dog.hpp"

Dog::Dog() : Animal(){
	type = "Dog";
	_brain = new Brain;
	CONSTRUCTOR("Dog")
}

Dog::Dog(const Dog &other) : Animal(other){
	_brain = new Brain(*other._brain);
	COPY("Dog")
}

Dog::~Dog(){
	delete _brain;
	DESTRUCTOR("Dog")
}

Dog & Dog::operator=(const Dog &other){
	Animal::operator=(other);
	delete _brain;
	_brain = new Brain(*other._brain);
	return *this;
}

void Dog::makeSound() const{
	std::cout << PURPLE << getType() << ": " << RESET << "Woof woof" << std::endl;
}

Brain *Dog::getBrain(){
	return _brain;
}

void Dog::setIdeas(std::string idea, int index){
	if (index > 99 || index < 0)
		std::cout << RED << "Index is out of range!" << RESET << std::endl;
	else{
		_brain->setIdeas(idea, index);
		std::cout << GREEN << "Idea: " << BLUE << idea << GREEN << " | Has been set at index " << PURPLE << index << RESET << std::endl;
	}
}

std::string *Dog::getIdeas(){
	return _brain->getIdeas();
}

