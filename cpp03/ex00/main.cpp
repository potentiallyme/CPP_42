#include "ClapTrap.hpp"

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

		a.printStats();
		b.printStats();
		DESTRUCT	
	}
	return (0);
}

