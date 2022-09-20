#include "Data.hpp"

void	testFunction(void)
{
	Data* data = new Data("Katharina");
	Data* new_ptr;
	uintptr_t test;

	std::cout << "Data-Name data: " << data->getName() << std::endl;
	test = serialize(data);
	new_ptr = deserialize(test);
	std::cout << "Data-Name new_ptr: " << new_ptr->getName() << std::endl;

	delete data;
}

int main(void)
{
	testFunction();
	// system("leaks uintptr");
	return (0);
}
