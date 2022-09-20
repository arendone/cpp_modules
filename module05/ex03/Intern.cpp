/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:49:12 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 17:01:12 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "An intern was created" << std::endl;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	std::cout << "Intern - copy created" << std::endl;
}

Intern::~Intern()
{
	std::cout << "An intern was destroyed" << std::endl;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	std::cout << "Intern - copy assigned" << std::endl;
	return (*this);
}

static int FormType(std::string FormName)
{
	if (FormName.compare("shrubbery creation") == 0)
		return (1);
	if (FormName.compare("robotomy request") == 0)
		return (2);
	if (FormName.compare("presidential pardon") == 0)
		return (3);
	return(4);
}

Form* Intern::makeForm(std::string FormName, std::string target)
{
	Form *form_pr;
	int numForm = FormType(FormName);
	switch(numForm)
	{
		case SHRUBBERY:
			form_pr = new ShrubberyCreationForm(target);
			return (form_pr);
		case ROBOTOMY:
			form_pr = new RobotomyRequestForm(target);
			return (form_pr);
		case PARDON:
			form_pr = new PresidentialPardonForm(target);
			return (form_pr);
		case NOT_FOUND:
			std::cout << "This intern doesn't know how to create " 
						<< FormName << " form" << std::endl;
			break ;
	}
	return (NULL);
}
