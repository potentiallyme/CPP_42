#include "ICharacter.hpp"

ICharacter::ICharacter(){
	CONSTRUCTOR("ICharacter")
}

ICharacter::ICharacter(const ICharacter &other){
	(void) other;
	COPY("ICharacter")
}

ICharacter::~ICharacter(){
	DESTRUCTOR("ICharacter")
}

ICharacter & ICharacter::operator=(const ICharacter &other){
	(void) other;
	return *this;
}

