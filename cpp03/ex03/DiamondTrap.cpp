#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("dTrap_clap_name"), ScavTrap(), FragTrap(), _name("dTrap")
{
	_hp = FragTrap::_hp;
	_mana = ScavTrap::_mana;
	_ad = FragTrap::_ad;
	CONSTRUCTOR("DiamondTrap")
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	_hp = FragTrap::_hp;
	_mana = ScavTrap::_mana;
	_ad = FragTrap::_ad;
	PARAMETER("DiamondTrap")
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	COPY("DiamondTrap")
}

DiamondTrap::~DiamondTrap()
{
	DESTRUCTOR("DiamondTrap")
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am named " << _name << " in my updated version, but I once was " << ClapTrap::_name << std::endl;
}
