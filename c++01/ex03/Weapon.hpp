#pragma once 
#include <iostream>

class Weapon
{
private:
    std::string m_type;
    
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType(void)const;
    void setType(std::string type);
};
