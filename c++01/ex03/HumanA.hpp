#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string m_name;
    Weapon *weapon;
    
public:
    HumanA(std::string m_name, Weapon &club);
    ~HumanA();
    void attack(void);
};
