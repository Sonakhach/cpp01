#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "this is parametr constructor Weapon" << std::endl;
    this->setType(type);
}

Weapon::~Weapon()
{
     std::cout << "this is denstructor Weapon" << std::endl;
}
const std::string &Weapon::getType(void)const
{
    return (this->m_type);
}

void Weapon::setType(std::string type)
{
    this->m_type = type;
}