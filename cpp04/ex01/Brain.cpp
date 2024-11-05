#include "Brain.hpp"

Brain::Brain(){
	_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		_ideas[i] = "I'm an idea!";
	CONSTRUCTOR("Brain")
}

Brain::Brain(const Brain &other){
	_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	COPY("Brain")
}

Brain::~Brain(){
	delete [] _ideas;
	DESTRUCTOR("Brain")
}

Brain & Brain::operator=(const Brain &other){
	if (this != &other){
		delete [] _ideas;
		_ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			_ideas[i] = "I'm an idea!";
	}
	return *this;
}

std::string *Brain::getIdeas(){
	return _ideas;
}

void Brain::setIdeas(std::string idea, int index){
	if (index > 99 || index < 0)
		std::cout << RED << "Index is out of range!" << RESET << std::endl;
	else
		_ideas[index] = idea;
}
