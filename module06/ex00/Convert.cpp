/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:19:51 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 14:58:01 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static const std::string ListFloat[] = {"-inff", "+inff", "nanf", "inff"};
static const std::string ListDouble[] = {"-inf", "+inf", "nan", "inf"};

Convert::Convert(){}
Convert::Convert(std::string input) : _input(input){}
Convert::Convert(Convert const & copy){*this = copy;}
Convert::~Convert(){}

Convert & Convert::operator=(Convert const & other)
{
	if (this != &other)
	{
		_input = other._input;
		_char = other._char;
		_int = other._int;
		_float = other._float;
		_double = other._double;
	}
	return (*this);
}

bool Convert::isInterger() const
{
	for(unsigned long i = 0; i < _input.length(); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			i++;
		if ((isdigit(_input[i]) == 0))
			return (false);
	}
	return (true);
}

bool Convert::isFloat() const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_input.compare(ListFloat[i]) == 0)
			return true;
	}
	if (_input[_input.length() - 1] != 'f')
		return (false);
	if (_input.find('.') == std::string::npos)
		return (false);
	int point = 0;
	for(unsigned long i = 0; i < (_input.length() - 1); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			i++;
		if (point == 0 && _input[i] == '.')
		{
			point = 1;
			i++;
		}
		if ((isdigit(_input[i]) == 0))
			return (false);
	}
	return (true);
}

bool Convert::isDouble() const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_input.compare(ListDouble[i]) == 0)
			return true;
	}
	if (_input.find('.') == std::string::npos)
		return (false);
	int point = 0;
	for(unsigned long i = 0; i < (_input.length() - 1); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			i++;
		if (point == 0 && _input[i] == '.')
		{
			point = 1;
			i++;
		}
		if ((isdigit(_input[i]) == 0))
			return (false);
	}
	return (true);
}

int Convert::typeOfInput() const
{
	int len = _input.length();
	if (len == 1)
	{
		if (isdigit(_input[0]))
			return (INT);
		return (CHAR);
	}
	if (isInterger())
		return (INT);
	if (isFloat())
		return (FLOAT);
	if (isDouble())
		return (DOUBLE);
	return (OTHER);
}

void	Convert::convertChar()
{
	_char = static_cast<char>(_input[0]);
	_val = static_cast<double>(_char);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void	Convert::convertInt()
{
	_val = std::strtod(_input.c_str(), NULL);
	_int = static_cast<int>(_val);
	_char = static_cast<double>(_int);
	if (checkLimitInt())
	{
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
	}
	else
	{
		_float = static_cast<float>(_val);
		_double = static_cast<double>(_val);
	}
}

void	Convert::convertFloat()
{
	_val = std::strtod(_input.c_str(), NULL);
	_float = static_cast<float>(_val);
	_int = static_cast<int>(_float);
	_char = static_cast<double>(_float);
	_double = static_cast<double>(_float);
}

void	Convert::convertDouble()
{
	_val = std::strtod(_input.c_str(), NULL);
	_double = _val;
	_float = static_cast<float>(_double);
	_int = static_cast<int>(_double);
	_char = static_cast<double>(_double);
}

bool Convert::checkLimitInt() const
{
	for (int i = 0; i < 4; i++)
	{
		if ((_input.compare(ListFloat[i]) == 0) || (_input.compare(ListDouble[i]) == 0))
			return (false);
	}
	if (_val > std::numeric_limits<int>::max() || _val < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

void	Convert::printChar() const
{
	if (!checkLimitInt())
		std::cout << "char: Impossible" << std::endl;
	else if (std::isprint(_char))
		std::cout << "char: \'" << _char << "\'" << std::endl;
	else if (isascii(_char))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
}

void	Convert::printInt() const
{
	if (checkLimitInt())
		std::cout << "int: " << _int << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
}

void	Convert::printFloat() const
{
	if (_int * 1.0 == _val)
	{
		std::cout.precision(1);;
		std::cout << "float: " << std::fixed << _float << "f" << std::endl;
	}
	else
		std::cout << "float: " << _float << "f" << std::endl;
}

void	Convert::printDouble() const
{
	if (_int * 1.0 == _val)
	{
		std::cout.precision(1);;
		std::cout << "double: " << std::fixed << _double << std::endl;
	}
	else
		std::cout << "double: " << _double << std::endl;
}

void	Convert::convertString()
{
	try
	{
		int type = typeOfInput();
		switch (type)
		{
			case CHAR:
				convertChar();
				break;
			case INT:
				convertInt();
				break;
			case FLOAT:
				convertFloat();
				break;
			case DOUBLE:
				convertDouble();
				break;
			default:
				throw Convert::UnknownTypeException();
		}
		printChar();
		printInt();
		printFloat();
		printDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW << e.what() << RESET << std::endl;
	}
}
