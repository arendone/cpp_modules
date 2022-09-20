/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:06:39 by sreinhol          #+#    #+#             */
/*   Updated: 2022/08/29 00:29:53 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <climits>

// ************************************************************************** //
//                               Convert Class                             //
// ************************************************************************** //

enum type {INT, DOUBLE, FLOAT, CHAR, UNKOWN};

class Convert
{
	private:
	std::string	_input;
	int			_i;
	double		_d;
	float		_f;
	char		_c;
	int			_type;
	bool		_pseudo;

	void	convInt(void);
	void	convDouble(void);
	void	convFloat(void);
	void	convChar(void);
	void	setType(void);
	void	printer(void);


	public:
	Convert(); //default constructor
	Convert(std::string str); //constructor
	Convert(Convert const & rhs); //copy constructor
	~Convert(void); //destructor
	
	Convert & operator=(Convert const & rhs); //copy assignment operator overload

	class	InputException: public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

	void		convert(void);
	std::string	getInput(void) const;
};

std::ostream & operator<<(std::ostream & o, Convert const & rhs);

#endif /* __CONVERT_HPP__ */