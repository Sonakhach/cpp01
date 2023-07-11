#include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    void announce( void );  
private:
    std::string m_name;    
};
Zombie* newZombie(std::string name);
void    randomChump(std::string name);