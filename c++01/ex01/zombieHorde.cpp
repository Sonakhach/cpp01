#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    Zombie *Zoo = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Zoo[i].set_m(name);
        Zoo[i].announce();
    }
        return (Zoo);
}