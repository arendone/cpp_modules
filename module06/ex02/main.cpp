/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:18:48 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 16:44:58 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void test(void)
{
	std::cout << YELLOW << "\n----- Test 1 (generate & identify pointer) -----\n" 
				<< RESET << std::endl;
	Base *newClass = generate();
	identify(newClass);
	delete newClass;

	std::cout << YELLOW << "\n----- Test 2 (identify reference) -----\n" 
				<< RESET << std::endl;
	C classC = C();
	identify(classC);
	A classA = A();
	identify(classA);
	B classB = B();
	identify(classB);
}


int main(void)
{
	test();
	//system("leaks realType");
	return (0);
}
