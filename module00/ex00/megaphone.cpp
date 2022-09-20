/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:33:21 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/19 17:40:20 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	Megaphono(std::string message)
{
	for(int i = 0; message[i]; i++)
	{
		message[i] = std::toupper(message[i]);
		std::cout << message[i];
	}
}

int main(int argc, char **argv)
{
	std::string	message;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		return (0);
	}
		
	for(int i = 1; argv[i]; i++)
	{
		message = argv[i];
		Megaphono(message);
	}
		
	std::cout << std::endl;
	return(0);
}