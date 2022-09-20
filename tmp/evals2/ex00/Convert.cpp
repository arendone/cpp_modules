/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:06:31 by sreinhol          #+#    #+#             */
/*   Updated: 2022/08/29 00:27:48 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _input("0"), _i(0), _d(0), _f(0), _c(0), _type(UNKOWN), _pseudo(false)
{}

Convert::Convert(std::string str): _input(str), _i(0), _d(0), _f(0), _c(0)
{
	if (str == "")
		throw (Convert::InputException());
}

Convert::~Convert(void)
{}

Convert::Convert(Convert const & rhs): _input(rhs._input), _i(rhs._i), _d(rhs._d),
	_f(rhs._f), _c(rhs._c), _type(rhs._type), _pseudo(rhs._pseudo)
{
	*this = rhs;
	return;
}

Convert & Convert::operator=(Convert const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_input = rhs._input;
	this->_i = rhs._i;
	this->_d = rhs._d;
	this->_f = rhs._f;
	this->_c = rhs._c;
	this->_type = rhs._type;
	return *this;
}

const char *Convert::InputException::what() const throw()
{
	return ("Invalid Input!");
}

std::string Convert::getInput(void) const
{
	return (this->_input);
}

void	Convert::setType(void)
{
	bool flt = false;
	bool point = false;
	if (_input == "-inf" || _input == "+inf" || _input == "nan")
	{
		this->_type = DOUBLE;
		this->_pseudo = true;
		return ;
	}
	if (_input == "-inff" || _input == "+inff" || _input == "nanf")
	{
		this->_type = FLOAT;
		this->_pseudo = true;
		return ;
	}
	if (this->_input.length() == 1)
	{
		if ((this->_input >= "0") && (this->_input <= "9"))
			this->_type = INT;
		else if (std::isalpha(this->_input[0]))
			this->_type = CHAR;
		else
			throw Convert::InputException();
		return ;
	}
	else if (this->_input[this->_input.length() - 1] == 'f')
		flt = true;
	for (size_t i = 0; i < this->_input.length(); i++)
	{
		if (i == 0 && (this->_input[i] == '+' || this->_input[i] == '-'))
			i++;
		if (std::isdigit(this->_input[i]))
		{
			if (this->_type != DOUBLE && this->_type != FLOAT)
				this->_type = INT;
		}
		else if (this->_input[i] == '.' && std::isdigit(this->_input[i + 1]) && !point)
		{
			point = true;
			this->_type = DOUBLE;
		}
		else if (this->_input[i] == 'f' && flt == true && std::isdigit(this->_input[i - 1]))
			this->_type = FLOAT;
		else if (this->_input[i] == '.' && flt == true && !point && !this->_input[i + 1])
		{
			point = true;
			this->_type = FLOAT;
		}
		else
			throw Convert::InputException();
	}
}

// use of static_cast -> for ordinary type conversions

void	Convert::convInt(void)
{
	try
	{
		this->_i = std::stoi(this->_input);
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
		this->_c = static_cast<char>(this->_i);
		printer();
	}
	catch(const std::exception& e)
	{
		convDouble();
	}
}

void	Convert::convDouble(void)
{
	this->_d = std::stod(this->_input);
	this->_f = static_cast<float>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_c = static_cast<char>(this->_i);
	printer();
}

void	Convert::convFloat(void)
{
	this->_f = std::stof(this->_input);
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
	this->_c = static_cast<char>(this->_i);
	printer();
}

void	Convert::convChar(void)
{
	this->_c = this->_input[0];
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
	printer();
}

void	Convert::convert(void)
{
	setType();
	switch(this->_type)
	{
		case (INT):
			convInt();
			break ;
		case (DOUBLE):
			convDouble();
			break ;
		case (FLOAT):
			convFloat();
			break ;
		case (CHAR):
			convChar();
	}
}

void	Convert::printer(void)
{
	std::cout << "Int:\t";
	if (this->_pseudo == true || this->_d > INT_MAX || this->_d < INT_MIN)
		std::cout << "No conversion" << std::endl;
	else
		std::cout << this->_i << std::endl;
	
	std::cout << "Float:\t" << this->_f;
	std::cout << "f" << std::endl;
	
	std::cout << "Double:\t" << this->_d;
	std::cout << std::endl;
	
	if (this->_i < 31 || this->_i > 126)
		std::cout << "Char:\t" << "No conversion" << std::endl;
	else
		std::cout << "Char:\t" << this->_c << std::endl;
}

std::ostream & operator<<(std::ostream & o, Convert const & rhs)
{
	o << rhs.getInput();
	return (o);
}
