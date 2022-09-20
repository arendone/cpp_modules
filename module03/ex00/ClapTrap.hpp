
#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energy;
	int			_damage;
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();

	ClapTrap &	operator=(const ClapTrap& rhs);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
