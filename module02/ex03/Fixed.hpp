/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:52:19 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/05 14:18:43 by arendon-         ###   ########.fr       */
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

	/*--- Comparison operators ---*/
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	/*--- Arithmetic operators ---*/
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	/*--- Increment/Decrement operators (pre and pro)---*/
	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed operator++(int n);
	Fixed operator--(int n);

	/*--- Max & Min ---*/
	static Fixed & min(Fixed &a, Fixed &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static Fixed & min(Fixed const &a, Fixed const &b);
	static Fixed & max(Fixed const &a, Fixed const &b);
};

std::ostream & operator <<( std::ostream & o, Fixed const & i);

#endif
