
#ifndef REPLACE_HPP

#define REPLACE_HPP

#include <iostream>

class	Replace
{
	private:
		std::string	str1;
		std::string	str2;

	public:
		Replace(void);
		Replace(std::string string1, std::string string2);
		~Replace(void);

		std::string	change_string(std::string &line);

};



#endif