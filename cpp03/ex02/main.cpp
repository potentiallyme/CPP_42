#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap scavTrap1("Rob");
	ScavTrap scavTrap2(scavTrap1);
	std::cout << std::endl;
	FragTrap fragTrap1("Hank");
	FragTrap fragTrap2;

	scavTrap1.attack("scavTrap2");
	scavTrap2.takeDamage(20);
	scavTrap1.attack("fragTrap1");
	fragTrap1.takeDamage(20);
	fragTrap1.takeDamage(20);
	fragTrap1.takeDamage(20);
	fragTrap1.takeDamage(20);
	fragTrap1.takeDamage(20);
	fragTrap1.takeDamage(20);

	fragTrap2 = fragTrap1;
	fragTrap2.attack("himself?");
	fragTrap2.takeDamage(30);
	scavTrap2.beRepaired(15);
	fragTrap2.highFiveGuys();

	scavTrap1.printStats();
	scavTrap2.printStats();
	fragTrap1.printStats();
	fragTrap2.printStats();
}
