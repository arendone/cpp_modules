/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:14:13 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/01 18:24:22 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int test(void)
{
	/* - - - - - - - - - - - - - - - - -- - - - - - - - - - - */
	std::cout << "\n  - - - - - - - - - - - - - - - - -- - - - - - - - - - - \n"<<std::endl;
	Array<double> empty = Array<double>();
	std::cout << "size of array: " << empty.size() << std::endl;
	try
	{
		empty[3] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	for (unsigned int i=0; i < empty.size(); i++)
		std::cout << "element " << i << ": " << empty[i] << std::endl;
	
	/* - - - - - - - - - - - - - - - - -- - - - - - - - - - - */
	std::cout << "\n  - - - - - - - - - - - - - - - - -- - - - - - - - - - - \n"<<std::endl;
	Array<int> paq = Array<int>(5);
	try
	{
		paq[1] = 11;
		paq[3] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << "size of array: " << paq.size() << std::endl;
	for (unsigned int i=0; i < paq.size(); i++)
		std::cout << "element " << i << ": " << paq[i] << std::endl;

	/* - - - - - - - - - - - - - - - - -- - - - - - - - - - - */
	std::cout << "\n  - - - - - - - - - - - - - - - - -- - - - - - - - - - - \n"<<std::endl;
	Array<int> copy(paq);
	try
	{
		copy[1] = 17;
		copy[2] = 2222222;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << "size of array: " << copy.size() << std::endl;
	for (unsigned int i=0; i < copy.size(); i++)
		std::cout << "element " << i << ": " << copy[i] << std::endl;
	
	/* - - - - - - - - - - - - - - - - -- - - - - - - - - - - */
	std::cout << "\n  - - - - - - - - - - - - - - - - -- - - - - - - - - - - \n"<<std::endl;
	for (unsigned int i=0; i < paq.size(); i++)
		std::cout << "element " << i << ": " << paq[i] << std::endl;
	return (0);
}

int main(void)
{
	test();
	// system("leaks array");
	return (0);
}