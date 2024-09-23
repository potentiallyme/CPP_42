#include "Zombie.hpp"

int main(void){
    std::cout << std::endl << "\033[1;91mHeap zombies\033[0;96m" << std::endl;
    Zombie *zomb1 = newZombie("Bob");
    Zombie *zomb2 = newZombie("Ron");
    Zombie *zomb3 = newZombie("Mac");
    zomb1->announce();
    zomb2->announce();
    zomb3->announce();
    delete(zomb1);
    delete(zomb2);
    delete(zomb3);

    std::cout << std::endl << "\033[1;94mStack zombies\033[0;96m" << std::endl;
    randomChump("Lily");
    randomChump("Lucy");
    randomChump("Lana");

}
