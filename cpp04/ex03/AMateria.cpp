#include "AMateria.hpp"

AMateria::AMateria(){
	CONSTRUCTOR("AMateria")
}

AMateria::AMateria(const std::string &type):_type(type){
	PARAMETER("AMateria")
}

AMateria::AMateria(const AMateria &other){
	_type = other._type;
	COPY("AMateria")
}

AMateria::~AMateria(){
	DESTRUCTOR("AMateria")
}

// AMateria & AMateria::operator=(const AMateria &other){
// 	(void) other;
// 	return *this;
// }

std::string &AMateria::getType(){
	return _type;
}

void AMateria::use(ICharacter &target){
	std::cout << BLUE << "AMateria used on target " << PURPLE << target.getName() << RESET << std::endl;
}
