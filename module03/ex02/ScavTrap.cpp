
#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	setHitPoints(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "The ScavTrap " << getName() << " was created" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	setHitPoints(100);
	setEnergy(50);
	setDamage(20);
	setName(Name);
	std::cout << "The ScavTrap " << getName() << " was created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src.getName())
{
	setHitPoints(src.getHitPoints());
	setEnergy(src.getEnergy());
	setDamage(src.getDamage());
	std::cout << "ScavTrap " << getName() << " copy created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "The ScavTrap " << getName() << " was destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& rhs)
{
	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
	std::cout << "ScavTrap " << getName() << " assigned" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergy() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " out of energy" << std::endl;
		return ;
	}
	if (getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead" << std::endl;
		return ;
	}
	setEnergy(getEnergy() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target << " causing "
				<< getDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead" << std::endl;
		return ;
	}
	setHitPoints(getHitPoints() - amount);
	std::cout << "ScavTrap " << getName() << " received " << amount 
				<< " points of damage!" << std::endl;
	if (getHitPoints() <= 0)
	{
		setHitPoints(0);
		std::cout << "ScavTrap " << getName() << " is dead" << std::endl;
		return ;
	}
	std::cout << "Remaining life points: " << getHitPoints() << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}