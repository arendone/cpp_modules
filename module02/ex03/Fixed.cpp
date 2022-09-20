
#include "Fixed.hpp"
#include <cmath>

/* make _comments = true if you want the output to be commented*/
bool Fixed::_comments = false;

/* -----------Constructors: void, int, float and copy---------------*/
Fixed::Fixed(void) : _FixedPointVal(0)
{
	if (_comments)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	if (_comments)
		std::cout << "Int constructor called" << std::endl;
	if (n > 8388607 || n < -8388608)
	{
		std::cerr << "WARNING: Fixed point overflow detected for int = " << n <<std::endl;
	}
	_FixedPointVal = n << _fraccBits;
}

Fixed::Fixed(const float f)
{
	if (_comments)
		std::cout << "Float constructor called" << std::endl;
	if (f > 8388607 || f < -8388608)
	{
		std::cerr << "WARNING: Fixed point overflow detected for float = " << f <<std::endl;
	}
	_FixedPointVal = roundf(f * (1 << _fraccBits));
}

Fixed::Fixed(Fixed const & src)
{
	if (_comments)
		std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointVal = src.getRawBits();
	/* either
		_FixedPointVal = src.getRawBits(); 
	and print Copy constructor...
		or
		*this = src;
	and print Copy assignment... */
}

/* -----------Destructor-----------*/
Fixed::~Fixed()
{
	if (_comments)
		std::cout << "Destructor called" << std::endl;
}

/* -----------Copy assisgment-----------*/
Fixed &	Fixed::operator=(Fixed const & rhs)
{
	if (_comments)
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

/*--- Comparison operators ---*/
bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

/*--- Arithmetic operators ---*/

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	float a = this->toFloat();
	float b = rhs.toFloat();
	Fixed result(a * b);
	return (result);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	float a = this->toFloat();
	float b = rhs.toFloat();
	Fixed result(a / b);
	return (result);
}

/*--- Increment/Decrement operators (pre and pro)---*/
Fixed & Fixed::operator++(void)
{
	_FixedPointVal++;
	return(*this);
}

Fixed & Fixed::operator--(void)
{
	_FixedPointVal--;
	return(*this);
}

Fixed Fixed::operator++(int n)
{
	Fixed	tmp;
	int		raw = this->getRawBits();

	tmp = *this;
	if (n == 0)
		raw++;
	else
		raw += n;
	this->setRawBits(raw);
	return(tmp);
}

Fixed Fixed::operator--(int n)
{
	Fixed	tmp;
	int		raw = this->getRawBits();

	tmp = *this;
	if (n == 0)
		raw--;
	else
		raw -= n;
	this->setRawBits(raw);
	return(tmp);
}

/*--- Max & Min ---*/

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return ((Fixed &)a);
	return ((Fixed &)b);
}

Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return ((Fixed &)a);
	return ((Fixed &)b);
}
