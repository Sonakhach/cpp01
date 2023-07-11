#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string str;
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "please enter debug, info, worning or error->" << std::endl;
		if(std::getline(std::cin, str) && str != "")
			harl.complain(str);		
	}
	
	return 0;
}