#include "Zombie.hpp"

Zombie *newZombie(std::string name){
    Zombie *zew = new Zombie(name);
    return zew;
}