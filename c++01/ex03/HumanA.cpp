#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club)
{
    std::cout << "this is parametr constructor HumanA" << std::endl;
    this->m_name = name;
    weapon = &club;

}

HumanA::~HumanA()
{
    std::cout << "this is denstructor HumanA" << std::endl;
}
void HumanA::attack()
{
    std::cout << this->m_name << weapon->getType() << std::endl;
}