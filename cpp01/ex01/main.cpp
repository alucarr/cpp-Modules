#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = zombieHorde(5, "halis");
    
    delete[] zombie1;
    return 0;
}