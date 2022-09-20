/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:55:42 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/23 12:59:11 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void	Contact::fill_contact(void)
{
	while(firstname == "")
	{
		std::cout << "First name:" <<std::endl;
		getline(std::cin, firstname);
		if(firstname == "")
			std::cout << "\033[3;32mYou can type bullshit but you can't leave empty fields \033[0m"<< "🙄"<<std::endl;
	}
	while(lastname == "")
	{
		std::cout << "Last name:" <<std::endl;
		getline(std::cin, lastname);
		if(lastname == "")
			std::cout << "\033[3;32mYou can type bullshit but you can't leave empty fields \033[0m"<< "🙄"<<std::endl;
	}
	while(nickname == "")
	{
		std::cout << "Nickname:" <<std::endl;
		getline(std::cin, nickname);
		if(nickname == "")
			std::cout << "\033[3;32mYou can type bullshit but you can't leave empty fields \033[0m"<< "🙄"<<std::endl;
	}
	while(phonenumber == "")
	{
		std::cout << "Phone number:" <<std::endl;
		getline(std::cin, phonenumber);
		if(phonenumber == "" || validnumber() == false)
		{
			std::cout << "\033[3;32mA phonenumber has numbers \033[0m"<< "🤓"<<std::endl;
		}
	}
	while(darkestsecret == "")
	{
		std::cout << "Darkest secret:" <<std::endl;
		getline(std::cin, darkestsecret);
		if(darkestsecret == "")
			std::cout << "\033[3;32mYou can type bullshit but you can't leave empty fields \033[0m"<< "🙄"<<std::endl;
	}
}

void	Contact::print_contact_all(void)
{
	std::cout << " 🦄 🦄 🦄 🦄 🦄 🦄 🦄 🦄 🦄 🦄" <<std::endl;
	std::cout << "\033[1;34m First name: \033[0m" << firstname << std::endl;
	std::cout << "\033[1;34m Last name: \033[0m" << lastname << std::endl;
	std::cout << "\033[1;34m Nickname: \033[0m" << nickname << std::endl;
	std::cout << "\033[1;34m Phone number: \033[0m" << phonenumber << std::endl;
	std::cout << "\033[1;34m Darkest secret: \033[0m" << darkestsecret << "\n" <<std::endl;
}

void	Contact::clean_contact(void)
{
	firstname.clear();
	lastname.clear();
	nickname.clear();
	phonenumber.clear();
	darkestsecret.clear();
}

bool	Contact::validnumber()
{
	for(int i = 0; phonenumber[i]; i++)
	{
		if (!isdigit(phonenumber[i]))
		{
			phonenumber.clear();
			return (false);
		}
	}
	return(true);
}

std::string	Contact::getfirstname(void)
{
	return(firstname);
}

std::string	Contact::getlastname(void)
{
	return(lastname);
}

std::string	Contact::getnickname(void)
{
	return(nickname);
}