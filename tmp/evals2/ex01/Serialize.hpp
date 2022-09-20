/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:06:39 by sreinhol          #+#    #+#             */
/*   Updated: 2022/08/29 00:29:53 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

// ************************************************************************** //
//                               Data Class                                   //
// ************************************************************************** //

class Data
{
	private:
	std::string	_string;
	int			_i;

	public:
	Data(); //default constructor
	Data(std::string str, int i); //constructor
	Data(Data const & rhs); //copy constructor
	~Data(void); //destructor

	Data & operator=(Data const & rhs); //copy assignment operator overload

	std::string	getString(void) const;
	int			getInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Data const & rhs);

#endif /* __SERIALIZE_HPP__ */