
#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string weapon_type)
{
	type = weapon_type;
}

Weapon::~Weapon(void)
{

}

const std::string	&Weapon::getType(void)
{
	std::string &typeREF = type;
	return (typeREF);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}