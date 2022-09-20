
#include "Fixed.hpp"
#include <cmath>

/* make _comments = true if you want the output to be commented*/
bool Fixed::_comments = false;

/* -----------Constructors: void, int, float and copy---------------*/
Fixed::Fixed(void) : _FixedPointVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	if (n > 8388607 || n < -8388608)
	{
		std::cerr << "WARNING: Fixed point overflow detected for int = " << n <<std::endl;
	}
	_FixedPointVal = n << _fraccBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	if (f > 8388607 || f < -8388608)
	{
		std::cerr << "WARNING: Fixed point overflow detected for float = " << f <<std::endl;
	}
	_FixedPointVal = roundf(f * (1 << _fraccBits));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* -----------Destructor-----------*/
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* -----------Copy assisgment-----------*/
Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_FixedPointVal = rhs.getRawBits();
	
	return *this;
}

/* -----------Set, get, convert and print - Functions-----------*/
int	Fixed::getRawBits(void) const
{
	if (_comments)
		std::cout << "getRawBits member function called" << std::endl;
	return(this->_FixedPointVal);
}

void	Fixed::setRawBits(int const raw)
{
	if (_comments)
		std::cout << "setRawBits member function called" << std::endl;
	this->_FixedPointVal = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (float)(1 << _fraccBits));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> _fraccBits);
}

std::ostream & operator <<( std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}
