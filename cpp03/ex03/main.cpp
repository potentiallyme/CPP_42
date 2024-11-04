#include "DiamondTrap.hpp"

int main()
{
	std::cout << BYELLOW << "### TESTING CLAPTRAP ###\n" << RESET << std::endl;
	{
		std::cout << GREEN << "# Constructing #" << RESET << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << BLUE << std::endl << "# Testing #" << RESET << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << RED << "# Deconstructing #" << RESET << std::endl;
	}
	std::cout << BYELLOW << "\n\n### TESTING SCAVTRAP ###\n" << RESET << std::endl;
	{
		std::cout << GREEN << "# Constructing #" << RESET << std::endl;
		ScavTrap a;
		ScavTrap b("Savage");

		std::cout << BLUE << "# Testing #" << RESET << std::endl;
		a.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	a.attack("CloneTrap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		a.guardGate();
		b.attack("Savage-clone");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("ScavTrap-clone");
		std::cout << RED << "# Deconstructing #" << RESET << std::endl;
	}
	std::cout << BYELLOW << "\n\n### TESTING FRAGTRAP ###\n" << RESET << std::endl;
	{
		std::cout << GREEN << "# Constructing #" << RESET << std::endl;
		FragTrap a;
		FragTrap b("Chadd");

		std::cout << BLUE << "# Testing #" << RESET << std::endl;
		a.highFiveGuys();
		a.attack("some random dude");
		a.takeDamage(101);
		a.takeDamage(1);
		a.attack("some random dude");
		b.highFiveGuys();
		// for(int i = 0; i < 101; i++)
		// 	b.attack("FragTrap-clone");
		std::cout << RED << "# Deconstructing #" << RESET << std::endl;
	}
	std::cout << BYELLOW << "\n\n### TESTING DIAMONDTRAP ###\n" << RESET << std::endl;
	{
		std::cout << GREEN << "# Constructing #" << RESET << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);

		std::cout << BLUE << "# Testing #" << RESET << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << RED << "# Deconstructing #" << RESET << std::endl;
	}
	return (0);
}
