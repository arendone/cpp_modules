
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setHitPoints(_start_hitPoints);
	setEnergy(_start_energy);
	setDamage(_start_damage);
	std::cout << "The FragTrap " << getName() << " was created" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	setHitPoints(_start_hitPoints);
	setEnergy(_start_energy);
	setDamage(_start_damage);
	setName(Name);
	std::cout << "The FragTrap " << getName() << " was created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src.getName())
{
	setHitPoints(src.getHitPoints());
	setEnergy(src.getEnergy());
	setDamage(src.getDamage());
	std::cout << "FragTrap " << getName() << " copy created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "The FragTrap " << getName() << " was destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& rhs)
{
	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
	std::cout << "FragTrap " << getName() << " assigned" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (getEnergy() <= 0)
	{
		std::cout << "FragTrap " << getName() << " out of energy" << std::endl;
		return ;
	}
	if (getHitPoints() <= 0)
	{
		std::cout << "FragTrap " << getName() << " is dead" << std::endl;
		return ;
	}
	setEnergy(getEnergy() - 1);
	std::cout << "FragTrap " << getName() << " attacks " << target << " causing "
				<< getDamage() << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << ": Hey you! Give me a high five!" <<std::endl;
}

// void	FragTrap::takeDamage(unsigned int amount)
// {
// 	if (getHitPoints() <= 0)
// 	{
// 		std::cout << "FragTrap " << getName() << " is dead" << std::endl;
// 		return ;
// 	}
// 	setHitPoints(getHitPoints() - amount);
// 	std::cout << "FragTrap " << getName() << " received " << amount 
// 				<< " points of damage!" << std::endl;
// 	if (getHitPoints() <= 0)
// 	{
// 		setHitPoints(0);
// 		std::cout << "FragTrap " << getName() << " is dead" << std::endl;
// 		return ;
// 	}
// 	std::cout << "Remaining life points: " << getHitPoints() << std::endl;
// }