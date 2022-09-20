/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:30:56 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 13:52:16 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "Robotomy-target: " << this->getTarget() << ", was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
: Form(src)
{
	std::cout << "Robotomy-target: " << this->getTarget() << " - copy created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy-target: " << this->getTarget() << ", was destroyed" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	std::cerr << "RobotomyRequestForm Class has const values that can't be reassigned" << std::endl;
	return (*this);
}

void RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	try
	{
		this->Form::execute(executor);
		static int r = 0;
		r++;
		if (r % 2)
		{
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		}
		else
		{
			std::cout << "The robotomy failed" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << YELLOW << e.what() << RESET << std::endl;
	}
}