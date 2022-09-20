
#include "Harl.hpp"

int	print_error(std::string message)
{
	std::cout << message << std::endl;
	return (1);
}

int	evaluateComplain(std::string level)
{
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!list[i].compare(level))
		{
			return(i);
		}
	}
	return (4);
}

/*Lo que hace el main deberia estar en las funciones de la clase porque la idea
es que el main sea para el usuario*/
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (print_error("Wrong parameters"));
	std::string complain= argv[1];
	if (complain.length() == 0)
		return (print_error("Seems like Harl is happy today :)"));
	Harl harl;
	int level = evaluateComplain(complain);
	switch(level)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		case 4:
			std::cout << "\033[3;32m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
			break ;
	}
	return (0);
}