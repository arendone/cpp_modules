
#include "Zombie.hpp"

int	main(void)
{
	int	N = 10;
	Zombie *zombie_horde = zombieHorde(N, "Anahog");

	for (int i = 0; i < N ; i++)
	{
		std::cout << "\033[3;32mZombie number " << i + 1 << " ->\033[0m " << std::endl;
		zombie_horde[i].announce();
	}
	std::cout << "\033[3;32mDestroying zombies->\033[0m " << std::endl;
	delete[] (zombie_horde);
	return (0);
}
