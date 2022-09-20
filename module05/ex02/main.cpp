/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:57 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 15:32:52 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cerr << GREEN << "\n- - - - - -Example 1 - - - - -" << RESET << std::endl;
	try
	{
		//Form not signed
		Bureaucrat rosio("Rosio", -1);
		ShrubberyCreationForm school("School");
		school.action(rosio);
		std::cout << YELLOW << "The simulation finished successfully." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 2 - - - - -" << RESET << std::endl;
	try
	{
		//Form first not signed, then signed but bureaucrat has not the grade to execute
		ShrubberyCreationForm school("School");
		Bureaucrat rosio("Rosio", 139);
		std::cout << school << std::endl;
		school.action(rosio);
		rosio.signForm(school);
		std::cout << school << std::endl;
		school.action(rosio);
		std::cout << YELLOW << "The simulation finished successfully." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 3 - - - - -" << RESET << std::endl;
	try
	{
		//Form signed and bureaucrat has the grade to execute
		ShrubberyCreationForm park("Park");
		Bureaucrat rosio("Rosio", 137);
		rosio.signForm(park);
		std::cout << park << std::endl;
		park.action(rosio);
		std::cout << YELLOW << "The simulation finished successfully." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 4 - - - - -" << RESET << std::endl;
	try
	{
		//Form signed and bureaucrat execute the form 10 times
		RobotomyRequestForm bill("Bill Gates");
		Bureaucrat javier("Javier", 37);
		javier.signForm(bill);
		for(int i = 0; i < 10 ; i++)
		{
			bill.action(javier);
		}
		std::cout << YELLOW << "The simulation finished successfully." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 5 - - - - -" << RESET << std::endl;
	try
	{
		//Form signed but bureaucrat has not the grade to execute
		Bureaucrat angela("Angela Merkel", 20);
		PresidentialPardonForm harry("Harry Mergel");
		angela.signForm(harry);
		std::cout << harry << std::endl;
		angela.executeForm(harry);
		std::cout << YELLOW << "The simulation finished successfully." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	std::cerr << GREEN << "\n- - - - - -Example 6 - - - - -" << RESET << std::endl;
	try
	{
		//Form signed and bureaucrat has the grade to execute
		Bureaucrat olaf("Olaf Scholz", 1);
		PresidentialPardonForm harry("Harry Mergel");
		olaf.signForm(harry);
		std::cout << harry << std::endl;
		olaf.executeForm(harry);
		std::cout << YELLOW << "The simulation finished successfully." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Instances could not be created!" << RED << e.what() << RESET << std::endl;
	}
	return (0);
}
