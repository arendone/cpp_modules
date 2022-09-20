/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:45:17 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 15:57:42 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "book.hpp"

int read_instruccion(std::string cmd)
{
	if (cmd.compare("ADD") == 0)
		return (1);
	if (cmd.compare("SEARCH") == 0)
		return (2);
	if (cmd.compare("EXIT") == 0)
		return (3);
	return (0);
}

/* This program is protected when the user types ctr + D*/
int main()
{
	Book phonebook;
	std::string cmd;
	int	num_cmd = 0;
	int	contact_number = 0;
	
	print_welcome();
	while(1)
	{
		print_prompt();
		getline(std::cin, cmd);
		if (!std::cin.good())
		{
			print_bye();
			return (0);
		}
		num_cmd = read_instruccion(cmd);
		while(num_cmd == 0)
		{
			print_complain();
			print_prompt();
			getline(std::cin, cmd);
			num_cmd = read_instruccion(cmd);
		}
		switch(num_cmd)
		{
			case ADD:
				phonebook.addContact(contact_number);
				contact_number++;
				break ;
			case SEARCH:
				if (phonebook.display_contacts() == 0)
					phonebook.read_index();
				break ;
			case EXIT:
				print_bye();
				return (0);
		}
	}
	return(0);
}