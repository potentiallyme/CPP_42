#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	this->_hp = 0;
	_hp = 100;
	_mana = 50;
	_ad = 20;
	_name = "Default FragTrap";
	std::cout << purple << _name << ": " << reset << "Fraaaaaaaaaaag time!" << std::endl;
	std::cout << green << "[Default ClapTrap turned into a FragTrap]" << reset << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hp = 100;
	_mana = 50;
	_ad = 20;
	_name = "FragTrap " + name;
	std::cout << purple << _name << ": " << reset << "I ain't no basic Clap!" << std::endl;
	std::cout << green << "[ClapTrap" << name << " turned into FragTrap " << name << "]" << reset << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other){
	*this = other;
}

FragTrap& FragTrap::operator=(FragTrap const &other){
	if (this != &other){
		this->_name = other._name;
		this->_ad = other._ad;
		this->_mana = other._mana;
		this->_hp = other._hp;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << purple << _name << ": " << reset << "Away with thee!" << std::endl;
	std::cout << red << "[" << _name << " destroyed]" << reset << std::endl << std::endl;
}

void FragTrap::highFiveGuys(){
	std::cout << purple << _name << ": " << reset << "Here's a high five bud!" << std::endl;
	std::cout << blue << "[" << _name << " has high fived you back]" << reset << std::endl << std::endl;
}
