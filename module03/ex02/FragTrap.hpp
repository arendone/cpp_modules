
#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	
	public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap& src);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& rhs);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		highFivesGuys(void);
};

#endif