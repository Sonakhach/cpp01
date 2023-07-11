 #include "Zombie.hpp"
 #include <iostream>

void randomChump( std::string name )
{
    Zombie Animal(name);
    Animal.announce();
}