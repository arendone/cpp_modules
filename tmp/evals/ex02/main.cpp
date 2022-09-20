#include "Base.hpp"

int	main(void)
{
	Base* base1;

	base1 = generate();
	identify(base1);
	identify(*base1);

	return 0;
}