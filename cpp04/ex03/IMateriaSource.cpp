#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(){
	CONSTRUCTOR("IMateriaSource")
}

IMateriaSource::IMateriaSource(const IMateriaSource &other){
	(void) other;
	COPY("IMateriaSource")
}

IMateriaSource::~IMateriaSource(){
	DESTRUCTOR("IMateriaSource")
}

IMateriaSource & IMateriaSource::operator=(const IMateriaSource &other){
	(void) other;
	return *this;
}

