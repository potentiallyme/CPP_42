#include "Ice.hpp"

Ice::Ice(){
	CONSTRUCTOR("Ice")
}

Ice::Ice(const Ice &other){
	(void) other;
	COPY("Ice")
}

Ice::~Ice(){
	DESTRUCTOR("Ice")
}

Ice & Ice::operator=(const Ice &other){
	(void) other;
	return *this;
}

