#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _gK(0){
	_hp = 100;
	_mana = 50;
	_ad = 20;
	_name = "Default ScavTrap";
	_gK = false;
	std::cout << PURPLE << _name << ": " << RESET << "SC4V-TP ONL-L-LINE." << std::endl;
	std::cout << BGREEN << "[" << _name << " created]" << RESET << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap("ScavTrap " + name), _gK(0){
	_hp = 100;
	_mana = 50;
	_ad = 20;
	_gK = false;
	// _name = "ScavTrap " + name;
	std::cout << PURPLE << _name << ": " << RESET << "SCAVS AND SC4V." << std::endl;
	std::cout << BGREEN << "[" << _name << " created]" << RESET << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other){
	_gK = other._gK;
	COPY("ScavTrap")
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other){
	if (this != &other){
		ClapTrap::operator=(other);
		_gK = other._gK;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << PURPLE << _name << RESET << ": Away with thee!" << std::endl;
	std::cout << BRED << "[" << _name << " destroyed]" << RESET << std::endl << std::endl;
}

void ScavTrap::guardGate(){
	if (_gK == false){
		std::cout << PURPLE << _name << ": " << BRED << "GATE KEEPER MODE ACTIVATED." << std::endl;
		std::cout << BLUE << "[" << _name << " has enteBRED Gate Keeper Mode]" << RESET << std::endl << std::endl;
		_gK = true;
	}
	else{
		std::cout << PURPLE << _name << ": " << BRED << "DON'T BOTHER A SC4V-TP DURING ITS DUTY." << std::endl;
		std::cout << BRED << "[" << _name << " is already in Gate Keeper Mode]" << RESET << std::endl << std::endl;
	}
}
