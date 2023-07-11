#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "This is Harl constructor" << std::endl;
}
Harl::~Harl()
{
    std::cout << "This is Harl destructor" << std::endl;
}
void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; 
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; 
}
void Harl::complain(std::string level)
{
    std::string levels[] = {"debug", "info", "warning", "error"};
    void (Harl::*ptr_complain[])(void) = {
       ptr_complain[0] = &Harl::debug, 
       ptr_complain[1] = &Harl::info, 
       ptr_complain[2] = &Harl::warning, 
       ptr_complain[3] = &Harl::error
       };
    int i = 0;
    for (; i < 4 && levels[i] != level;)
	{        
		 i++;
	}
    switch (i)
        {
        case 0:
            (this->*ptr_complain[0])();
        case 1:
            (this->*ptr_complain[1])();
        case 2:
            (this->*ptr_complain[2])();
        case 3:
            (this->*ptr_complain[3])();
        default:
            break;
        }
}