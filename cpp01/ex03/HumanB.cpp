#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0) {
    std::cout << _name << " arrives, unnarmed." << std::endl;
}

HumanB::~HumanB(){
    return;
}
