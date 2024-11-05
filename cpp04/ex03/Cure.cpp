#include "Cure.hpp"

Cure::Cure(){
	CONSTRUCTOR("Cure")
}

Cure::Cure(const Cure &other){
	(void) other;
	COPY("Cure")
}

Cure::~Cure(){
	DESTRUCTOR("Cure")
}

Cure & Cure::operator=(const Cure &other){
	(void) other;
	return *this;
}

