#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << " this is constructor Zombie " << std::endl;
}

Zombie::~Zombie()
{
    std::cout << " this is destructor Zombie " << std::endl;
}

void    Zombie::set_m(std::string name)
{
    this-> m_name = name;
}

void Zombie::announce( void )
{
    std::cout << m_name << " BraiiiiiiinnnzzzZ... " << std::endl;
}