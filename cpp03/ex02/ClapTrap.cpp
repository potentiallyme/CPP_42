#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hp(10), _mana(10), _ad(0){
	// std::cout << PURPLE << _name << RESET << " Battlebot go -- Oh that's me!" << std::endl;
	// std::cout << BGREEN << "[" << _name << " created]" << RESET << std::endl << std::endl;
	CONSTRUCTOR("ClapTrap")
}

ClapTrap::~ClapTrap(){
	// std::cout << PURPLE << _name << RESET << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	// std::cout << red << "[" << _name << " destroyed]" << RESET << std::endl << std::endl;
	DESTRUCTOR("ClapTrap")
	NEWLINE
}

ClapTrap::ClapTrap(const ClapTrap &other)
:_hp(other._hp), _mana(other._mana), _ad(other._ad), _name(other._name + " Copy"){
	COPY("ClapTrap")
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other){
	if (this != &other){
		this->_name = other._name + " Clone";
		this->_ad = other._ad;
		this->_mana = other._mana;
		this->_hp = other._hp;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name): _hp(10), _mana(10), _ad(0), _name(name){
	// std::cout << PURPLE << _name;
	// std::cout << RESET << ": Let's get this party started!" << std::endl;
	// std::cout << BGREEN << "[" << _name << " created]" << RESET << std::endl << std::endl;
	PARAMETER("ClapTrap")
}

void ClapTrap::attack(const std::string& target){

	if (_name.empty())
		std::cout << PURPLE << "Default ClapTrap: ";
	else
		std::cout << PURPLE << "ClapTrap " << _name << ": ";	
	if (_hp <= 0){
		std::cout << RESET << "I'm dead... I'm DEAD YOU FOOL!" << RESET << std::endl;
		std::cout << BLUE << "[This ClapTrap is dead and cannot do aynthing until healed]" << std::endl << std::endl;
		return;
	}
	if (_mana <= 0)
		std::cout << RESET << "I have no energy left!" << std::endl << RED;
	else
		std::cout << RESET << "Heyyah!" << std::endl << BLUE;
	if (_name.empty())
		std::cout << "[Default ClapTrap";
	else
		std::cout << "[ClapTrap " << _name;
	if (_mana <= 0)
		std::cout << " has no more energy to attack]" << RESET << std::endl << std::endl;
	else{
		std::cout << " dealt " << _ad << " damage to " << target << "]" << std::endl;
		std::cout << "[MANA (" << _mana << ") ==> (";
		_mana -= 1;
		std::cout << _mana << ")]" << RESET << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){

	if (_name.empty())
		std::cout << PURPLE << "Default ClapTrap: ";
	else
		std::cout << PURPLE << "ClapTrap " << _name << ": ";
	if (_hp <= 0){
		std::cout << RESET << "I'M DEAD I'M DEAD OHMYGOD I'M ALREADY DEAD!" << RESET << std::endl;
		std::cout << BLUE << "[This ClapTrap is dead and cannot take more damage until healed]" << std::endl << std::endl;
		return;
	}
	std::cout << RESET << "Ow hohoho, that hurts! Yipes!" << std::endl << BLUE;
	if (_name.empty())
		std::cout << "[Default ClapTrap";
	else
		std::cout << "[ClapTrap " << _name;
	std::cout << " took " << amount << " damage | " << "HP (" << _hp << ") ==> (";
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	std::cout << _hp << ")]" << RESET << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_name.empty())
		std::cout << PURPLE << "Default ClapTrap: ";
	else
		std::cout << PURPLE << "ClapTrap " << _name << ": ";
	if (_mana <= 0)
		std::cout << RESET << "I have no energy left!" << std::endl << RED;
	else if (_hp == 0)
		std::cout << RESET << "Are you god? Am I dead?" << std::endl << BLUE;
	else
		std::cout << RESET << "Health! Ooo, what flavor is red?" << std::endl << BLUE;
	if (_name.empty())
		std::cout << "[Default ClapTrap";
	else
		std::cout << "[ClapTrap " << _name;
	if (_mana <= 0){
		std::cout << " has no energy to repair themselves]" << RESET << std::endl << std::endl;
		return ;
	}
	std::cout << " healed for " << amount << " health]" << std::endl;
	std::cout << "[HP (" << _hp << ") ==> (";
	_hp += amount;
	std::cout << _hp << ") | MANA (" << _mana << ") ==> (";
	_mana -= 1;
	std::cout << _mana << ")]" << RESET << std::endl << std::endl;
}

void ClapTrap::printStats(){
	if (_name.empty())
		std::cout << BBLUE << "[Default ClapTrap STATS]";
	else
		std::cout << BBLUE << "[ClapTrap " << _name << " STATS]";
	std::cout << std::endl << BLUE << "> HEALTH POINTS: " << _hp << std::endl;
	std::cout << "> ENERGY POINTS: " << _mana << std::endl;
	std::cout << "> ATTACK DAMAGE: " << _ad << std::endl;
	std::cout << RESET << std::endl;
}

