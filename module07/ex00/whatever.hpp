/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:10:34 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/30 14:13:57 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

#define WHATEVER_HPP

#include <iostream>

template< typename T>
T const & max(T const & x, T const & y) 
{
	return (x >= y ? x : y);
}

template< typename T>
T const & min(T const & x, T const & y) 
{
	return (x <= y ? x : y);
}

template< typename T>
void swap(T & x, T & y) 
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

#endif