/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:06:50 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/23 13:15:02 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	string_10digits(std::string str)
{
	int	len;
	len = str.length();
	if (len <= 10)
	{
		std::cout << std::setw(10) << str;
	}
	else 
	{
		for ( int i = 0 ; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	print_head_table(void)
{
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
}