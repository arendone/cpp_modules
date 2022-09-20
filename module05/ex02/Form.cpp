/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:52:05 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 15:06:58 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("none"), _target("nothing"), _gradeSign(0), _gradeExecute(0)
{
	
}

Form::Form(std::string name, std::string target, int gradeSign, int gradeExecute)
: _name(name), _target(target), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooLowException();
	_signed = false;
	std::cout << "Form [ " << _name << " ] was created" << std::endl;
}

Form::Form(Form const & src)
: _name(src._name), _target(src._target), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	_signed = src.getSigned();
	std::cout << "Form [ " << _name << " ] - copy created" << std::endl;
}

Form::~Form()
{
	std::cout << "Form [ " << _name << " ] was destroyed" << std::endl;
}

Form & Form::operator=(Form const & rhs)
{
	(void)rhs;
	std::cerr << "Form Class has const values that can't be reassigned" << std::endl;
	return (*this);
}

std::string	Form::getName() const
{
	return(_name);
}

std::string	Form::getTarget() const
{
	return(_target);
}

bool Form::getSigned() const
{
	return(_signed);
}

int Form::getGradeSign() const
{
	return(_gradeSign);
}

int Form::getGradeExecute() const
{
	return(_gradeExecute);
}

void Form::beSigned(Bureaucrat const & burName)
{
	try
	{
		if (burName.getGrade() > this->_gradeSign)
			throw Form::GradeTooLowException();
		_signed = true;
		// std::cout << "The form " << _name << " was succesfully signed by " 
		// 			<< burName.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception caught!" << YELLOW << e.what() << RESET << std::endl;
	}
}

void Form::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
}

std::ostream & operator <<(std::ostream & output, Form const & form)
{
	output << "Form name: " << form.getName() << "\n";
	output << "   *Grade required to be signed: " << form.getGradeSign();
	output << ", grade required to be executed: " << form.getGradeExecute();
	if (form.getSigned() == true)
		output << ", status: signed";
	else
		output << ", status: unsigned";
	return output;
}