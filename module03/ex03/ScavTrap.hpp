
#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& rhs);

	void		attack(const std::string& target);
	void		guardGate();

	static const int _start_hitPoints = 100;
	static const int _start_energy = 50;
	static const int _start_damage = 20;
};

#endif