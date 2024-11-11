#include "Character.hpp"

Character::Character(){
	_name = "Default Character";
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	CONSTRUCTOR("Character")
}

Character::Character(std::string name){
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	PARAMETER("Character")
}

Character::Character(const Character &other){
	_name = other._name;
	for (int i = 0; i < 4; i++){
		_inventory[i] = 0;
		if (other._inventory[i] != 0)
			_inventory[i] = other._inventory[i]->clone();
	}
	COPY("Character")
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (_inventory[i] != 0 && _inventory[i]){
			std::cout << RED << "Deleting Materia of type " << PURPLE << _inventory[i]->getType() << RESET << std::endl;
			delete _inventory[i];
			_inventory[i] = 0;
		}
	}
	DESTRUCTOR("Character")
}

Character & Character::operator=(const Character &other){
	_name = other._name;
	for (int i = 0; i < 4; i++){
		if (_inventory[i]){
			delete _inventory[i];
			_inventory[i] = 0;
		}
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria *m){
	if (!m){
		NAMEKO("can't equip a non-existant object")
		return;
	}
	for (int i = 0; i < 4; i++){
		if (_inventory[i] == 0){
			_inventory[i] = m->clone();
			NAMEOK("equipped the Materia")
			return;
		}
	}
	NAMEKO("can't hold more than 4 Materias")
}

void Character::unequip(int index){
	if ((index < 0 || index > 3) || _inventory[index] == 0)
		NAMEKO("can't unequip something it doesn't have")
	else{
		_inventory[index] = 0;
		NAMEOK("unequipped the Materia")
	}
}

void Character::use(int index, ICharacter &target){
	if ((index < 0 || index > 3) || _inventory[index] == 0)
		NAMEKO("doesn't have anything to use at the given slot")
	else{
		std::cout << PURPLE << _name;
		(_inventory[index])->use(target);
	}
}

std::string const &Character::getName() const{
	return _name;
}

AMateria *Character::getMateria(int index){
	return _inventory[index];
}


