
#include "Replace.hpp"

Replace::Replace(void)
{

}

Replace::Replace(std::string string1, std::string string2)
{
	str1 = string1;
	str2 = string2;
}

Replace::~Replace(void)
{

}

std::string	Replace::change_string(std::string &line)
{
	std::string	old_line = line;
	std::size_t	found;

	found = old_line.find(str1);
	if (found == std::string::npos)
		return (line);
	line.clear();
	while(old_line[0] != '\0')
	{
		found = old_line.find(str1);
		if (found!=std::string::npos)
		{
			line += old_line.substr(0, found);
			line += str2;
			old_line = old_line.substr(found + str1.length(), old_line.length());
		}
		else
		{
			line += old_line;
			break;
		}
	}
	return(line);
}

/*
https://cplusplus.com/reference/string/string/find/
*/