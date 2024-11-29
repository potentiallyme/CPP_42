#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Caoimhe_clap_name"), ScavTrap("Caoimhe_clap_name"), FragTrap("Caoimhe_clap_name")
{	
	_name = "Caoimhe";
	_hp = FragTrap::_hp;
	_mana = ScavTrap::_mana;
	_ad = FragTrap::_ad;
	CONSTRUCTOR("DiamondTrap")
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	_name = name;
	_hp = FragTrap::_hp;
	_mana = ScavTrap::_mana;
	_ad = FragTrap::_ad;
	PARAMETER("DiamondTrap")
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	_name = other._name + "_copy";
	COPY("DiamondTrap")
}

DiamondTrap::~DiamondTrap()
{
	DESTRUCTOR("DiamondTrap")
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other){
		ClapTrap::operator=(other);
		_name = other._name + "_clone";
	}
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount){
	FragTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount){
	ScavTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI()
{
	std::cout << PURPLE << _name << ": " << RESET;
	std::cout << "I am named " << this->_name << " in my updated version, but I once was " << ClapTrap::_name << std::endl << std::endl;
}

