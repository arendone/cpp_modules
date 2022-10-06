/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:53:33 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 15:22:24 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*----------DATA CLASS FUNCTIONS-------------*/
Data::Data(): _name("Unnamed"){}
Data::Data(std::string name): _name(name){}
Data::Data(Data const & copy){*this = copy;}
Data::~Data(){}

Data & Data::operator=(Data const & other)
{
	if (this != &other)
	{
		_name = other.getName();
	}
	return(*this);
}

std::string Data::getName() const{return (_name);}

/*------------------------------------------*/

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
