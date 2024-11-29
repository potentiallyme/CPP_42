#include "Zombie.hpp"

Zombie::Zombie() : _name("An unnamed zombie"){
    std::cout << _name << " rises... Urrrgghhh" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name){
    std::cout << _name << " comes to life... Grrrrrr" << std::endl;
}

Zombie::~Zombie(){
    std::cout << _name << " has died... again." << std::endl;
}

void Zombie::announce(void) const{
    std::cout << _name << ": BraiiiiiiiinnnzzzZ..." << std::endl;
}

