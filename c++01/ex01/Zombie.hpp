#include <iostream>

class Zombie
{
private:
   std::string m_name;
public:
    Zombie();
    ~Zombie();   
    void		set_m(std::string name);
    void announce( void );
};

Zombie *zombieHorde( int N, std::string name );