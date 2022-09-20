#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

class Data
{
	private:
		std::string	_name;

	public:
		Data(std::string name);
		Data(const Data& other);
		Data& operator=(const Data& data);
		~Data();
		std::string getName(void) const;
};

uintptr_t	serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif