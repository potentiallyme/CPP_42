#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){
    std::cout << _name << " arrives, unnarmed." << std::endl;
}

HumanB::~HumanB(){
    return;
}

void HumanB::setWeapon(Weapon &weapon){
    _weapon = &weapon;
}

void HumanB::attack(){
    if (_weapon == NULL)
        std::cout << _name << " has no weapon to attack..." << std::endl;
    else
        std::cout << _name << " attacks with their " << (_weapon)->getType() << "!" << std::endl;
}
