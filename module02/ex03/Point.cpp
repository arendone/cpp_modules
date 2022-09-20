
#include "Point.hpp"

/* make _comments = true if you want the output to be commented*/
bool Point::_comments = false;

/* -----------Constructors: void, int, float and copy---------------*/
Point::Point(void) :_x(0), _y(0)
{
	if (_comments)
		std::cout << "Class Point: Default constructor called" << std::endl;
}

Point::Point(float const fx, float const fy) : _x(fx), _y(fy)
{
	if (_comments)
		std::cout << "Class Point: Float constructor called" << std::endl;
}

Point::Point(Point const& src) : _x(src._x), _y(src._y)
{
	if (_comments)
		std::cout << "Class Point: Copy constructor called" << std::endl;
}


/* -----------Copy assisgment-----------*/
Point & Point::operator=(Point const & rhs)
{
	(void)rhs;
	if (_comments)
		std::cout << "Class Point: Copy assignment operator called" << std::endl;
	std::cerr << "const values can't be reassigned" << std::endl;
	return (*this);
}


/* -----------Destructor-----------*/
Point::~Point()
{
	if (_comments)
		std::cout << "Class Point: Destructor called" << std::endl;
}


/* -----------get x,y-----------*/
const Fixed & Point::getX() const
{
	return (_x);
}

const Fixed & Point::getY() const
{
	return (_y);
}

/* -------------Return true if point is inside of the triangle abc or false if it isn't-----------*/
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed orientation_ABC = (a.getX() -  c.getX()) * (b.getY() - c.getY()) -
							(a.getY() - c.getY()) * (b.getX() - c.getX());
	Fixed orientation_ABP = (a.getX() -  point.getX()) * (b.getY() - point.getY()) -
							(a.getY() - point.getY()) * (b.getX() - point.getX());
	Fixed orientation_APC = (a.getX() -  c.getX()) * (point.getY() - c.getY()) -
							(a.getY() - c.getY()) * (point.getX() - c.getX());
	Fixed orientation_PBC = (point.getX() -  c.getX()) * (b.getY() - c.getY()) -
							(point.getY() - c.getY()) * (b.getX() - c.getX());
	if (orientation_ABC > 0 && orientation_ABP > 0 && orientation_APC > 0 && orientation_PBC > 0)
		return true;
	else if (orientation_ABC < 0 && orientation_ABP < 0 && orientation_APC < 0 && orientation_PBC < 0)
		return true;
	return (false);
}
