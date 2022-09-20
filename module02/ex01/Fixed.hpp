/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:52:19 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/02 15:56:47 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_FixedPointVal;
	static const int _fraccBits = 8;
	static bool _comments;
	
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const& src);
	~Fixed(void);
	
	Fixed & operator=(Fixed const& rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream & operator <<( std::ostream & o, Fixed const & i);


#endif