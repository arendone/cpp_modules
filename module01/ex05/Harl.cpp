
#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug( void )
{
	std::cout << "\033[5;36m[DEBUG]\033[0m "<<std::endl;
	std::cout << "\033[3;32m'I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!'\033[0m"
				<<	std::endl;
}
void Harl::info( void )
{
	std::cout << "\033[5;35m[INFO]\033[0m "<<std::endl;
	std::cout << "\033[3;32m'I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!'\033[0m"
				<<	std::endl;
}
void Harl::warning( void )
{
	std::cout << "\033[7;33m[WARNING]\033[0m "<<std::endl;
	std::cout << "\033[3;32m'I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.'\033[0m"
				<<	std::endl;
}
void Harl::error( void )
{
	std::cout << "\033[7;31m[ERROR]\033[0m "<<std::endl;
	std::cout << "\033[3;32m'This is unacceptable! I want to speak to the manager now.'\033[0m"
				<<	std::endl;
}

/*
typedef void (Harl::*pointToComplain[4])(void)
*/
void	Harl::complain(std::string level)
{
	void (Harl::*pointToComplain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (!list[i].compare(level))
		{
			(this->*pointToComplain[i])();
			return ;
		}
	}
	std::cout << "\033[7;38m[WTF?!]\033[0m "<<std::endl;
}

