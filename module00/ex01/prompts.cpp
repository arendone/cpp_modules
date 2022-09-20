/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompts.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:46:35 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/22 15:33:28 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_prompt(void)
{
	std::cout << "\033[3;32mWhat do you want to do?\033[0m "<<"😊"<<std::endl;
	std::cout << "\033[1;34m type ADD to save a new contact\033[0m"<<std::endl;
	std::cout << "\033[1;35m type SEARCH to display your contacts\033[0m"<<std::endl;
	std::cout << "\033[1;36m type EXIT to leave and lose your contacts 4ever!\033[0m\n"<<std::endl;

}

void	print_welcome(void)
{
	std::cout << "\033[1;33m~.~.~ WELCOME TO YOUR CRAPPY AWESOME PHONEBOOK 🦄~.~.~\033[0m\n"<<std::endl;
}

void	print_bye(void)
{
	std::cout << "\033[2;37m~.~.~ Closing THE CRAPPY AWESOME PHONEBOOK ~.~.~\033[0m"<<std::endl;
	std::cout << "\033[2;37m Chao!\033[0m\n"<<std::endl;
}

void	print_complain(void)
{
	std::cout << "\033[3;32mI'm sure you can do it better, lets forget what it just happended and try again\033[0m\n"<<std::endl;
}

void	print_askindex(void)
{
	std::cout << "\033[3;32mType the index of the contact you want to display\033[0m"<<std::endl;
}

void	print_complain2(void)
{
	std::cout << "\033[3;32mI'm sure you can do it better, choose a valid index!\033[0m\n"<<std::endl;
}