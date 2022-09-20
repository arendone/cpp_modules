
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "\n\n ~.~.~Starting simulation....~.~.~\n\n" << std::endl;
	ScavTrap serena("Serena");
	ScavTrap norma("Norma");
	
	serena.attack("Norma");
	norma.takeDamage(serena.getDamage());

	norma.guardGate();


	return(0);
}