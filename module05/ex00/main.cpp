/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:57 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/16 12:39:49 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cerr << GREEN << "\n- - - - - -Example 1 - - - - -" << RESET << std::endl;
	try
	{
		Bureaucrat rosio("Rosio", 0);
		rosio.decrementGrade();
		std::cout << rosio << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 2 - - - - -" << RESET << std::endl;
	try
	{
		Bureaucrat aurora("Aurora", 10);
		std::cout << aurora << std::endl;
		aurora.incrementGrade();
		std::cout << aurora << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 3 - - - - -" << RESET << std::endl;
	try
	{
		Bureaucrat javier("Javier", 149);
		std::cout << javier << std::endl;
		javier.decrementGrade();
		std::cout << javier << std::endl;
		javier.decrementGrade();
		std::cout << javier << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << RED << e.what() << RESET << std::endl;
	}
	


	return (0);
}