#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void){
	{
		Weapon club = Weapon("club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	{
		Weapon something = Weapon("sword");
		HumanB john("John");
		john.setWeapon(something);
		john.attack();
		something.setType("log");
		john.setWeapon(something);
		john.attack();
	}
}
