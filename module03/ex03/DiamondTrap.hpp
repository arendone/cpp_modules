
#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(const std::string Name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap();

	DiamondTrap&	operator=(const DiamondTrap& rhs);

	void	attack(const std::string& target);
	void	whoAmI();
};

#endif