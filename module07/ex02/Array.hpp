/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:50:53 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/01 18:23:10 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>
# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

template< typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_n;
public:
	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(Array<T> const & copy);
	~Array<T>();

	Array<T> & operator=(Array<T> const & other);
	T & operator[](unsigned int index);
	unsigned int size() const;

	class OutOfBorders : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("The index is out of bounds!");
			}
	};
};

#include "Array.tpp"

#endif