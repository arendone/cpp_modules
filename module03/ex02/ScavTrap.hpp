
#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	
	public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& rhs);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		guardGate();
};

#endif