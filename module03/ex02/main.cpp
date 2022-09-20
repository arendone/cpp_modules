
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\n\n ~.~.~Starting simulation....~.~.~\n" << std::endl;
	ScavTrap serena("Serena");
	ScavTrap norma("Norma");

	std::cout << "\n~.~.~.~.~\n" << std::endl;
	serena.attack("Norma");
	norma.takeDamage(serena.getDamage());

	std::cout << "\n~.~.~.~.~\n" << std::endl;
	FragTrap mia("Mia");
	FragTrap lola("Lola");

	std::cout << "\n~.~.~.~.~\n" << std::endl;
	mia.highFivesGuys();
	lola.attack("Mia");
	mia.takeDamage(lola.getDamage());

	std::cout << "\n~.~.~.~.~\n" << std::endl;
	norma.guardGate();
	serena.guardGate();

	std::cout << "\n~.~.~.~.~\n" << std::endl;
	mia.attack("Lola");
	lola.takeDamage(mia.getDamage());
	mia.attack("Lola");
	lola.takeDamage(mia.getDamage());
	mia.attack("Lola");
	lola.takeDamage(mia.getDamage());
	mia.attack("Lola");
	lola.takeDamage(mia.getDamage());

	return(0);
}