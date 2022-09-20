/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:48 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/16 12:53:23 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	std::cout << "Bureaucrat " << _name << " was created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
: _name(src._name), _grade(src._grade) 
{
	std::cout << "Bureaucrat " << _name << " copy created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " was destroyed" << std::endl;
}


Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
	(void)rhs;
	std::cerr << "Bureaucrat Class has a const values that can't be reassigned" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::check_border(int val)
{
	if (val < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (val > 150)
		throw Bureaucrat::GradeTooLowException();
}

void		Bureaucrat::incrementGrade()
{
	try 
	{
		this->check_border(_grade - 1);
		_grade--;
		std::cout << "***The grade was succesfully increased***" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << YELLOW << e.what() << RESET << std::endl;
	}
}

void		Bureaucrat::decrementGrade()
{
	try 
	{
		this->check_border(_grade + 1);
		_grade++;
		std::cout << "***The grade was succesfully decreased***" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << YELLOW << e.what() << RESET << std::endl;
	}
}

std::ostream & operator <<(std::ostream & output, Bureaucrat const & bureaucrat)
{
	output << "Bureaucrat name: " << bureaucrat.getName() << ", grade: " 
			<< bureaucrat.getGrade();
	return output;
}
