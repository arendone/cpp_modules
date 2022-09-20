
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Anonymous"), _hitPoints(10), _energy(10), _damage(0)
{
	std::cout << "An Anonymous ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energy(10), _damage(0)
{
	std::cout << "The ClapTrap " << name << " was created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
: _name(src._name), _hitPoints(src._hitPoints), _energy(src._energy), _damage(src._damage)
{
	std::cout << "ClapTrap " << _name << " copy created" << std::endl;
}
	
ClapTrap::~ClapTrap()
{
	std::cout << "The ClapTrap " << _name << " was destroyed" << std::endl;
}

ClapTrap &	ClapTrap::operator=(const ClapTrap& rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energy = rhs._energy;
	_damage = rhs._damage;
	std::cout << _name << " assigned" << std::endl;
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " out of energy" << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return ;
	}
	_energy--;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing "
				<< _damage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " received " << amount 
				<< " points of damage!" << std::endl;
	if (_hitPoints <= 0)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "Remaining life points: " << _hitPoints << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " out of energy" << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return ;
	}
	_energy--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " was repaired. (+" << amount 
				<< " life points)" << std::endl;
	std::cout << "Remaining life points: " << _hitPoints << std::endl;	
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

int		ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int		ClapTrap::getEnergy(void) const
{
	return (_energy);
}

int		ClapTrap::getDamage(void) const
{
	return (_damage);
}

void	ClapTrap::setName(std::string Name)
{
	_name = Name;
}

void	ClapTrap::setHitPoints(int amount)
{
	_hitPoints = amount;
}

void	ClapTrap::setEnergy(int amount)
{
	_energy = amount;
}

void	ClapTrap::setDamage(int amount)
{
	_damage = amount;
}

