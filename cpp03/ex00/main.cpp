#include "ClapTrap.hpp"

int main(void){
	ClapTrap clapTrap1;
	ClapTrap clapTrap2(clapTrap1);
	ClapTrap clapTrap3("John");
	clapTrap3 = clapTrap2;

	clapTrap1.attack("clapTrap2");
	clapTrap2.takeDamage(5);
	clapTrap1.attack("clapTrap3");
	clapTrap3.takeDamage(11);
	clapTrap3.takeDamage(1);
	clapTrap2.beRepaired(5);

	clapTrap1.printStats();
	clapTrap2.printStats();
	clapTrap3.printStats();
}
