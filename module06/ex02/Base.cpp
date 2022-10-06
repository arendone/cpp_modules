/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:45:52 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 16:45:19 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	//std::cout << "Destructor of Base Class was called" << std::endl;
}

Base * generate(void)
{
	Base *newClass;
	srand(time(0));
	int type = (rand() % 3) + 1;
	std::cout << "Type selected: " << type << std::endl;
	
	switch (type)
	{
	case CA:
		newClass = new A();
		break;
		
	case CB:
		newClass = new B();
		break;
		
	case CC:
		newClass = new C();
		break;
	}
	return(newClass);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Pointer checked: Type A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Pointer checked: Type B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Pointer checked: Type C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Reference checked: Type A" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "Reference checked: Type B" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "Reference checked: Type C" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
}
