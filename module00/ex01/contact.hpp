/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:17:47 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/23 12:58:05 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
	
	public:

		Contact(void);
		~Contact(void);
		
		void		fill_contact(void);
		void		print_contact_short(void);
		void		print_contact_all(void);
		void		clean_contact(void);
		bool		validnumber(void);

		std::string	getfirstname(void);
		std::string	getlastname(void);
		std::string	getnickname(void);
};

#endif