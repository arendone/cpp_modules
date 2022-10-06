/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:31:07 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/02 14:14:12 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

#define ITER_HPP

#include <iostream>


# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

template<typename T>
void iter(T *array, int n, void (*function)(const T &))
{
	for(int i = 0; i < n; i++)
	{
		function(array[i]);
	}
}

template<typename T>
void printYellow(const T & element)
{
	std::cout << YELLOW  << element << RESET << std::endl;
}

template<typename T>
void printGreen(const T & element)
{
	std::cout << GREEN << element << RESET << std::endl;
}

#endif