#ifndef ZOMBIE_HP

# define ZOMBIE_HP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	addname(std::string newname);
};

Zombie*	zombieHorde(int N, std::string name);

#endif