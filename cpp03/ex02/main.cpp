#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	std::cout << BYELLOW << "\n\n||--> TESTING CLAPTRAP <--||\n" << RESET << std::endl;
	{
		CONSTRUCT
		ClapTrap a;
		ClapTrap b("Bob");

		TESTS
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Tim");
		b.beRepaired(3);
		DESTRUCT	
}
	std::cout << BYELLOW << "\n\n||--> TESTING SCAVTRAP <--||\n" << RESET << std::endl;
	{
		CONSTRUCT
		ScavTrap a;
		ScavTrap b("Bob");

		TESTS
		a.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	a.attack("CloneTrap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		a.guardGate();
		b.attack("Tim");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("Fake");
		DESTRUCT
	}
	std::cout << BYELLOW << "\n\n||--> TESTING FRAGTRAP <--||\n" << RESET << std::endl;
	{
		CONSTRUCT
		FragTrap a;
		FragTrap b("Bob");

		TESTS
		a.highFiveGuys();
		a.attack("some random bot");
		a.takeDamage(101);
		a.takeDamage(1);
		a.attack("some random bot");
		b.highFiveGuys();

		a.printStats();
		b.printStats();
		DESTRUCT
	}
	return (0);
}
