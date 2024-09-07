#include "Zombie.hpp"

int main(void){
    int N = 12;
    Zombie *horde = zombieHorde(N, "John Charles the 12th part of the 5th of the name (duodecuplets)");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete [] horde;
}