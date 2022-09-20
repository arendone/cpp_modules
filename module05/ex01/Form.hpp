/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:43:20 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/18 17:38:04 by arendon-         ###   ########.fr       */
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
	bool _signed;
	int const _gradeSign;
	int const _gradeExecute;
	Form();
public:
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(Form const & src);
	~Form();

	Form & operator=(Form const & rhs);

	std::string	getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExecute() const;

	void beSigned(Bureaucrat const & burName);
	
	
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
};

std::ostream & operator <<(std::ostream & output, Form const & form);

#endif