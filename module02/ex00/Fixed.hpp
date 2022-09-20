/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:52:19 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/05 14:11:19 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_FixedPointVal;
	static const int _fraccionalBits = 8;
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);
	
	Fixed & operator=(Fixed const & rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
