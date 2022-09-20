
#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap& src);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& rhs);

	void		attack(const std::string& target);
	void		highFivesGuys(void);

	static const int _start_hitPoints = 100;
	static const int _start_energy = 100;
	static const int _start_damage = 30;
};

#endif