#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++)
		_inventory[i] = 0;
	CONSTRUCTOR("MateriaSource")
}

MateriaSource::MateriaSource(MateriaSource const &other){
	for (int i = 0; i < 4; i++){
		_inventory[i] = 0;
		if (other._inventory[i])
			this->_inventory[i] = (other._inventory[i])->clone();
	}
	COPY("MateriaSource")
}

MateriaSource & MateriaSource::operator=(MateriaSource const &other){
	for(int i = 0; i < 4; i++){
		if (_inventory[i]){
			delete _inventory[i];
			_inventory[i] = 0;
		}
		if (other._inventory[i])
			_inventory[i] = (other._inventory[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (_inventory[i] != 0){
			std::cout << RED << "Deleting Materia of type " << PURPLE << _inventory[i]->getType() << RESET << std::endl;
			delete _inventory[i];
			_inventory[i] = 0;
		}
	}
	DESTRUCTOR("MateriaSource")
}

void MateriaSource::learnMateria(AMateria *m){
	if (!m){
		std::cout << RED << "Materia doesn't exist" << RESET <<std::endl;
	}
	for (int i = 0; i < 4; i++){
		if (_inventory[i] == 0){
			_inventory[i] = m->clone();
			std::cout << BLUE << "Materia " << m->getType() << " has been learned" << RESET << std::endl;
			return;
		}
	}
	std::cout << RED << "Can't store more than 4 Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++){
		if (_inventory[i] && _inventory[i]->getType() == type){
			std::cout << BLUE << "Materia created from " << type << RESET << std::endl;
			return (_inventory[i]->clone());
		}
	}
	std::cout << RED << "Materia doesn't exist" << RESET << std::endl;
	return (NULL);
}

