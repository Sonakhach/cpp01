#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
     std::string m_name;
     Weapon *weapon;
    
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &club);

};
