#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <climits>
#include <limits>
#include <iomanip>
#include <stdexcept>
#include <cmath>
#include <ctgmath>

// #include <string>
// #include <cctype>
// #include <cstdlib>


enum { C, I, F, D};

class Convert
{
	private:
		std::string _input;
		double		_val;
		int			_scalarType;
		char		_c;
		int			_i;
		float		_f;
		double		_d;

	public:
		Convert(std::string input);
		~Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& other);

		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
		int		getFlag(void) const;

		bool	isChar(void);
		bool	isInt(void);
		bool	isFloat(void);
		bool	isDouble(void);

		void	convertChar(void);
		void	convertInt(void);
		void	convertFloat(void);
		void	convertDouble(void);

		void	convertScalarTypes(void);
		int		fetchScalarType(void);

		bool	comparePseudoLitsFloat(void) const;
		bool	comparePseudoLitsDouble(void) const;
		bool	checkDigitsDouble(std::string str, size_t len);
		bool	checkDigits(void);
		bool	limitTestInt(void) const;

		void	printTypes() const;
		void	printChar() const;
		void	printInt() const;
		void	printFloat() const;
		void	printDouble() const;

		class InvalidInputException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& cout, const Convert& convert);


#endif