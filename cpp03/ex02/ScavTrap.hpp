#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
		bool _gK;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap(ScavTrap const &other);
		ScavTrap& operator=(ScavTrap const &other);
		void guardGate();
};

#endif
