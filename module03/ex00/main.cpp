
#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "\n\n ~.~.~Starting simulation....~.~.~\n\n" << std::endl;
	ClapTrap burbuja("Burbuja");
	ClapTrap bombon("Bombon");

	std::cout << "\nBurbuja doesn't like Bombon...\n" << std::endl;
	for (int i=0; i < 3 ; i++)
	{
		burbuja.attack("Bombon");
		bombon.takeDamage(0);
	}
	std::cout << "\nbut Burbuja is harmless. However, the Dr. has noticed it " 
				<< "and is going to penalize her with 5 points of damage \n" << std::endl;
	burbuja.takeDamage(5);
	std::cout << "\nBurbuja is not worry, she can heal herself\n" << std::endl;
	burbuja.beRepaired(5);
	std::cout << "\nThe Dr. is surprised and now he is goint to do a new experiment...\n" << std::endl;
	ClapTrap beyota(burbuja);
	std::cout << "\nNow we have two Burbujas!...\n" << std::endl;
}