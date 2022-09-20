/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:57 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 16:51:00 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cerr << GREEN << "\n- - - - - -Example 1 - - - - -" << RESET << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf != NULL)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}
	
	std::cerr << GREEN << "\n- - - - - -Example 2 - - - - -" << RESET << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Parking of 42");
		if (rrf != NULL)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}

	std::cerr << GREEN << "\n- - - - - -Example 3 - - - - -" << RESET << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Barack Obama");
		if (rrf != NULL)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}

	std::cerr << GREEN << "\n- - - - - -Example 4 - - - - -" << RESET << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("scholarship", "student");
		if (rrf != NULL)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}
	return (0);
}
