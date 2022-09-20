#include "Data.hpp"

Data::Data(std::string name) : _name(name) {}
Data::~Data() {}

std::string Data::getName(void) const { return (this->_name); }

Data::Data(const Data& other)
{
	*this = other;
}

Data& Data::operator=(const Data& data)
{
	this->_name = data._name;
	return *this;
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

