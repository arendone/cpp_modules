/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:45:08 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 16:42:27 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP

#define BASE_HPP

# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

#include <iostream>
#include <ctime>
#include <cstdlib>

enum randomType
{
	CA = 1,
	CB,
	CC
};

class Base
{
	public:
		virtual ~Base();
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif