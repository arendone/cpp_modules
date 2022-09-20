
#include "Fixed.hpp"

int main(void)
{
	{
		std::cout << "\nTest (subject):\n\n";
		Fixed a;
		Fixed const b(0);
		Fixed const c(42.42f);
		Fixed const d(b);
		a = Fixed(1234.4321f);
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	/*
	{
		std::cout << "\nSome other tests:\n\n";
		Fixed a(42);
		Fixed b(-8388608); //min 24-bits int
		Fixed c(8388607); //max 24-bits int
		Fixed d(214748364); //overflow
		Fixed e(-8388609); //overflow
		Fixed f(8388608); //overflow

		std::cout << "-----------------------" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << f << std::endl;

		std::cout << "-----------------------" << std::endl;
		std::cout << a.toInt() << std::endl;
		std::cout << b.toInt() << std::endl;
		std::cout << c.toInt() << std::endl;
		std::cout << d.toInt() << std::endl;
		std::cout << e.toInt() << std::endl;
		std::cout << f.toInt() << std::endl;
		std::cout << "-----------------------" << std::endl;
	}
	{
		std::cout << "\nNegative numbers:\n\n";
		Fixed a;
		Fixed const b(-10);
		Fixed const c(-42.42f);
		Fixed const d(b);
		a = Fixed(-1234.4321f);
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	{
		std::cout << "\nAnd overflows:\n\n";
		Fixed x(8388608);
		Fixed y(10000000.4222f);
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
		std::cout << "x is " << x.toInt() << " as integer" << std::endl;
		std::cout << "y is " << y.toInt() << " as integer" << std::endl;
	}*/
	return 0;
}

/*
	#include <bitset>
	std::cout << "a = " << a << " y " <<std::bitset<32>(a)  << std::endl;
	val = a << 8;
	std::cout << "val = " << val << " y " << std::bitset<32>(val)  << std::endl;*/