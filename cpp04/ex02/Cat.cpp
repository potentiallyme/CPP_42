#include "Cat.hpp"

Cat::Cat() : Animal(){
	type = "Cat";
	_brain = new Brain;
	CONSTRUCTOR("Cat")
}

Cat::Cat(const Cat &other) : Animal(other){
	_brain = new Brain(*other._brain);
	COPY("Cat")
}

Cat::~Cat(){
	delete _brain;
	DESTRUCTOR("Cat")
}

Cat & Cat::operator=(const Cat &other){
	Animal::operator=(other);
	delete _brain;
	_brain = new Brain(*other._brain);
	return *this;
}

void Cat::makeSound() const{
	std::cout << PURPLE << getType() << ": " << RESET << "Meooow" << std::endl;
}

Brain *Cat::getBrain(){
	return _brain;
}

void Cat::setIdeas(std::string idea, int index){
	if (index > 99 || index < 0)
		std::cout << RED << "Index is out of range!" << RESET << std::endl;
	else{
		_brain->setIdeas(idea, index);
		std::cout << GREEN << "Idea: " << BLUE << idea << GREEN << " | Has been set at index " << PURPLE << index << RESET << std::endl;
	}
}

std::string *Cat::getIdeas(){
	return _brain->getIdeas();
}

