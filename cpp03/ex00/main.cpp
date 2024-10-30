#include "ClapTrap.hpp"

int main(void){
	ClapTrap def1;
	ClapTrap def2;
	ClapTrap bob("Bob");
	ClapTrap lulu("Lulu");
	ClapTrap bob2(bob);

	lulu.attack("a scary enemy");
	def1.attack("Bob");
	bob.takeDamage(0);
	def2.takeDamage(12);
	def2.beRepaired(2);
	bob.printStats();
	def2.printStats();
}
