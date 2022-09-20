
#include "Fixed.hpp"

int main(void)
{
	{
		Fixed	a;
		Fixed const	b(Fixed(5.05f) * Fixed(2));

		std::cout << a <<std::endl;
		std::cout << ++a <<std::endl;
		std::cout << a <<std::endl;
		std::cout << a++ <<std::endl;
		std::cout << a <<std::endl;

		std::cout << b << std::endl;
		std::cout << Fixed::max(a , b) << std::endl;
	}
	// {
	// 	std::cout << "\nSome other tests: Comparison operators\n\n";
	// 	Fixed a(42);
	// 	Fixed b(50);
	// 	Fixed c(50);
	// 	Fixed d(0);
	// 	Fixed e(-42);

	// 	std::cout << "-----------------------" << std::endl;
	// 	std::cout << "Result of " << a << " < " << b  << " is : " << (a < b) << std::endl;
	// 	std::cout << "Result of " << a << " > " << b  << " is : " << (a > b) << std::endl;
	// 	std::cout << "Result of " << c << " < " << b  << " is : " << (c < b) << std::endl;
	// 	std::cout << "Result of " << d << " > " << b  << " is : " << (d > b) << std::endl;
	// 	std::cout << "Result of " << a << " != " <<  b << " is : " << (a != b) << std::endl;
	// 	std::cout << "Result of " << a << " == " <<  b << " is : " << (a == b) << std::endl;
	// 	std::cout << "Result of " << b << " <= " <<  c << " is : " << (b <= c) << std::endl;
	// 	std::cout << "Result of " << e << " >= " <<  a << " is : " << (e >= a) << std::endl;
	// 	std::cout << "Result of " << d << " <= " <<  e << " is : " << (d <= e) << std::endl;
	// 	std::cout << "Result of " << d << " >= " <<  e << " is : " << (d >= e) << std::endl;
	// 	std::cout << "-----------------------" << std::endl;
	// }

	// {
	// 	std::cout << "\nSome other tests: Arithmetic operators\n\n";
	// 	Fixed a(42);
	// 	Fixed b(50);
	// 	Fixed c(-32.5f);
	// 	Fixed d(12.2f);
	// 	Fixed e;

	// 	std::cout << "-----------------------" << std::endl;
	// 	std::cout << "Result of " << a << " + " << b  << " is : " << (a + b) << std::endl;
	// 	std::cout << "Result of " << a << " - " << b  << " is : " << (a - b) << std::endl;
	// 	std::cout << "Result of " << b << " - " << a  << " is : " << (b - a) << std::endl;
	// 	std::cout << "Result of " << c << " + " << d  << " is : " << (c + d) << std::endl;
	// 	std::cout << "Result of " << c << " - " << d  << " is : " << (c - d) << std::endl;
	// 	std::cout << "Result of " << d << " - " << c  << " is : " << (d - c) << std::endl;
	// 	std::cout << "previous value of e: " << e << std::endl;
	// 	e = a + c;
	// 	std::cout << "new value of e: " << e << std::endl;

	// 	std::cout << "\n" << std::endl;
	// 	std::cout << "Result of " << a << " * " << b  << " is : " << (a * b) << std::endl;
	// 	std::cout << "Result of " << a << " / " << b  << " is : " << (a / b) << std::endl;
	// 	std::cout << "Result of " << b << " / " << a  << " is : " << (b / a) << std::endl;
	// 	std::cout << "Result of " << c << " * " << d  << " is : " << (c * d) << std::endl;
	// 	std::cout << "Result of " << c << " / " << d  << " is : " << (c / d) << std::endl;
	// 	std::cout << "Result of " << d << " / " << c  << " is : " << (d / c) << std::endl;
	// 	std::cout << "previous value of e: " << e << std::endl;
	// 	e = b * d;
	// 	std::cout << "new value of e: " << e << std::endl;
	
	// 	 std::cout << "-----------------------" << std::endl;
	// }
	return 0;
}

/*
	#include <bitset>
	std::cout << "a = " << a << " y " <<std::bitset<32>(a)  << std::endl;
	val = a << 8;
	std::cout << "val = " << val << " y " << std::bitset<32>(val)  << std::endl;*/