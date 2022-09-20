
#ifndef POINT_HPP

#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
	static bool _comments;

public:
	Point(void);
	Point(float const fx, float const fy);
	Point(Point const& src);
	~Point(void);

	Point & operator=(Point const & rhs);
	const Fixed & getX() const;
	const Fixed & getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
