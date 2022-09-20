
#include "HumanB.hpp"

HumanB::HumanB(std::string humanname)
{
	this->name = humanname;
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " does not have a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weaponB)
{
	this->weapon = &weaponB;
}
