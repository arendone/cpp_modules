
#include "Fixed.hpp"

Fixed::Fixed(void) : _FixedPointVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	/* either
		_FixedPointVal = src.getRawBits(); 
	and print Copy constructor...
		or
		*this = src;
	and print Copy assignment... */
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_FixedPointVal = rhs.getRawBits();
	
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_FixedPointVal);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_FixedPointVal = raw;
}
