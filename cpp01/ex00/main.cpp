#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("halis");
    zombie->announce();
    randomChump("hamsi");
    delete zombie;
    return 0;
}