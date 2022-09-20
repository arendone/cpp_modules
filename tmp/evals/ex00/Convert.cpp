#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input), _scalarType(-1) {}
Convert::~Convert() {}

char	Convert::getChar(void) const { return this->_c; }
int		Convert::getInt(void) const { return this->_i; }
float	Convert::getFloat(void) const { return this->_f; }
double	Convert::getDouble(void) const { return this->_d; }

static const std::string pseudoLitsFloat[] = {"-inff", "+inff", "nanf", "inff"};
static const std::string pseudoLitsDouble[] = {"-inf", "+inf", "nan", "inf"};

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

Convert& Convert::operator=(const Convert& other)
{
	this->_input = other._input;
	this->_val = other._val;
	this->_c = other.getChar();
	this->_i = other.getInt();
	this->_f = other.getFloat();
	this->_d = other.getDouble();

	return *this;
}

int	Convert::fetchScalarType(void)
{
	if (isChar())
		return C;
	else if (isInt())
		return I;
	else if (isFloat())
		return F;
	else if (isDouble())
		return D;
	else
		return -1;
}

void	Convert::convertScalarTypes(void)
{
	switch (fetchScalarType())
	{
		case C :
			convertChar();
			break ;
		case I :
			convertInt();
			break ;
		case F :
			convertFloat();
			break ;
		case D :
			convertDouble();
			break ;
		default:
			throw InvalidInputException();
			return ;
	}
	printTypes();
}

bool	Convert::isChar(void)
{
	if (this->_input.length() > 1 || std::isdigit(this->_input[0]))
		return false;
	return true;
}

bool	Convert::isInt(void)
{
	if (this->_input.find('.') != std::string::npos || !checkDigits())
		return false;
	return true;
}

/* Check for float specifics, e.g. dot, 'f' at the end of te string and
only digits as well as pseudo literals "-/+inff, nanf" */
bool Convert::isFloat(void)
{
	size_t dot = this->_input.find('.');

	if ((dot == std::string::npos || this->_input.find('f') != (this->_input.length() - 1))
		&& !comparePseudoLitsFloat())
			return false;
	if ((this->_input.find('.', dot + 1) == std::string::npos
		&& checkDigitsDouble(this->_input, this->_input.length() - 1))
		|| comparePseudoLitsFloat())
			return true;
	return false;
}

bool Convert::isDouble(void)
{
	size_t dot = this->_input.find('.');

	if ((dot == std::string::npos || !checkDigitsDouble(this->_input, this->_input.length()))
		&& !comparePseudoLitsDouble())
			return false;
	if (this->_input.find('.', dot + 1) == std::string::npos || comparePseudoLitsDouble())
		return true;
	return false;
}

void	Convert::convertChar(void)
{
	this->_c = this->_input[0];
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
}

void	Convert::convertInt(void)
{
	this->_val = std::strtod(this->_input.c_str(), NULL);

	this->_i = static_cast<int>(this->_val);
	this->_c = static_cast<char>(this->_i);
	if (limitTestInt())
	{
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
	}
	else
	{
		this->_f = static_cast<float>(this->_val);
		this->_d = static_cast<double>(this->_val);
	}
}

void	Convert::convertFloat(void)
{
	this->_val = std::strtod(this->_input.c_str(), NULL);
	this->_f = static_cast<float>(this->_val);
	this->_c = static_cast<char>(this->_f);
	this->_i = static_cast<int>(this->_f);

	if (this->_f < std::numeric_limits<float>::max() || this->_f > std::numeric_limits<float>::min())
		this->_d = static_cast<double>(this->_f);
	else
		this->_d = static_cast<double>(this->_val);
}

void Convert::convertDouble(void)
{
	this->_val = std::strtod(this->_input.c_str(), NULL);
	this->_d = this->_val;
	this->_c = static_cast<char>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_f = static_cast<float>(this->_d);
}

void	Convert::printTypes(void) const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}

bool	Convert::limitTestInt(void) const
{
	if (this->_val > std::numeric_limits<int>::max() || this->_val < std::numeric_limits<int>::min()
		|| comparePseudoLitsDouble() || comparePseudoLitsFloat())
		return false;
	return true;
}

void	Convert::printInt(void) const
{
	if (limitTestInt())
		std::cout << "Int: " << this->getInt() << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
}

void	Convert::printChar(void) const
{
	if (!isascii(this->_c) || this->_val > std::numeric_limits<char>::max()
		|| this->_val < std::numeric_limits<char>::min()
		|| comparePseudoLitsDouble() || comparePseudoLitsFloat())
		std::cout << "char: Impossible" << std::endl;
	else if (!std::isprint(this->_c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->getChar() << std::endl;
}

void Convert::printFloat(void) const
{
	std::cout << "Float: " << std::fixed << this->getFloat() << "f" << std::endl;
}

void	Convert::printDouble(void) const
{
	std::cout << "Double: " << this->getDouble() << std::endl;
}

std::ostream& operator<<(std::ostream& cout, const Convert& convert)
{
	std::cout << "char: " << convert.getChar() << std::endl;
	std::cout << "int: " << convert.getInt() << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(2) << convert.getFloat() << "f" << std::endl;
	std::cout << "double: " << convert.getDouble() << std::endl;
	return (cout);
}

bool	Convert::checkDigits(void)
{
	for (size_t i = 0; i < this->_input.length(); i++)
	{
		if (!std::isdigit(this->_input[i]))
		{
			if (this->_input.find('-') != i && this->_input.find('+') != i)
				return false;
		}
	}
	return true;
}

bool	Convert::comparePseudoLitsFloat(void) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_input.compare(pseudoLitsFloat[i]) == 0)
			return true;
	}
	return false;
}

bool	Convert::comparePseudoLitsDouble(void) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_input.compare(pseudoLitsDouble[i]) == 0)
			return true;
	}
	return false;
}

bool	Convert::checkDigitsDouble(std::string str, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			if (str.find('.') != i && str.find('-') != i && str.find('+') != i)
			return false;
		}
	}
	return true;
}

const char* Convert::InvalidInputException::what() const throw()
{
	return ("Error: Invalid scalar type for conversion. Enter a char/int/float/double literal!");
}
