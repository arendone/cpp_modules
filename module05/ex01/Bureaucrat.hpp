/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:51 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/18 17:53:33 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
	void check_border(int val);
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form & formName);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return (" \"The grade is out of borders (grade < 1)\"");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return (" \"The grade is out of borders (grade > 150)\"");
			}
	};
};

std::ostream & operator <<(std::ostream & o, Bureaucrat const & bureaucrat);


#endif