#include "Character.hpp"

Character::Character(){
	CONSTRUCTOR("Character")
}

Character::Character(const Character &other){
	(void) other;
	COPY("Character")
}

Character::~Character(){
	DESTRUCTOR("Character")
}

Character & Character::operator=(const Character &other){
	(void) other;
	return *this;
}

