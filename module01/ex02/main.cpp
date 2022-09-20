
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\033[3;32m\nMemory address of the string variable: \033[0m " 
				<<	&str << std::endl;
	std::cout << "\033[3;32mMemory address held by stringPTR: \033[0m " 
				<<	stringPTR << std::endl;
	std::cout << "\033[3;32mMemory address held by stringREF: \033[0m " 
				<<	&stringREF << "\n" << std::endl;

	std::cout << "\033[3;32m\nThe value of the string variable: \033[0m " 
				<<	str << std::endl;
	std::cout << "\033[3;32mThe value pointed to by stringPTR: \033[0m " 
				<<	*stringPTR << std::endl;
	std::cout << "\033[3;32mThe value pointed to by stringREF: \033[0m " 
				<<	stringREF << "\n" << std::endl;

	return (0);
}