/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:43:20 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 16:22:05 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HP

# define FORM_HP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	std::string const _target;
	bool _signed;
	int const _gradeSign;
	int const _gradeExecute;
public:
	Form();
	Form(std::string name, std::string target, int gradeSign, int gradeExecute);
	Form(Form const & src);
	virtual ~Form();

	Form & operator=(Form const & rhs);

	std::string	getName() const;
	std::string	getTarget() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExecute() const;

	void beSigned(Bureaucrat const & burName);
	void execute(Bureaucrat const &executor) const;
	virtual void action(Bureaucrat const &executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return (" \"The grade is too high\"");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return (" \"The grade is too low\"");
			}
	};
	class NotSignedException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return (" \"The form is not signed\"");
			}
	};
};

std::ostream & operator <<(std::ostream & output, Form const & form);

#endif