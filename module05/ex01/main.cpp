/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:57 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 16:58:55 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cerr << GREEN << "\n- - - - - -Example 1 - - - - -" << RESET << std::endl;
	try
	{
		Bureaucrat rosio("Rosio", 1);
		Form tenure("Tenure", 5, 1);
		rosio.decrementGrade();
		std::cout << rosio << std::endl;
		std::cout << tenure << std::endl;
		tenure.beSigned(rosio);
		std::cout << tenure << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 2 - - - - -" << RESET << std::endl;
	try
	{
		Form hire("Hire", 1, 0);
		Bureaucrat rosio("Rosio", 5);
		std::cout << rosio << std::endl;
		std::cout << hire << std::endl;
		hire.beSigned(rosio);
		std::cout << hire << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 3 - - - - -" << RESET << std::endl;
	try
	{
		Form tenure("Tenure", 3, 1);
		Bureaucrat rosio("Rosio", 5);
		std::cout << rosio << std::endl;
		std::cout << tenure << std::endl;
		tenure.beSigned(rosio);
		std::cout << tenure << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 4 - - - - -" << RESET << std::endl;
	try
	{
		Form tenure("Tenure", 3, 1);
		Bureaucrat rosio("Rosio", 5);
		Bureaucrat javier("Javier", 3);
		std::cout << rosio << std::endl;
		std::cout << javier << std::endl;
		std::cout << tenure << std::endl;
		rosio.signForm(tenure);
		std::cout << tenure << std::endl;
		javier.signForm(tenure);
		std::cout << tenure << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	return (0);
}