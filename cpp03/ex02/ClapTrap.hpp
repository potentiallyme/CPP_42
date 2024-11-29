#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include "Macros.hpp"

class ClapTrap{
	protected:
		int _hp;
		int _mana;
		int _ad;
		std::string _name;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const &other);
		ClapTrap& operator=(ClapTrap const &other);
		

		ClapTrap(std::string name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printStats();
};

#endif
