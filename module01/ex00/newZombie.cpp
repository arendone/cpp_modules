
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *ptr_zombie = new Zombie(name);
	if (!ptr_zombie)
		return (NULL);
	return(ptr_zombie);
}