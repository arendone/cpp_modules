
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	setHitPoints(FragTrap::_start_hitPoints);
	setEnergy(ScavTrap::_start_energy);
	setDamage(FragTrap::_start_damage);
	_name = getName();
	std::cout << "The DiamondTrap " << _name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string Name) : ClapTrap(Name + "_clap_name"), _name(Name)
{
	setHitPoints(this->FragTrap::_start_hitPoints);
	setEnergy(ScavTrap::_start_energy);
	setDamage(FragTrap::_start_damage);
	std::cout << "The DiamondTrap " << _name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src.getName())
{
	setHitPoints(src.getHitPoints());
	setEnergy(src.getEnergy());
	_name = src._name;
	setDamage(src.getDamage());
	std::cout << "DiamondTrap " << _name << " copy created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "The DiamondTrap " << _name << " was destroyed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
	_name = rhs._name;
	std::cout << "DiamondTrap " << _name << " assigned" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello, I am " << _name << " and my ClapTrap name is "
				<< getName() << std::endl;
}
