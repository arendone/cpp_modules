/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:01:33 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 16:22:52 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDOMFORM_HPP

#define PRESIDENTIALPARDOMFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	
	virtual void action(Bureaucrat const &exectutor) const;
};

#endif