
#include "Point.hpp"

int main(void)
{
	Point c(0, 0);
	Point a(0, -6);
	Point b(6, -6);

	Point point1(1, -5.5f);
	Point point2(5.5f, -5.9f);
	Point point3(4, -5);
	Point point4(2.5f, -3.0f);
	Point point5(1, -2);

	Point point6(0, -6); //vertex
	Point point7(0.0f, -3.0f); //edge
	Point point8(4, 5);
	Point point9(3, -2);
	Point point10(-0.5f, -5);
	
	if (bsp(a, b, c, point1) == true)
		std::cout << "1: Return TRUE" << std::endl;
	else
		std::cout << "1: Return FALSE" << std::endl;
	
	if (bsp(a, b, c, point2) == true)
		std::cout << "2: Return TRUE" << std::endl;
	else
		std::cout << "2: Return FALSE" << std::endl;
	
	if (bsp(a, b, c, point3) == true)
		std::cout << "3: Return TRUE" << std::endl;
	else
		std::cout << "3: Return FALSE" << std::endl;
	if (bsp(a, b, c, point4) == true)
		std::cout << "4: Return TRUE" << std::endl;
	else
		std::cout << "4: Return FALSE" << std::endl;
	
	if (bsp(a, b, c, point5) == true)
		std::cout << "5: Return TRUE" << std::endl;
	else
		std::cout << "5: Return FALSE" << std::endl;
	
	if (bsp(a, b, c, point6) == true)
		std::cout << "6: Return TRUE" << std::endl;
	else
		std::cout << "6: Return FALSE" << std::endl;

	if (bsp(a, b, c, point7) == true)
		std::cout << "7: Return TRUE" << std::endl;
	else
		std::cout << "7: Return FALSE" << std::endl;
	
	if (bsp(a, b, c, point8) == true)
		std::cout << "8: Return TRUE" << std::endl;
	else
		std::cout << "8: Return FALSE" << std::endl;
	
	if (bsp(a, b, c, point9) == true)
		std::cout << "9: Return TRUE" << std::endl;
	else
		std::cout << "9: Return FALSE" << std::endl;
	if (bsp(a, b, c, point10) == true)
		std::cout << "10: Return TRUE" << std::endl;
	else
		std::cout << "10: Return FALSE" << std::endl;
	return 0;
}
