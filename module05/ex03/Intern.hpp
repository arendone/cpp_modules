/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:38:11 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 16:03:40 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum form_type
{
	SHRUBBERY = 1,
	ROBOTOMY,
	PARDON,
	NOT_FOUND
};

class Intern
{
public:
	Intern();
	Intern(Intern const & src);
	~Intern();
	
	Intern & operator=(Intern const & rhs);
	Form* makeForm(std::string FormName, std::string target);
};

#endif