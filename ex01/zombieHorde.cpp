#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie a;
    
    a = new (Zombie[N](name));
    for(int i = 0; i < N; ++i)
}