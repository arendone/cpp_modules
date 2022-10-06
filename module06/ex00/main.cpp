/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:18:48 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 12:44:44 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Invalid input!" << RESET << std::endl;
		return (0);
	}
	std::string input = argv[1];

	Convert value(input);
	value.convertString();
	return (0);
}