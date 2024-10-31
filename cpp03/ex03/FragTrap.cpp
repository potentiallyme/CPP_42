#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	this->_hp = 0;
	_hp = 100;
	_mana = 100;
	_ad = 30;
	_name = "Default FragTrap";
	std::cout << PURPLE << _name << ": " << RESET << "Fraaaaaaaaaaag time!" << std::endl;
	std::cout << BGREEN << "[Default ClapTrap turned into a FragTrap]" << RESET << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hp = 100;
	_mana = 100;
	_ad = 30;
	_name = "FragTrap " + name;
	std::cout << PURPLE << _name << ": " << RESET << "I ain't no basic Clap!" << std::endl;
	std::cout << BGREEN << "[ClapTrap" << name << " turned into FragTrap " << name << "]" << RESET << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other){}

FragTrap& FragTrap::operator=(FragTrap const &other){
	if (this != &other){
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << PURPLE << _name << ": " << RESET << "Away with thee!" << std::endl;
	std::cout << BRED << "[" << _name << " destroyed]" << RESET << std::endl << std::endl;
}

void FragTrap::highFiveGuys(){
	std::cout << PURPLE << _name << ": " << RESET << "Here's a high five bud!" << std::endl;
	std::cout << BLUE << "[" << _name << " has high fived you back]" << RESET << std::endl << std::endl;
}
