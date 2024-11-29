#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
    std::cout << _name << " arrives, armed with a " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(){
    return;
}

void HumanA::attack(){
    std::cout << _name << " attacks with their " << _weapon.getType() << "!" << std::endl;
}

