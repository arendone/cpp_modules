#include "Base.hpp"

Base::~Base() {}

Base* generate(void)
{
	srand(time(NULL));
	int val = rand();
	switch((val % 3) + 1)
	{
		case 1:
			return (new A());
		case 2:
			return (new B());
		case 3:
			return (new C());
	}
	return NULL;
}

void identify(Base* p)
{
	if ((dynamic_cast<A*>(p) != nullptr))
		std::cout << "Pointer check: Type A" << std::endl;
	if ((dynamic_cast<B *>(p) != nullptr))
		std::cout << "Pointer check: Type B" << std::endl;
	if ((dynamic_cast<C *>(p) != nullptr))
		std::cout << "Pointer check: Type C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Reference check: Type A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "Reference check: Type B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "Reference check: Type C" << std::endl;
	}
	catch (std::exception &e) {}
}