#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << "this is parametr constructor HumanB" << std::endl;
    this->m_name = name;
}

HumanB::~HumanB()
{
    std::cout << "this is destructor HumanB" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->m_name << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &club)
{
    weapon = &club;
}