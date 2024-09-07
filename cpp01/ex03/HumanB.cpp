#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0) {
    std::cout << _name << " arrives, unnarmed." << std::endl;
}

HumanB::~HumanB(){
    return;
}

void HumanB::attack(void){
    if (_weapon == NULL){

    }
    std::cout << _name << " attacks with their " << _weapon.getType() << "!" << std::endl;
}