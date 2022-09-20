
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string humanname, Weapon &weaponA) : weapon(weaponA)
{
	this->name = humanname;
}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with " << weapon.getType() << std::endl;
}