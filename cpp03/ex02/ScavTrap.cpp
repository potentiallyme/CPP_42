#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _gK(0){
	_hp = 100;
	_mana = 50;
	_ad = 20;
	_name = "Default ScavTrap";
	std::cout << purple << _name << ": " << reset << "SC4V-TP ONL-L-LINE." << std::endl;
	std::cout << green << "[" << _name << " created]" << reset << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap("ScavTrap " + name), _gK(0){
	_hp = 100;
	_mana = 50;
	_ad = 20;
	// _name = "ScavTrap " + name;
	std::cout << purple << _name << ": " << reset << "SCAVS AND SC4V." << std::endl;
	std::cout << green << "[" << _name << " created]" << reset << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other){
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other){
	if (this != &other){
		this->_name = other._name;
		this->_ad = other._ad;
		this->_mana = other._mana;
		this->_hp = other._hp;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << purple << _name << reset << ": Away with thee!" << std::endl;
	std::cout << red << "[" << _name << " destroyed]" << reset << std::endl << std::endl;
}

void ScavTrap::guardGate(){
	if (_gK == false){
		std::cout << purple << _name << ": " << red << "GATE KEEPER MODE ACTIVATED." << std::endl;
		std::cout << blue << "[" << _name << " has entered Gate Keeper Mode]" << reset << std::endl << std::endl;
	}
	else{
		std::cout << purple << _name << ": " << red << "DON'T BOTHER A SC4V-TP DURING ITS DUTY." << std::endl;
		std::cout << red << "[" << _name << " is already in Gate Keeper Mode]" << reset << std::endl << std::endl;
	}
}
