#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	FragTrap def1;
	FragTrap def2(def1);
	FragTrap bob("Bob");
	FragTrap lulu("Lulu");
	bob.takeDamage(33);
	lulu = bob;
	lulu.attack("a scary enemy");
	def1.attack("Bob");
	def2.takeDamage(12);
	def2.beRepaired(2);
	bob.printStats();
	lulu.printStats();
	def2.printStats();
	lulu.highFiveGuys();
}
