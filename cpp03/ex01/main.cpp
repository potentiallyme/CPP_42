#include "ScavTrap.hpp"

int main(void){
	ScavTrap scavTrap1;
	ScavTrap scavTrap2(scavTrap1);
	ScavTrap scavTrap3("John");
	scavTrap3 = scavTrap2;

	scavTrap1.attack("scavTrap2");
	scavTrap2.takeDamage(5);
	scavTrap1.attack("scavTrap3");
	scavTrap3.takeDamage(11);
	scavTrap3.takeDamage(1);
	scavTrap2.beRepaired(5);
	scavTrap1.guardGate();
	scavTrap1.guardGate();

	scavTrap1.printStats();
	scavTrap2.printStats();
	scavTrap3.printStats();
}
