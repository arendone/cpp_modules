
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap monster("Monster");
	monster.whoAmI();
	monster.guardGate();
	monster.highFivesGuys();
	std::cout << "life: " << monster.getHitPoints() <<std::endl;
	std::cout << "energy: " << monster.getEnergy() <<std::endl;
	std::cout << "damage: " << monster.getDamage() <<std::endl;

	std::cout << "\n-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-.-..-.-\n" << std::endl;
	DiamondTrap javi("Javi");
	javi.whoAmI();
	javi.attack("a Tree");
	std::cout << "energy: " << javi.getEnergy() <<std::endl;

	std::cout << "\n-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-.-..-.-\n" << std::endl;
	DiamondTrap lulu(monster);
	lulu.whoAmI();
	std::cout << "energy: " << lulu.getEnergy() <<std::endl;

	std::cout << "\n-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-.-..-.-\n" << std::endl;
	lulu = javi;
	lulu.whoAmI();
	std::cout << "energy: " << lulu.getEnergy() <<std::endl;

	std::cout << "\n-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-.-..-.-\n" << std::endl;
	return(0);
}