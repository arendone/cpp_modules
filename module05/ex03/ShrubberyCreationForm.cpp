/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:37:50 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 15:10:40 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "Shrubbery-target: " << this->getTarget() << ", was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
: Form(src)
{
	std::cout << "Shrubbery-target: " << this->getTarget() << " - copy created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery-target: " << this->getTarget() << ", was destroyed" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	std::cerr << "ShrubberyCreationForm Class has const values that can't be reassigned" << std::endl;
	return (*this);
}

void ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
	try
	{
		this->Form::execute(executor);
		std::ofstream outfile(this->getTarget() + "_shrubbery");
		if (outfile.is_open() == false)
			throw std::ofstream::failure(" Could not open file " + this->getTarget() + "_shrubbery");
		outfile << _TREE;
		outfile.close();
		std::cout << this->getTarget() + "_shrubbery" << " was created" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << YELLOW << e.what() << RESET << std::endl;
	}
	
}

