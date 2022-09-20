
#include "Replace.hpp"
#include <fstream>

int	print_error(std::string message)
{
	std::cout << message << std::endl;
	return (1);
}

int	input_error(int argc, char **argv)
{
	if (argc != 4)
	{
		return (print_error("Wrong parameters"));
	}
	else if (strlen(argv[2]) == 0)
	{
		return (print_error("The string s1 can't be a empty string"));
	}
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (input_error(argc, argv) != 0)
		return (1);

	char *filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	Replace replace_str(s1, s2);
	
	std::string newfile = filename;
	newfile += ".replace";
	
	std::ifstream inFile(filename, std::ifstream::in);
	if (!inFile.good())
		return (print_error("Failed to open files"));
	std::string line;
	std::ofstream outFile(newfile, std::fstream::out);
	if (outFile.good())
	{
		while(getline(inFile, line))
		{
			replace_str.change_string(line);
			outFile << line << std::endl;
			line.clear();
		}
	}
	else
	{
		inFile.close();
		return (print_error("Failed to open files"));
	}
	inFile.close();
	outFile.close();
	return (0);
}
