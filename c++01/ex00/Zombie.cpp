#include "Zombie.hpp"
Zombie::Zombie()
{
    std::cout<< "this is default constructor" << std::endl;
}
Zombie::~Zombie()
{
     std::cout<< "this is dedault destructor" << std::endl;
}
void Zombie::announce( void )
{
    std::cout << m_name <<  " :BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->m_name = name;
    std::cout<< "this is parametr constructor" << std::endl;
}