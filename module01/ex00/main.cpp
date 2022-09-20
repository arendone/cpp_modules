
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "\033[3;32m\nLets create one heapZombie and one stackZombie\033[0m " << std::endl;
	Zombie *heapZombie = new Zombie("Vanessa Heap");
	Zombie stackZombie = Zombie("Coco Stack");

	std::cout << "\033[3;32m\nCall the funtion announce for both of them:\033[0m " << std::endl;
	heapZombie->announce();
	stackZombie.announce();

	std::cout << "\033[3;32m\nLets call the function randomChump to create Carolina:\033[0m " << std::endl;
	randomChump("Carolina Stack");
	
	std::cout << "\033[3;32m\nLets delete the heapZombie: \033[0m " << std::endl;
	delete heapZombie;

	std::cout << "\033[3;32m\nThis is the last line of the main_function (before return) \033[0m " << std::endl;
	return (0);
}
