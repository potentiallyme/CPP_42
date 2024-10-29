#include "ScavTrap.hpp"

int main(void){
	ScavTrap def1;
	ScavTrap def2(def1);
	ScavTrap bob("Bob");
	ScavTrap lulu("Lulu");
	// std::cout << "hey" << std::endl;
	bob.takeDamage(33);
	lulu = bob;
	lulu.attack("a scary enemy");
	def1.attack("Bob");
	def2.takeDamage(12);
	def2.beRepaired(2);
	bob.printStats();
	lulu.printStats();
	def2.printStats();
	lulu.guardGate();
}