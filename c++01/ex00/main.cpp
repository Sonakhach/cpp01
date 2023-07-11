 #include "Zombie.hpp"
 int main()
 {
    Zombie aaa("qawsdc");
    Zombie* obj = newZombie("LOOooooo");
    obj->announce();
    randomChump("yyyy");
    aaa.announce();
    delete obj;
 }