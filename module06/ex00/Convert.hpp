/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:19:09 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 14:58:20 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP

#define CONVERT_HPP

# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

#include <iostream>
#include <stdexcept>
#include <limits.h>

enum input_type
{
	CHAR = 1,
	INT,
	FLOAT,
	DOUBLE,
	OTHER
};

class Convert
{
private:
	std::string	_input;
	double		_val;
	char		_char;
	int			_int;
	float		_float;
	double		_double;

	Convert();

	bool isInterger() const;
	bool isFloat() const;
	bool isDouble() const;
	int typeOfInput() const;
	void convertChar();
	void convertInt();
	void convertFloat();
	void convertDouble();
	bool checkLimitInt() const;
	
public:
	Convert(std::string input);
	Convert(Convert const & copy);
	~Convert();
	
	void printChar() const;
	void printInt() const;
	void printFloat() const;
	void printDouble() const;

	Convert & operator=(Convert const & other);
	void	convertString();
	
	class UnknownTypeException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("The conversion failed. Please insert a char, int, float or double.");
			}
	};
};

#endif
