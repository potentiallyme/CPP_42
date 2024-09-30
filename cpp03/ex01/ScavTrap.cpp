#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	setName(name);
	setHp(100);
	setMana(50);
	setAd(20);
}

ScavTrap::ScavTrap(ScavTrap const &other){
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other){
	if (this != &other){
		std::string name = other.retName();
		this->setName(other.retName());
		this->_ad = other._ad;
		this->_mana = other._mana;
		this->_hp = other._hp;
	}
	return *this;
}
ScavTrap::~ScavTrap(){}
