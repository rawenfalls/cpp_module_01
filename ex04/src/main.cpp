

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

std::string my_replace(std::string buffer, const std::string search, const std::string replace)
{
	size_t	erase_length = search.length();
	size_t	replace_length = replace.length();
	size_t	pos_search = 0;

	pos_search = buffer.find(search);
	while (pos_search != std::string::npos)
	{
		buffer.erase(pos_search, erase_length);
		buffer.insert(pos_search, replace);
		pos_search = buffer.find(search, pos_search + replace_length);
	}
	return (buffer);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of arguments" << std::endl <<
		"Usage:\t./replace <file_name> <search> <replace>" << std::endl;
	}
	else
	{
		const std::string filename = argv[1];
		const std::string	search = argv[2];
		const std::string	replace = argv[3];
		std::string			buffer;
		std::ifstream		infile;
		std::ofstream		outfile;
		std::string	out_f = filename + ".replace\0";
		const char* chr = out_f.c_str();

		infile.open(argv[1]);
		if (infile.is_open() == true)
		{
			outfile.open(chr, std::ios::out | std::ios::trunc ); 
			if (outfile.is_open() == true)
			{
				while (std::getline(infile, buffer))
				{
					buffer = my_replace(buffer, search, replace);
					outfile << buffer;
					if (infile.peek() != EOF)
						outfile << std::endl;
				}
				outfile.close();
			}
			else
			{
				std::perror("Outfile Error");
				infile.close();
				return (1);
			}
			infile.close();
		}
		else
		{
			std::perror("Infile Error");
			std::cout << "Outfile not created or truncated." << std::endl;
			return (1);
		}
		return (0);
	}
	return (1);
}
