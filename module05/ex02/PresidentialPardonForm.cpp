/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:02:52 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 13:52:57 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:Form()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "PresidentialPardon-target: " << this->getTarget() << ", was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
: Form(src)
{
	std::cout << "PresidentialPardon-target: " << this->getTarget() << " - copy created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardon-target: " << this->getTarget() << ", was destroyed" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	std::cerr << "PresidentialPardonForm Class has const values that can't be reassigned" << std::endl;
	return (*this);
}

void PresidentialPardonForm::action(Bureaucrat const &executor) const
{
	try
	{	
		this->Form::execute(executor);
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << YELLOW << e.what() << RESET << std::endl;
	}
}