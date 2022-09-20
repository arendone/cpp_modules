/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:06:31 by sreinhol          #+#    #+#             */
/*   Updated: 2022/08/29 00:27:48 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Data::Data(): _string("test string"), _i(42)
{}

Data::Data(std::string str, int i): _string(str), _i(i)
{}

Data::~Data(void)
{}

Data::Data(Data const & rhs): _string(rhs._string), _i(rhs._i)
{
	*this = rhs;
	return;
}

Data & Data::operator=(Data const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_string = rhs._string;
	this->_i = rhs._i;
	return *this;
}

std::string Data::getString(void) const
{
	return (this->_string);
}

int Data::getInt(void) const
{
	return (this->_i);
}

std::ostream & operator<<(std::ostream & o, Data const & rhs)
{
	o << "\nString:\t" << rhs.getString() << "\nInt:\t" << rhs.getInt() << std::endl;
	return (o);
}
