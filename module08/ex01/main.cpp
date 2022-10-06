/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:04:09 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/04 18:07:36 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

int RandomNumber () { return (std::rand()%100); }

void test_generator(void)
{

	std::srand ( unsigned ( std::time(0) ) );
	std::vector<int> myvector (80);
	std::generate (myvector.begin(), myvector.end(), RandomNumber);
	std::cout << "The vector contains:";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	try
	{
		Span span=Span(80);
		span.addSequence(myvector.begin(), myvector.end());
		std::cout << "longestSpan: " << span.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
	}
	catch(const char * message)
	{
		std::cout << YELLOW << message << RESET << std::endl;
	}
}

void test_longList(void)
{
	Span list = Span(50000);
	for (int i = 0; i < 50000; i++)
		list.addNumber(i * 10);
	std::cout << "longestSpan: " << list.longestSpan() << std::endl;
	std::cout << "shortestSpan: " << list.shortestSpan() << std::endl;
}

int main(void)
{
	{
		Span span=Span(2);
		try
		{
			span.addNumber(1);
			span.addNumber(2);
			span.addNumber(3);
		}
		catch(const char * message)
		{
			std::cout << YELLOW << message << RESET << std::endl;
		}
	}
	std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n"<< std::endl;
	{
		Span list = Span(5);
		list.addNumber(-2147483648);
		list.addNumber(2);
		list.addNumber(0);
		list.addNumber(12);
		list.addNumber(2147483647);
		std::cout << "longestSpan: " << list.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << list.shortestSpan() << std::endl;
	}
		std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n"<< std::endl;
	{
		Span list = Span(5);
		try
		{
			list.addNumber(12);
			std::cout << "longestSpan: " << list.longestSpan() << std::endl;
		}
		catch(const char * message)
		{
			std::cout << YELLOW << message << RESET << std::endl;
		}
	}
		std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n"<< std::endl;
	{
		test_generator();
	}
		std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n"<< std::endl;
	{
		test_longList();
	}
	return (0);
}
