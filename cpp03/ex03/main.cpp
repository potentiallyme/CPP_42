#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap dfl;
	DiamondTrap bob("bob");
	DiamondTrap maybe_bob(bob);

	bob.attack("bob Clone");
	maybe_bob.takeDamage(4000);
	maybe_bob.beRepaired(5000);
	dfl.guardGate();
	bob.highFiveGuys();
	maybe_bob.whoAmI();

	dfl.printStats();
	bob.printStats();
	maybe_bob.printStats();
}
