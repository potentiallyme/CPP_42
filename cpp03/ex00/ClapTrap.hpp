#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include "Macros.hpp"

class ClapTrap{
	private:
		int _hp;
		int _mana;
		int _ad;
		std::string _name;
	public:
		ClapTrap();
		~ClapTrap();

		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &);
		ClapTrap& operator=(const ClapTrap &);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printStats();
};

#endif
