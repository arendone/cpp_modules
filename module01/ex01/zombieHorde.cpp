
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*ptr_horde = new Zombie[N];
	if (!ptr_horde)
		return(NULL);
	for(int i = 0; i < N; i++)
	{
		ptr_horde[i].addname(name);
	}
	return (ptr_horde);
}