#include "Zombie.hpp"

Zombie::Zombie() : _name(""){
}

Zombie::~Zombie(){
    std::cout << _name << " has died... for good." << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name){
    _name = name;
    std::cout << name << " has risen from the dead! Buuurrrrrrrrrhhh" << std::endl;
}