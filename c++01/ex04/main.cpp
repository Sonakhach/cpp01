#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string str;	
		std::string readfile(av[1]);
		std::string readablelin(av[2]);
		std::string line(av[3]);
		std::fstream infile(readfile, std::fstream::in);
		std::fstream outfile(readfile + ".replace", std::fstream::out);
		if (infile.is_open())
		{
			if (readablelin.empty() || line.empty())
			{
				std::cout << "error empty member" << std::endl;
				return 0;
			}
			while (getline(infile, str))
			{
				int start;

				start = str.find(readablelin);
				if (start != -1)
				{
					str.erase(start,readablelin.length());		
					str.insert(start,line);
				}
				outfile << str << std::endl;
			}		
		}
		else
			std::cout << "Error in open file " << std::endl;
	}
	else
	{
		std::cout << "error " << std::endl;
		return 0;
	}
	return 0;
}