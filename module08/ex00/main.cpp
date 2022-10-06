/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:04:09 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/04 14:49:00 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		std::list<int> clist;
		clist.push_back(1);
		clist.push_back(1);
		clist.push_back(2);
		clist.push_back(3);
		clist.push_back(5);
		clist.push_back(8);
		clist.push_back(13);
		clist.push_back(21);
		clist.push_back(34);

		try
		{
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(clist, 1) << std::endl;
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(clist, 3) << std::endl;
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(clist, 13) << std::endl;
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(clist, 11) << std::endl;
		}
		catch(const char * message)
		{
			std::cerr << YELLOW << message << RESET << '\n';
		}
	}
	std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n"<< std::endl;
	{
		std::vector<int> cvector;
		for(int i = 0; i < 11; i++)
			cvector.push_back(i * 2);
		std::cout << "Vector is: [";
		std::vector<int>::const_iterator it;
		for(it = cvector.begin(); it != cvector.end(); it++)
			std::cout << "  "<< *it;
		std::cout << "  ]" << std::endl;

		try
		{
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(cvector, 10) << std::endl;
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(cvector, 0) << std::endl;
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(cvector, 20) << std::endl;
			std::cout << "Return value[index of the container where the value was founded]: " << easyfind(cvector, 21) << std::endl;
		}
		catch(const char * message)
		{
			std::cerr << YELLOW << message << RESET << '\n';
		}
	}
	

	return (0);
}
