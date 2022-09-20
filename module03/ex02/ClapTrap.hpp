
#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
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
	
		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getEnergy(void) const;
		int		getDamage(void) const;
		void	setName(std::string Name);
		void	setHitPoints(int amount);
		void	setEnergy(int amount);
		void	setDamage(int amount);
};

#endif
