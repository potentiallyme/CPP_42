#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &);
		~DiamondTrap();

		DiamondTrap & operator=(const DiamondTrap &);
		void attack(const std::string& target);
		void whoAmI();

	private:
		std::string _name;
};

#endif