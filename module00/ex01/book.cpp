/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:16:35 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/23 12:58:47 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"
#include "phonebook.hpp"

Book::Book(void)
{

}

Book::~Book(void)
{
	
}

void Book::addContact(int i)
{
	if (i > 7)
	{
		i = i % 8;
		contact[i].clean_contact();
	}
	contact[i].fill_contact();
}

int Book::display_contacts(void)
{
	int			i = 0;
	std::string	tmp;

	tmp = contact[i].getfirstname();
	if (tmp == "")
	{
		std::cout << "\033[3;32mYou don't have any contact\033[0m "<<"🥺\n"<<std::endl;
		return (1);
	}
	else
		print_head_table();
	while (i < 8)
	{
		tmp = contact[i].getfirstname();
		if (tmp != "")
		{
			std::cout << "         ";
			std::cout << i + 1 << "|";
			string_10digits(tmp);
			std::cout << "|";
			string_10digits(contact[i].getlastname());
			std::cout << "|";
			string_10digits(contact[i].getnickname());
			std::cout << std::endl;
		}
		else
			break ;
		i++;
	}
	std::cout << "\n" << std::endl;
	return (0);
}

void Book::read_index()
{
	std::string str_index;
	int index;
	
	while(1)
	{
		print_askindex();
		getline(std::cin, str_index);
		const char *str = str_index.c_str();
		index = atoi(str);
		index--;
		if (index >= 0  && index < 8 && contact[index].getfirstname() != "")
		{
			contact[index].print_contact_all();
			break;
		}
		else
		{
			print_complain2();
			display_contacts();
		}
	}
}
