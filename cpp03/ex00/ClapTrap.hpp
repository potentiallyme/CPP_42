#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

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

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printStats();
};

const std::string red("\033[0;31m");
const std::string green("\033[0;32m");
const std::string lblue("\033[1;34m");
const std::string blue("\033[0;34m");
const std::string purple("\033[0;35m");
const std::string reset("\033[0m");

#endif
