#include "Zombie.hpp"

int main()
{
    Zombie *n;

    randomChump("bob");
    randomChump("john");
    n = newZombie("robert");
    n->announce();
}