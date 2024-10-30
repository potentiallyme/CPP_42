#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hp(10), _mana(10), _ad(0){
	// std::cout << purple << _name << reset << " Battlebot go -- Oh that's me!" << std::endl;
	// std::cout << green << "[" << _name << " created]" << reset << std::endl << std::endl;
}

ClapTrap::~ClapTrap(){
	// std::cout << purple << _name << reset << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	// std::cout << red << "[" << _name << " destroyed]" << reset << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
:_hp(other._hp), _mana(other._mana), _ad(other._ad), _name(other._name){
	COPY
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other){
	if (this != &other){
		this->_name = other._name;
		this->_ad = other._ad;
		this->_mana = other._mana;
		this->_hp = other._hp;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name): _hp(10), _mana(10), _ad(0), _name(name){
	std::cout << purple << _name;
	std::cout << reset << ": Let's get this party started!" << std::endl;
	std::cout << green << "[" << _name << " created]" << reset << std::endl << std::endl;
}

void ClapTrap::attack(const std::string& target){
	std::cout << purple << _name;
	std::cout << reset << ": Heyyah!" << std::endl << blue;
	std::cout << "[" << _name;
	std::cout << " dealt " << _ad << " damage to " << target << "]" << std::endl;
	std::cout << "[MANA (" << _mana << ") ==> (";
	_mana -= 1;
	std::cout << _mana << ")]" << reset << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){

	std::cout << purple << _name;
	if (_hp <= 0){
		std::cout << purple << ": I'M DEAD I'M DEAD OHMYGOD I'M ALREADY DEAD!" << reset << std::endl;
		return;
	}
	std::cout << reset << ": Ow hohoho, that hurts! Yipes!" << std::endl << blue;
	std::cout << "[" << _name;
	std::cout << " took " << amount << " damage | " << "HP (" << _hp << ") ==> (";
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	std::cout << _hp << ")]" << reset << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << purple << _name;
	if (_hp == 0)
		std::cout << reset << ": Are you god? Am I dead?" << std::endl << blue;
	else
		std::cout << reset << ": Health! Ooo, what flavor is red?" << std::endl << blue;
	std::cout << blue << "[" << _name;
	std::cout << " healed for " << amount << " health]" << std::endl;
	std::cout << "[HP (" << _hp << ") ==> (";
	_hp += amount;
	std::cout << _hp << ") | MANA (" << _mana << ") ==> (";
	_mana -= 1;
	std::cout << _mana << ")]" << reset << std::endl << std::endl;
}

void ClapTrap::printStats(){
	std::cout << lblue << "[" << _name << " STATS]";
	std::cout << std::endl << blue << "> HEALTH POINTS: " << _hp << std::endl;
	std::cout << "> ENERGY POINTS: " << _mana << std::endl;
	std::cout << "> ATTACK DAMAGE: " << _ad << std::endl;
	std::cout << reset << std::endl;
}
