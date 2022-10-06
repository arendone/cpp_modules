/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:14:13 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/30 14:35:19 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	
	::swap(a, b);
	std::cout << "a = " << a << " , b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-\n" <<std::endl;
	float c = 5.05f;
	float d = 8.05f;

	std::cout << "Min of " << c << " and " << d << std::endl;
	std::cout << ::min(c, d) <<std::endl;
	
	std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-\n" <<std::endl;
	std::string str1 = "chaine1";
	std::string str2 = "chaine2";
	
	std::cout << "string 1 : " << str1 << "\nstring 2 : " << str2 << std::endl;
	std::cout << "Max of " << str1 << " and " << str2 << std::endl;
	std::cout << ::max(str1, str2) <<std::endl;
	::swap(str1, str2);
	std::cout << "string 1 : " << str1 << "\nstring 2 : " << str2 << std::endl;
	std::cout << "Max of " << str1 << " and " << str2 << std::endl;
	std::cout << ::max(str1, str2) <<std::endl;

	return (0);
}